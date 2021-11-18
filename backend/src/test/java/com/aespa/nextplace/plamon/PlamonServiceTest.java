package com.aespa.nextplace.plamon;

import com.aespa.nextplace.model.entity.*;
import com.aespa.nextplace.model.repository.ExperienceRepository;
import com.aespa.nextplace.model.repository.PladexRepository;
import com.aespa.nextplace.model.repository.PlamonRepository;
import com.aespa.nextplace.model.repository.UserRepository;
import com.aespa.nextplace.model.request.PlamonChangeMainRequest;
import com.aespa.nextplace.model.request.PlamonLevelUpRequest;
import com.aespa.nextplace.model.response.ListAllPlamonResponse;
import com.aespa.nextplace.model.response.PladexResponse;
import com.aespa.nextplace.model.response.PlamonResponse;
import com.aespa.nextplace.service.PlamonServiceImpl;
import org.junit.jupiter.api.DisplayName;
import org.junit.jupiter.api.Test;
import org.junit.jupiter.api.extension.ExtendWith;
import org.mockito.InjectMocks;
import org.mockito.Mock;
import org.mockito.junit.jupiter.MockitoExtension;
import org.springframework.transaction.annotation.Transactional;

import java.util.List;

import static org.assertj.core.api.Assertions.assertThat;
import static org.assertj.core.api.Assertions.tuple;
import static org.junit.jupiter.api.Assertions.assertThrows;
import static org.mockito.BDDMockito.given;
import static org.mockito.Mockito.verify;

@ExtendWith(MockitoExtension.class)
@Transactional
class PlamonServiceTest {

    @InjectMocks
    PlamonServiceImpl plamonService;

    @Mock
    PlamonRepository plamonRepo;

    @Mock
    UserRepository userRepo;

    @Mock
    PladexRepository pladexRepo;

    @Mock
    ExperienceRepository expRepo;

    private Pladex createPladexOfId(long id) {
        return Pladex.builder()
                .pladex(new Pladex("test", "test info", PlamonRank.SR))
                .id(id)
                .build();
    }

    private Pladex createPladexOfIdAndRank(long id, PlamonRank rank) {
        return Pladex.builder()
                .pladex(new Pladex("test", "test info", rank))
                .id(id)
                .build();
    }

    private Plamon createPlamon(long id, int level, int exp, boolean main, PlamonRank rank) {
        return Plamon.builder()
                .id(id)
                .level(level)
                .exp(exp)
                .nickname("랩실노예")
                .isMain(main)
                .pladex(createPladexOfIdAndRank(1L, rank))
                .user(createUser("G-12345", 1000, 10))
                .build();
    }

    private User createUser(String uid, int gold, int dalgona) {
        return User.builder()
                .id(1L)
                .user(new User(uid, "냉정한 고추참치"))
                .role(UserRole.USER)
                .gold(gold)
                .dalgona(dalgona)
                .avatar(null)
                .build();
    }

    @DisplayName("내가 가지지 않은 캐릭터 확인")
    @Test
    void 소유구분해서뽑기() throws Exception {
        //given
        User user = createUser("G-12345", 0, 0);
        List<Plamon> plamons = List.of(
                createPlamon(1L, 1, 0, false, PlamonRank.N),
                createPlamon(2L, 1, 0, false, PlamonRank.N),
                createPlamon(3L, 1, 0, false, PlamonRank.N)
        );
        List<Pladex> pladexes = List.of(
                createPladexOfIdAndRank(2L, PlamonRank.SSR),
                createPladexOfIdAndRank(3L, PlamonRank.SR)
        );
        given(userRepo.findByOauthUid(user.getOauthUid()))
                .willReturn(user);
        given(plamonRepo.findAllByUser(user))
                .willReturn(plamons);
        given(pladexRepo.findAllByUserWithNotMine(user))
                .willReturn(pladexes);

        //when
        ListAllPlamonResponse all = plamonService.findAllByUser(user.getOauthUid());
        List<PlamonResponse> myPlamon = all.getMyPlamon();
        List<PladexResponse> notMyPlamon = all.getNotMyPlamon().getPladexList();

        //then
        assertThat(all).isNotNull();
        assertThat(myPlamon.size())
                .isEqualTo(3);
        assertThat(notMyPlamon.size())
                .isEqualTo(2);
        assertThat(myPlamon)
                .extracting("id", "pladex.rank")
                .containsExactly(
                        tuple(1L, PlamonRank.N),
                        tuple(2L, PlamonRank.N),
                        tuple(3L, PlamonRank.N)
                );
        assertThat(notMyPlamon)
                .extracting("id", "rank")
                .containsExactly(
                        tuple(2L, PlamonRank.SSR),
                        tuple(3L, PlamonRank.SR)
                );
        verify(pladexRepo).findAllByUserWithNotMine(user);
        verify(plamonRepo).findAllByUser(user);
    }

