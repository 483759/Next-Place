package com.aespa.nextplace.plamon;

import com.aespa.nextplace.model.entity.*;
import com.aespa.nextplace.model.repository.ExperienceRepository;
import com.aespa.nextplace.model.repository.PladexRepository;
import com.aespa.nextplace.model.repository.PlamonRepository;
import com.aespa.nextplace.model.repository.UserRepository;
import com.aespa.nextplace.model.request.PlamonLevelUpRequest;
import com.aespa.nextplace.model.response.ListAllPlamonResponse;
import com.aespa.nextplace.model.response.ListSellPlamonResponse;
import com.aespa.nextplace.model.response.PladexResponse;
import com.aespa.nextplace.model.response.PlamonResponse;
import com.aespa.nextplace.service.PlamonServiceImpl;
import com.aespa.nextplace.util.PlamonRankUtil;
import org.junit.jupiter.api.Disabled;
import org.junit.jupiter.api.DisplayName;
import org.junit.jupiter.api.Test;
import org.junit.jupiter.api.extension.ExtendWith;
import org.mockito.InjectMocks;
import org.mockito.Mock;
import org.mockito.junit.jupiter.MockitoExtension;
import org.springframework.transaction.annotation.Transactional;

import java.util.ArrayList;
import java.util.List;

