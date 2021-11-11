package com.aespa.nextplace.service;

import com.aespa.nextplace.model.entity.Pladex;
import com.aespa.nextplace.model.entity.Plamon;
import com.aespa.nextplace.model.entity.PlamonRank;
import com.aespa.nextplace.model.entity.User;
import com.aespa.nextplace.model.repository.PladexRepository;
import com.aespa.nextplace.model.repository.PlamonRepository;
import com.aespa.nextplace.model.repository.UserRepository;
import com.aespa.nextplace.model.response.ListPlamonResponse;
import com.aespa.nextplace.model.response.PlamonResponse;
import com.google.common.collect.ImmutableMap;
import org.springframework.data.domain.Pageable;
import org.springframework.stereotype.Service;
import org.springframework.transaction.annotation.Transactional;

import java.util.*;

@Service
@Transactional(readOnly = true)
public class PlamonServiceImpl implements PlamonService {
    private final PlamonRepository plamonRepo;
    private final PladexRepository pladexRepo;
    private final UserRepository userRepo;
    private final int gatchaPrice = 100;
    private final Map<PlamonRank, Integer> gatchaProbability;

    public PlamonServiceImpl(PlamonRepository plamonRepo, PladexRepository pladexRepo, UserRepository userRepo) {
        this.plamonRepo = plamonRepo;
        this.pladexRepo = pladexRepo;
        this.userRepo = userRepo;
        this.gatchaProbability = ImmutableMap.of(
                PlamonRank.N, 40,
                PlamonRank.R, 70,
                PlamonRank.SR, 90,
                PlamonRank.SSR, 100
        );
    }

    public User findUserByOauthUid(String oauthUid){
        return userRepo.findByOauthUid(oauthUid);
    }

    @Override
    public ListPlamonResponse findAllByUser(String oauthUid) {
        User user = findUserByOauthUid(oauthUid);

        if (user == null) {
            throw new IllegalArgumentException("존재하지 않는 유저입니다");
        }

        List<Plamon> plamonList = plamonRepo.findAllByUser(user);

        return new ListPlamonResponse(plamonList);
    }

    @Override
    public ListPlamonResponse findAllByUserWithPagination(String oauthUid, Pageable pageable) {
        User user = findUserByOauthUid(oauthUid);

        if (user == null) {
            throw new IllegalArgumentException("존재하지 않는 유저입니다");
        }

        List<Plamon> plamonList = plamonRepo.findAllByUser(user, pageable);

        return new ListPlamonResponse(plamonList);
    }

    public PlamonRank getPlamonRank() {
        int randomValue = (int) (Math.random() * (100 - 1 + 1)) + 1;
        PlamonRank plamonRank = null;

        if (randomValue <= gatchaProbability.get(PlamonRank.N)) {
            plamonRank = PlamonRank.N;
        } else if (randomValue <= gatchaProbability.get(PlamonRank.R)) {
            plamonRank = PlamonRank.R;
        } else if (randomValue <= gatchaProbability.get(PlamonRank.SR)) {
            plamonRank = PlamonRank.SR;
        } else if (randomValue <= gatchaProbability.get(PlamonRank.SSR)) {
            plamonRank = PlamonRank.SSR;
        }
        return plamonRank;
    }

    public Pladex selectOnePlamon(List<Pladex> pladexList) {
        if (pladexList.isEmpty()) {
            return null;
        }

        int randomValue = (int) (Math.random() * pladexList.size());
        return pladexList.get(randomValue);
    }

    /**
     * 확률에 따라 뽑을 플레몬 랭크 선정
     * 만약 해당 랭크의 플레몬이 없다면 다른 랭크 선정
     */
    public List<Pladex> getRandomPlamonListByRank() {
        int size = gatchaProbability.size();
        Map<PlamonRank, Boolean> checkList = new HashMap<>();
        List<Pladex> pladexList = new ArrayList<>();

        while (size != checkList.size()) {
            PlamonRank plamonRank = getPlamonRank();

            if (checkList.containsKey(plamonRank)) {
                continue;
            }

            checkList.put(plamonRank, true);

            pladexList = pladexRepo.findAllByRank(plamonRank);
            if (pladexList.isEmpty()) {
                continue;
            }

            break;
        }

        return pladexList;
    }

    @Override
    @Transactional
    /**
     * 캐릭터 뽑기
     * 유저를 인증한 뒤, 뽑기를 할 수 있는 골드가 있는지 확인한다
     * 랭크 별 획득 확률에 따라 뽑을 캐릭터의 랭크를 먼저 정한다
     * 해당 랭크에 속한 캐릭터 중 랜덤으로 한 캐릭터를 뽑아 저장한다
     * */
    public PlamonResponse buyNewPlamonWithGold(String oauthUid) throws IllegalArgumentException, IllegalStateException{
        User user = findUserByOauthUid(oauthUid);

        if (user == null) {
            throw new IllegalArgumentException("존재하지 않는 유저입니다");
        }

        if (!user.hasEnoughGold(gatchaPrice)) {
            throw new IllegalStateException("캐릭터를 구매할 골드가 부족합니다");
        }

        List<Pladex> pladexList = getRandomPlamonListByRank();
        Pladex randomPlamon = selectOnePlamon(pladexList);

        if (randomPlamon == null) {
            throw new UnsupportedOperationException("얻을 수 있는 캐릭터가 없습니다");
        }

        Plamon plamon = plamonRepo.save(new Plamon(randomPlamon, user));
        user.minusGold(gatchaPrice);

        return new PlamonResponse(plamon);
    }

    /**
     * 자신의 대표 캐릭터는 판매할 수 없음
     * */
    @Override
    public ListPlamonResponse sell(String oauthUid, Long plamonId) throws IllegalArgumentException {
        User user = findUserByOauthUid(oauthUid);

        if (user == null) {
            throw new IllegalArgumentException("존재하지 않는 유저입니다");
        }

        Optional<Plamon> plamon = plamonRepo.findPlamonByUserAndId(user, plamonId);

        if (plamon.isEmpty()) {
            throw new IllegalArgumentException("해당 캐릭터는 보유 중이 아닙니다");
        }

        // 해당 플레몬의 등급만큼의 금액을 번다
        PlamonRank rank = plamon.get().getPladex().getRank();
        // int sellingPrice = rankUtil.getSellingPrice(rank);
        // user.plusGold(sellingPrice);

        plamonRepo.delete(plamon.get());        //해당 플레몬 제거
        userRepo.save(user);

        return findAllByUser(oauthUid);
    }
}