    @DisplayName("캐릭터를 1레벨 업한다")
    @Test
    void 레벨업_1() throws Exception {
        //given
        User user = createUser("G-12345", 1000, 30);
        Plamon plamon = createPlamon(1L, 1, 0, false, PlamonRank.SR);
        Experience next = new Experience(2, 15, 34);
        Experience cur = new Experience(1, 0, 15);

        given(userRepo.findByOauthUid(user.getOauthUid()))
                .willReturn(user);
        given(plamonRepo.findPlamonByUserAndId(user, plamon.getId()))
                .willReturn(plamon);
        given(expRepo.findFirstByAccumulatedLessThanEqualOrderByLevelDesc(30))
                .willReturn(next);
        given(expRepo.findByLevel(1))
                .willReturn(cur);

        //when
        PlamonResponse response = plamonService.levelUpWithDalgona(user.getOauthUid(), new PlamonLevelUpRequest(plamon.getId(), 1));

        //then
        assertThat(response.getLevel())
                .isEqualTo(2);
        assertThat(response.getExp())
                .isEqualTo(15);
    }

    @DisplayName("캐릭터를 3레벨 업한다")
    @Test
    void 레벨업_3() throws Exception {
        //given
        User user = createUser("G-12345", 1000, 30);
        Plamon plamon = createPlamon(1L, 3, 1, false, PlamonRank.SR);
        Experience next = new Experience(6, 333, 372);
        Experience cur = new Experience(3, 49, 57);

        given(userRepo.findByOauthUid(user.getOauthUid()))
                .willReturn(user);
        given(plamonRepo.findPlamonByUserAndId(user, plamon.getId()))
                .willReturn(plamon);
        given(expRepo.findFirstByAccumulatedLessThanEqualOrderByLevelDesc(380))
                .willReturn(next);
        given(expRepo.findByLevel(3))
                .willReturn(cur);

        //when
        PlamonResponse response = plamonService.levelUpWithDalgona(user.getOauthUid(), new PlamonLevelUpRequest(plamon.getId(), 11));

        //then
        assertThat(response.getLevel())
                .isEqualTo(6);
        assertThat(response.getExp())
                .isEqualTo(47);
    }

    @DisplayName("최대 레벨 이상의 레벨업을 시도한다")
    @Test
    void 레벨업_MAX() throws Exception {
        //given
        User user = createUser("G-12345", 1000, 50000);
        Plamon plamon = createPlamon(1L, 3, 1, false, PlamonRank.SR);
        Experience next = new Experience(15, 9557, 1490);
        Experience cur = new Experience(3, 49, 57);

        given(userRepo.findByOauthUid(user.getOauthUid()))
                .willReturn(user);
        given(plamonRepo.findPlamonByUserAndId(user, plamon.getId()))
                .willReturn(plamon);
        given(expRepo.findFirstByAccumulatedLessThanEqualOrderByLevelDesc(30050))
                .willReturn(next);
        given(expRepo.findByLevel(3))
                .willReturn(cur);

        //when
        PlamonResponse response = plamonService.levelUpWithDalgona(user.getOauthUid(), new PlamonLevelUpRequest(plamon.getId(), 1000));

        //then
        assertThat(response.getLevel())
                .isEqualTo(15);
        assertThat(response.getExp())
                .isEqualTo(1490);
    }

    @DisplayName("사용하려는 달고나 개수가 보유 개수보다 부족하다")
    @Test
    void 달고나부족() throws Exception {
        //given
        User user = createUser("G-12345", 1000, 3);

        given(userRepo.findByOauthUid(user.getOauthUid()))
                .willReturn(user);

        //when

        IllegalStateException exception =
                assertThrows(IllegalStateException.class,
                        () -> plamonService.levelUpWithDalgona(user.getOauthUid(), new PlamonLevelUpRequest(1L, 5)));

        //then
        assertThat(exception.getMessage())
                .isEqualTo("달고나가 부족합니다");
    }

