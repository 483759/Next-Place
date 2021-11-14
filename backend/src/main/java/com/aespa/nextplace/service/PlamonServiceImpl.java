package com.aespa.nextplace.service;

import com.aespa.nextplace.model.entity.*;
import com.aespa.nextplace.model.repository.ExperienceRepository;
import com.aespa.nextplace.model.repository.PladexRepository;
import com.aespa.nextplace.model.repository.PlamonRepository;
import com.aespa.nextplace.model.repository.UserRepository;
import com.aespa.nextplace.model.request.PlamonLevelUpRequest;
import com.aespa.nextplace.model.response.ListAllPlamonResponse;
import com.aespa.nextplace.model.response.ListSellPlamonResponse;
import com.aespa.nextplace.model.response.PlamonResponse;
import com.aespa.nextplace.util.LevelUtil;
import com.aespa.nextplace.util.PlamonRankUtil;
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
    private final ExperienceRepository expRepo;
    private final PlamonRankUtil rankUtil;
    private final LevelUtil levelUtil;

    public PlamonServiceImpl(PlamonRepository plamonRepo, PladexRepository pladexRepo, UserRepository userRepo, ExperienceRepository expRepo, LevelUtil levelUtil) {
        this.plamonRepo = plamonRepo;
        this.pladexRepo = pladexRepo;
        this.userRepo = userRepo;
        this.expRepo = expRepo;
        this.rankUtil = PlamonRankUtil.getInstance();
        this.levelUtil = LevelUtil.getInstance();
    }

    public User findUserByOauthUid(String oauthUid){
        return userRepo.findByOauthUid(oauthUid);
    }

    @Override
    public ListAllPlamonResponse findAllByUser(String oauthUid) {
        User user = findUserByOauthUid(oauthUid);

        if (user == null) {
            throw new IllegalArgumentException("존재하지 않는 유저입니다");
        }

        List<Plamon> plamonList = plamonRepo.findAllByUser(user);
        List<Pladex> notMyPlamonList = pladexRepo.findAllByUserWithNotMine(user);

        return new ListAllPlamonResponse(plamonList, notMyPlamonList);
    }

    public PlamonRank getPlamonRank() {
        int randomValue = (int) (Math.random() * (100 - 1 + 1)) + 1;
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

        int randomValue = (int) (Math.random() * pladexList.size());
        return pladexList.get(randomValue);
    }

    /**
     * 확률에 따라 뽑을 플레몬 랭크 선정
     * 만약 해당 랭크의 플레몬이 없다면 다른 랭크 선정
     */
    public List<Pladex> getRandomPlamonListByRank() {
        int size = rankUtil.getNumberOfRanks();
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
            throw new IllegalArgumentException("존재하지 않는 유저입니다");
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

    /**
     * 해당 달고나로 얻을 수 있는 경험치 계산
     * 현재 플레몬의 레벨+경험치로 누적 경험치 계산(Plamon 접근 1)
     * 플러스 경험치를 더했을 때 최종 누적 경험치 계산
     * 경험치 테이블에서 변화될 레벨 조회(Experience 접근1)
     * 해당 플레몬의 레벨, 경험치를 변화시킴(레벨 -> 변화된 레벨, 경험치 -> 현재 경험치 - 기준 경험치)
     * */
    @Override
    @Transactional
    public PlamonResponse levelUpWithDalgona(String oauthUid, PlamonLevelUpRequest request) throws IllegalArgumentException, IllegalStateException {
        User user = findUserByOauthUid(oauthUid);

        if (user == null) {
            throw new IllegalArgumentException("존재하지 않는 유저입니다");
        }

        if (!user.hasEnoughDalgona(request.getDalgona())) {
            throw new IllegalStateException("달고나가 부족합니다");
        }

        Plamon plamon = plamonRepo.findPlamonByUserAndId(user, request.getPlamonId());

        if(plamon == null) {
            throw  new IllegalStateException("존재하지 않는 캐릭터입니다");
        }

        Experience current = expRepo.findByLevel(plamon.getLevel());        // 현재 레벨에 해당하는 레벨 및 경험치 정보 조회

        int plusExp = levelUtil.getExpValue(request.getDalgona());        //얻을 수 있는 경험치 계산
        int nextExp = current.getAccumulated() + plamon.getExp() + plusExp;       //현재 경험치 + 얻은 경험치로 다음 경험치 계산

        Experience nextLevel = expRepo.findFirstByAccumulatedLessThanEqualOrderByLevelDesc(nextExp);    //해당 경험치로 얻을 수 있는 다음 레벨 정의

        plamon.levelUp(nextExp, nextLevel);     //레벨 변화
        user.comsumeDalgona(request.getDalgona());      //달고나 소모

        return new PlamonResponse(plamon);
    }
}
