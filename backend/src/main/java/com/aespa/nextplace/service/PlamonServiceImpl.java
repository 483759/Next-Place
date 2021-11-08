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
import org.springframework.stereotype.Service;
import org.springframework.transaction.annotation.Transactional;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

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
        List<Plamon> plamonList = plamonRepo.findAllByUser(user);

        return new ListPlamonResponse(plamonList);
    }

    public PlamonRank getPlamonRank() {
        int randomValue = (int) (Math.random() * (100 - 1 + 1)) + 1;
        PlamonRank plamonRank = null;

        // 랜덤 값으로 뽑기를 시도할 랭크 지정
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

            // 이미 시도해본 값(해당 랭크의 플레몬이 존재하지 않음)일 때는 continue
            if (checkList.containsKey(plamonRank)) {
                continue;
            }

            checkList.put(plamonRank, true);

            pladexList = pladexRepo.findAllByRank(plamonRank);
            if (pladexList.isEmpty()) {  // 만약 해당 랭크에 속하는 플레몬이 없으면 다시 뽑기 해야함
                continue;
            }

            break;
        }

        return pladexList;
    }

    @Override
    @Transactional
    /**
     * 유저 검증(골드가 뽑기에 충분한지)
     * 등급 별 확률 조정
     * 랜덤 확률에 따른 등급 선정
     * 해당 등급의 플레몬 뽑기 -> if 없다면? 다른 등급 뽑기
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
        Pladex randomPlamon = selectOnePlamon(pladexList);      //얻을 플레몬 선택

        Plamon plamon = plamonRepo.save(new Plamon(randomPlamon, user));    // 디폴트 캐릭터 생성 후 저장
        user.minusGold(gatchaPrice);    // 유저에게서 금액 마이너스

        return new PlamonResponse(plamon);
    }
}