    @DisplayName("내 대표 캐릭터 조회")
    @Test
    void 대표캐릭터() throws Exception {
        //given
        User user = createUser("G-12345", 1000, 3);
        Plamon plamon = createPlamon(1L, 1, 0, true, PlamonRank.SR);

        given(userRepo.findByOauthUid(user.getOauthUid()))
                .willReturn(user);
        given(plamonRepo.findPlamonByUserAndMainIsTrue(user))
                .willReturn(plamon);

        //when
        PlamonResponse response = plamonService.getMyMainPlamon(user.getOauthUid());

        //then
        assertThat(response.isMain())
                .isEqualTo(true);
        verify(userRepo).findByOauthUid(user.getOauthUid());
        verify(plamonRepo).findPlamonByUserAndMainIsTrue(user);
    }

    @DisplayName("대표 캐릭터가 없음")
    @Test
    void 대표캐릭터_없음() throws Exception {
        //given
        User user = createUser("G-12345", 1000, 3);
        Plamon plamon = createPlamon(1L, 1, 0, true, PlamonRank.SR);
        Pladex defaultPladex = createPladexOfId(16L);
        Plamon defaultPlamon = new Plamon(defaultPladex, user);

        given(userRepo.findByOauthUid(user.getOauthUid()))
                .willReturn(user);
        given(plamonRepo.findPlamonByUserAndMainIsTrue(user))
                .willReturn(null);
        given(pladexRepo.findDefaultPlamon())
                .willReturn(defaultPladex);

        //when
        PlamonResponse response = plamonService.getMyMainPlamon(user.getOauthUid());

        //then
        assertThat(response.getPladex().getId())
                .isEqualTo(16L);
        verify(userRepo).findByOauthUid(user.getOauthUid());
        verify(plamonRepo).findPlamonByUserAndMainIsTrue(user);
        verify(pladexRepo).findDefaultPlamon();
    }

    @DisplayName("대표 캐릭터 변경")
    @Test
    void 대표캐릭터_변경() throws Exception {
        //given
        User user = createUser("G-12345", 1000, 3);
        Plamon existingMainPlamon = createPlamon(1L, 1, 0, true, PlamonRank.SR);
        Plamon newMainPlamonBeforeChange = createPlamon(2L, 1, 0, false, PlamonRank.SSR);
        Plamon newMainPlamonAfterChange = createPlamon(2L, 1, 0, true, PlamonRank.SSR);
        PlamonChangeMainRequest request = new PlamonChangeMainRequest(newMainPlamonAfterChange.getId());

        given(userRepo.findByOauthUid(user.getOauthUid()))
                .willReturn(user);
        given(plamonRepo.findPlamonByUserAndMainIsTrue(user))
                .willReturn(existingMainPlamon);
        given(plamonRepo.findPlamonByUserAndId(user, newMainPlamonBeforeChange.getId()))
                .willReturn(newMainPlamonBeforeChange);

        //when
        PlamonResponse response = plamonService.changeMainPlamon(user.getOauthUid(), request);

        //then
        assertThat(response.isMain())
                .isTrue();
        assertThat(response.getId())
                .isEqualTo(2L);
        verify(userRepo).findByOauthUid(user.getOauthUid());
        verify(plamonRepo).findPlamonByUserAndMainIsTrue(user);
        verify(plamonRepo).findPlamonByUserAndId(user, newMainPlamonBeforeChange.getId());
    }

    @DisplayName("보유하지 않은 캐릭터로 대표 변경 시도")
    @Test
    void 가지지않은_캐릭터_대표캐릭터_변경() throws Exception {
        //given
        User user = createUser("G-12345", 1000, 3);
        Plamon newMainPlamonBeforeChange = createPlamon(2L, 1, 0, false, PlamonRank.SSR);
        Plamon newMainPlamonAfterChange = createPlamon(2L, 1, 0, true, PlamonRank.SSR);
        PlamonChangeMainRequest request = new PlamonChangeMainRequest(newMainPlamonAfterChange.getId());

        given(userRepo.findByOauthUid(user.getOauthUid()))
                .willReturn(user);
        given(plamonRepo.findPlamonByUserAndId(user, newMainPlamonBeforeChange.getId()))
                .willReturn(null);

        //when
        IllegalStateException exception =
                assertThrows(IllegalStateException.class,
                        () -> plamonService.changeMainPlamon(user.getOauthUid(), request));

        //then
        assertThat(exception.getMessage())
                .isEqualTo("보유하지 않은 캐릭터입니다");
        verify(userRepo).findByOauthUid(user.getOauthUid());
        verify(plamonRepo).findPlamonByUserAndId(user, newMainPlamonBeforeChange.getId());
    }
}
