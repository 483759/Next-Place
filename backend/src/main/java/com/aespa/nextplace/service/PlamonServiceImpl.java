package com.aespa.nextplace.service;

import com.aespa.nextplace.model.entity.Experience;
import com.aespa.nextplace.model.entity.Pladex;
import com.aespa.nextplace.model.entity.Plamon;
import com.aespa.nextplace.model.entity.User;
import com.aespa.nextplace.model.repository.ExperienceRepository;
import com.aespa.nextplace.model.repository.PladexRepository;
import com.aespa.nextplace.model.repository.PlamonRepository;
import com.aespa.nextplace.model.repository.UserRepository;
import com.aespa.nextplace.model.request.PlamonChangeMainRequest;
import com.aespa.nextplace.model.request.PlamonLevelUpRequest;
import com.aespa.nextplace.model.response.ListAllPlamonResponse;
import com.aespa.nextplace.model.response.PlamonResponse;
import com.aespa.nextplace.util.LevelUtil;
import org.springframework.stereotype.Service;
import org.springframework.transaction.annotation.Transactional;

import java.util.List;

@Service
@Transactional(readOnly = true)
public class PlamonServiceImpl implements PlamonService {
    private final PlamonRepository plamonRepo;
    private final PladexRepository pladexRepo;
    private final UserRepository userRepo;
    private final ExperienceRepository expRepo;
    private final LevelUtil levelUtil;
    private static final String UNAUTHORIZED_USER_MESSAGE = "존재하지 않는 유저입니다";

    public PlamonServiceImpl(PlamonRepository plamonRepo, PladexRepository pladexRepo, UserRepository userRepo, ExperienceRepository expRepo) {
        this.plamonRepo = plamonRepo;
        this.pladexRepo = pladexRepo;
        this.userRepo = userRepo;
        this.expRepo = expRepo;
        this.levelUtil = LevelUtil.getInstance();
    }

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
            throw new IllegalArgumentException(UNAUTHORIZED_USER_MESSAGE);
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
        user.consumeDalgona(request.getDalgona());      //달고나 소모

        return new PlamonResponse(plamon);
    }

    @Override
    public PlamonResponse getMyMainPlamon(String oauthUid) throws IllegalArgumentException{
        User user = findUserByOauthUid(oauthUid);

        if (user == null) {
            throw new IllegalArgumentException(UNAUTHORIZED_USER_MESSAGE);
        }

        Plamon mainPlamon = plamonRepo.findPlamonByUserAndMainIsTrue(user);

        if(mainPlamon == null) {    // 대표 캐릭터가 없음
            Pladex defaultPlamon = pladexRepo.findDefaultPlamon();
            return new PlamonResponse(new Plamon(defaultPlamon, user));
        }

        return new PlamonResponse(mainPlamon);
    }

    @Override
    @Transactional
    public PlamonResponse changeMainPlamon(String oauthUid, PlamonChangeMainRequest request) throws IllegalStateException {
        User user = findUserByOauthUid(oauthUid);

        if (user == null) {
            throw new IllegalArgumentException(UNAUTHORIZED_USER_MESSAGE);
        }

        Plamon existingMainPlamon = plamonRepo.findPlamonByUserAndMainIsTrue(user);
        Plamon newMainPlamon = plamonRepo.findPlamonByUserAndId(user, request.getNewMainId());

        if (newMainPlamon == null) {
            throw new IllegalStateException("보유하지 않은 캐릭터입니다");
        }

        existingMainPlamon.resignMain();
        newMainPlamon.appointMain();

        return new PlamonResponse(newMainPlamon);
    }
}
