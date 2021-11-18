package com.aespa.nextplace.service;

import com.aespa.nextplace.model.entity.Pladex;
import com.aespa.nextplace.model.entity.Plamon;
import com.aespa.nextplace.model.entity.PlamonRank;
import com.aespa.nextplace.model.entity.User;
import com.aespa.nextplace.model.repository.PladexRepository;
import com.aespa.nextplace.model.repository.PlamonRepository;
import com.aespa.nextplace.model.repository.UserRepository;
import com.aespa.nextplace.model.response.ListAllPlamonResponse;
import com.aespa.nextplace.model.response.ListSellPlamonResponse;
import com.aespa.nextplace.model.response.PlamonResponse;
import com.aespa.nextplace.util.PlamonRankUtil;
import org.springframework.stereotype.Service;
import org.springframework.transaction.annotation.Transactional;

import java.util.ArrayList;
import java.util.EnumMap;
import java.util.List;
import java.util.Random;

@Service
@Transactional(readOnly = true)
public class PlamonDealServiceImpl implements PlamonDealService{
    private static final String UNAUTHORIZED_USER_MESSAGE = "존재하지 않는 유저입니다";
    private final PlamonRepository plamonRepo;
    private final PladexRepository pladexRepo;
    private final UserRepository userRepo;
    private final PlamonRankUtil rankUtil;
    private final Random random;

    public PlamonDealServiceImpl(PlamonRepository plamonRepo, PladexRepository pladexRepo, UserRepository userRepo) {
        this.plamonRepo = plamonRepo;
        this.pladexRepo = pladexRepo;
        this.userRepo = userRepo;
        this.rankUtil = PlamonRankUtil.getInstance();
        this.random = new Random();
    }

    @Override
    public User findUserByOauthUid(String oauthUid){
        return userRepo.findByOauthUid(oauthUid);
    }

    @Override
    public ListAllPlamonResponse findAllByUser(String oauthUid) {
        User user = findUserByOauthUid(oauthUid);

        if (user == null) {
            throw new IllegalArgumentException(UNAUTHORIZED_USER_MESSAGE);
        }

        List<Plamon> plamonList = plamonRepo.findAllByUser(user);
        List<Pladex> notMyPlamonList = pladexRepo.findAllByUserWithNotMine(user);

        return new ListAllPlamonResponse(plamonList, notMyPlamonList);
    }

    public PlamonRank getPlamonRank() {
        int randomValue = random.nextInt(100) + 1;
        PlamonRank plamonRank = null;

        if (randomValue <= rankUtil.getProbabilityOfRank(PlamonRank.N)) {
            plamonRank = PlamonRank.N;
        } else if (randomValue <= rankUtil.getProbabilityOfRank(PlamonRank.R)) {
            plamonRank = PlamonRank.R;
        } else if (randomValue <= rankUtil.getProbabilityOfRank(PlamonRank.SR)) {
            plamonRank = PlamonRank.SR;
        } else if (randomValue <= rankUtil.getProbabilityOfRank(PlamonRank.SSR)) {
            plamonRank = PlamonRank.SSR;
        }
        return plamonRank;
    }

    public Pladex selectOnePlamon(List<Pladex> pladexList) {
        if (pladexList.isEmpty()) {
            return null;
        }

        int randomValue = random.nextInt(pladexList.size());
        return pladexList.get(randomValue);
    }

    /**
     * 확률에 따라 뽑을 플레몬 랭크 선정
     * 만약 해당 랭크의 플레몬이 없다면 다른 랭크 선정
     */
    public List<Pladex> getRandomPlamonListByRank() {
        int size = rankUtil.getNumberOfRanks();
        EnumMap<PlamonRank, Boolean> checkList = new EnumMap<>(PlamonRank.class);
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
            throw new IllegalArgumentException(UNAUTHORIZED_USER_MESSAGE);
        }

        if (!user.hasEnoughGold(rankUtil.getGatchaPrice())) {
            throw new IllegalStateException("캐릭터를 구매할 골드가 부족합니다");
        }

        List<Pladex> pladexList = getRandomPlamonListByRank();
        Pladex randomPlamon = selectOnePlamon(pladexList);

        if (randomPlamon == null) {
            throw new UnsupportedOperationException("얻을 수 있는 캐릭터가 없습니다");
        }

        Plamon plamon = plamonRepo.save(new Plamon(randomPlamon, user));
        user.minusGold(rankUtil.getGatchaPrice());

        return new PlamonResponse(plamon);
    }

    /**
     * 자신의 대표 캐릭터는 판매할 수 없음
     * 레벨 * 캐릭터의 등급만큼 달고나를 얻음
     * */
    @Override
    @Transactional
    public ListSellPlamonResponse sell(String oauthUid, Long plamonId) throws IllegalArgumentException, IllegalStateException {
        User user = findUserByOauthUid(oauthUid);

        if (user == null) {
            throw new IllegalArgumentException(UNAUTHORIZED_USER_MESSAGE);
        }

        Plamon plamon = plamonRepo.findPlamonByUserAndId(user, plamonId);

        if (plamon == null) {
            throw new IllegalStateException("해당 캐릭터는 보유 중이 아닙니다");
        }

        if (plamon.isMain()) {
            throw new IllegalStateException("대표 캐릭터는 삭제할 수 없습니다");
        }

        // 해당 플레몬의 등급만큼의 금액을 번다
        PlamonRank rank = plamon.getPladex().getRank();
        int sellingDalgona = rankUtil.getSalesPriceOfRankAndLevel(rank, plamon.getLevel());
        user.earnDalgona(sellingDalgona);

        plamonRepo.delete(plamon);        //해당 플레몬 제거
        ListAllPlamonResponse allByUser = findAllByUser(oauthUid);

        return new ListSellPlamonResponse(user.getDalgona(), allByUser.getMyPlamon(), allByUser.getNotMyPlamon());
    }

}