import static org.assertj.core.api.Assertions.assertThat;
import static org.assertj.core.api.Assertions.tuple;
import static org.junit.jupiter.api.Assertions.assertThrows;
import static org.mockito.ArgumentMatchers.any;
import static org.mockito.BDDMockito.given;
import static org.mockito.Mockito.times;
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
    public void 소유구분해서뽑기() throws Exception {
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

    @DisplayName("N 등급을 랜덤으로 뽑을 수 있는지 검증한다")
    @Test
    public void N등급뽑기() throws Exception {
        //given
        List<Pladex> normalPlamonList = List.of(
                createPladexOfIdAndRank(1L, PlamonRank.N),
                createPladexOfIdAndRank(2L, PlamonRank.N),
                createPladexOfIdAndRank(3L, PlamonRank.N)
        );
        given(pladexRepo.findAllByRank(any(PlamonRank.class)))
                .willReturn(normalPlamonList);

        //when
        List<Pladex> pladexList = plamonService.getRandomPlamonListByRank();

        //then
        assertThat(pladexList.size())
                .isEqualTo(normalPlamonList.size());
        assertThat(pladexList)
                .extracting("id", "rank")
                .containsExactly(
                        tuple(1L, PlamonRank.N),
                        tuple(2L, PlamonRank.N),
                        tuple(3L, PlamonRank.N)
                );
        verify(pladexRepo).findAllByRank(any(PlamonRank.class));
    }

    @DisplayName("플레몬 리스트 중 랜덤으로 뽑는다")
    @Test
    public void 여러개중랜덤뽑기() throws Exception {
        //given
        List<Pladex> normalPlamonList = List.of(
                createPladexOfIdAndRank(1L, PlamonRank.N),
                createPladexOfIdAndRank(2L, PlamonRank.N),
                createPladexOfIdAndRank(3L, PlamonRank.N)
        );

        //when
        Pladex pladex = plamonService.selectOnePlamon(normalPlamonList);

        //then
        assertThat(pladex)
                .isNotNull();
        assertThat(pladex.getRank())
                .isEqualTo(PlamonRank.N);
    }

    @DisplayName("아무것도 없는데 뽑을 시 null")
    @Test
    public void 없는데랜덤뽑기() throws Exception {
        //given
        List<Pladex> pladexList = new ArrayList<>();

        //when
        Pladex pladex = plamonService.selectOnePlamon(pladexList);

        //then
        assertThat(pladex)
                .isNull();
    }

    @DisplayName("각각의 등급을 랜덤으로 뽑을 수 있는지 검증한다")
    @Test
    @Disabled
    public void 각각의등급뽑기() throws Exception {
        //given
        int count;

        //when and then
        for (var plamonRank : PlamonRank.values()) {
            count = 0;

            while (plamonService.getPlamonRank() != plamonRank) {
                count++;
            }

            assertThat(count)
                    .isGreaterThan(-1);
        }
    }

    @DisplayName("골드를 사용해서 새로운 플레몬을 획득한다")
    @Test
    public void 플레몬뽑기() throws IllegalArgumentException {
        //given
        User user = createUser("G-12345", 1000, 0);
        List<Pladex> pladexList = List.of(
                createPladexOfIdAndRank(1L, PlamonRank.N),
                createPladexOfIdAndRank(2L, PlamonRank.N),
                createPladexOfIdAndRank(3L, PlamonRank.N)
        );
        Pladex selectedPlamon = createPladexOfIdAndRank(1L, PlamonRank.SR);
        Plamon plamon = new Plamon(selectedPlamon, user);

        given(userRepo.findByOauthUid("G-12345"))
                .willReturn(user);
        given(pladexRepo.findAllByRank(any(PlamonRank.class)))
                .willReturn(pladexList);
        given(plamonRepo.save(any(Plamon.class)))
                .willReturn(plamon);

        //when
        PlamonResponse plamonResponseDto = null;
        plamonResponseDto = plamonService.buyNewPlamonWithGold(user.getOauthUid());


        //then
        assertThat(plamonResponseDto)
                .isNotNull();
        assertThat(plamonResponseDto.getId())
                .isEqualTo(plamon.getId());
        assertThat(plamonResponseDto.getPladex().getRank())
                .isEqualTo(PlamonRank.SR);
        assertThat(plamonResponseDto.getNickname())
                .isEqualTo("test");
        assertThat(user.getGold())
                .isEqualTo(900);
    }

    @DisplayName("골드가 부족하면 캐릭터 구매 불가능")
    @Test
    public void 플레몬뽑기골드부족() throws IllegalArgumentException {
        //given
        User user = createUser("G-12345", 50, 0);
        given(userRepo.findByOauthUid("G-12345"))
                .willReturn(user);

        //when
        IllegalStateException exception = assertThrows(IllegalStateException.class, ()-> plamonService.buyNewPlamonWithGold(user.getOauthUid()));


        //then
        assertThat(exception.getMessage())
                .isEqualTo("캐릭터를 구매할 골드가 부족합니다");
    }

    @DisplayName("존재하지 않는 유저는 뽑기 불가")
    @Test
    public void 캐릭터인증() throws Exception {
        //given
        User user = createUser("B-12345", 0, 0);
        given(userRepo.findByOauthUid("B-12345"))
                .willReturn(null);

        //when
        IllegalArgumentException exception = assertThrows(IllegalArgumentException.class, ()-> plamonService.buyNewPlamonWithGold(user.getOauthUid()));

        //then
        assertThat(exception.getMessage())
                .isEqualTo("존재하지 않는 유저입니다");
    }

    @DisplayName("내가 가지고 있는 캐릭터를 판매한다")
    @Test
    public void 캐릭터팔기() throws Exception {
        //given
        User user = createUser("G-12345", 1000, 0);
        int preDalgona = user.getDalgona();
        List<Plamon> afterPlamons = List.of(
                createPlamon(1L, 1, 0, false, PlamonRank.SR),
                createPlamon(3L, 1, 0, false, PlamonRank.SR)
        );
        Plamon sellingPlamon = createPlamon(2L, 1, 0, false, PlamonRank.SR);
        given(userRepo.findByOauthUid("G-12345"))
                .willReturn(user);
        given(plamonRepo.findPlamonByUserAndId(user, 2L))
                .willReturn(sellingPlamon);
        given(plamonRepo.findAllByUser(user))
                .willReturn(afterPlamons);
        given(pladexRepo.findAllByUserWithNotMine(user))
                .willReturn(List.of(sellingPlamon.getPladex()));

        //when
        ListSellPlamonResponse allPlamonResponse = plamonService.sell(user.getOauthUid(), sellingPlamon.getId());

        //then
        verify(userRepo, times(2)).findByOauthUid(user.getOauthUid());
        verify(plamonRepo).findAllByUser(user);
        verify(plamonRepo).delete(sellingPlamon);
        assertThat(allPlamonResponse.getDalgona())
                .isEqualTo(preDalgona
                        + PlamonRankUtil.getInstance().getSalesPriceOfRankAndLevel(PlamonRank.SR, 1));
        assertThat(allPlamonResponse.getMyPlamon())
                .extracting("id", "level")
                .containsExactly(
                        tuple(1L, 1),
                        tuple(3L, 1)
                );
        assertThat(allPlamonResponse.getNotMyPlamon().getPladexList())
                .extracting("id", "rank")
                .containsExactly(
                        tuple(1L, PlamonRank.SR)
                );
        assertThat(user.getDalgona())
                .isEqualTo(5);
    }

    @DisplayName("소유중이 아닌 캐릭터는 판매할 수 없다")
    @Test
    public void 미소유캐릭터팔기() throws Exception {
        //given
        User user = createUser("G-12345", 1000, 0);
        given(userRepo.findByOauthUid("G-12345"))
                .willReturn(user);
        given(plamonRepo.findPlamonByUserAndId(user, 2L))
                .willReturn(null);

        //when
        IllegalStateException exception =
                assertThrows(IllegalStateException.class,
                        ()-> plamonService.sell(user.getOauthUid(), 2L));

        //then
        assertThat(exception.getMessage())
                .isEqualTo("해당 캐릭터는 보유 중이 아닙니다");
    }

    @DisplayName("대표 캐릭터는 판매할 수 없다")
    @Test
    public void 대표캐릭터팔기() throws Exception {
        //given
        User user = createUser("G-12345", 1000, 0);
        Plamon sellingPlamon = createPlamon(2L, 1, 0, true, PlamonRank.N);
        given(userRepo.findByOauthUid("G-12345"))
                .willReturn(user);
        given(plamonRepo.findPlamonByUserAndId(user, 2L))
                .willReturn(sellingPlamon);

        //when
        IllegalStateException exception =
                assertThrows(IllegalStateException.class,
                        ()-> plamonService.sell(user.getOauthUid(), sellingPlamon.getId()));


        //then
        assertThat(exception.getMessage())
                .isEqualTo("대표 캐릭터는 삭제할 수 없습니다");
    }

    @DisplayName("캐릭터를 1레벨 업한다")
    @Test
    public void 레벨업_1() throws Exception {
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
    public void 레벨업_3() throws Exception {
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
    public void 레벨업_MAX() throws Exception {
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
    public void 달고나부족() throws Exception {
        //given
        User user = createUser("G-12345", 1000, 3);

        given(userRepo.findByOauthUid(user.getOauthUid()))
                .willReturn(user);

        //when

        IllegalStateException exception =
                assertThrows(IllegalStateException.class,
                        ()-> plamonService.levelUpWithDalgona(user.getOauthUid(), new PlamonLevelUpRequest(1L, 5)));

        //then
        assertThat(exception.getMessage())
                .isEqualTo("달고나가 부족합니다");
    }

    @DisplayName("내 대표 캐릭터 조회")
    @Test
    public void 대표캐릭터() throws Exception {
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
    public void 대표캐릭터_없음() throws Exception {
        //given
        User user = createUser("G-12345", 1000, 3);
        Plamon plamon = createPlamon(1L, 1, 0, true, PlamonRank.SR);
        Plamon defaultPlamon = createPlamon(16L, 1, 0, true, PlamonRank.SSR);

        given(userRepo.findByOauthUid(user.getOauthUid()))
                .willReturn(user);
        given(plamonRepo.findPlamonByUserAndMainIsTrue(user))
                .willReturn(null);
        given(plamonRepo.findDefaultPlamon())
                .willReturn(defaultPlamon);

        //when
        PlamonResponse response = plamonService.getMyMainPlamon(user.getOauthUid());

        //then
        assertThat(response.isMain())
                .isEqualTo(true);
        assertThat(response.getId())
                .isEqualTo(16L);
        verify(userRepo).findByOauthUid(user.getOauthUid());
        verify(plamonRepo).findPlamonByUserAndMainIsTrue(user);
        verify(plamonRepo).findDefaultPlamon();
    }


}
