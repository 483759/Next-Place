package com.aespa.nextplace.plamon;

import com.aespa.nextplace.model.entity.*;
import com.aespa.nextplace.model.repository.PladexRepository;
import com.aespa.nextplace.model.repository.PlamonRepository;
import com.aespa.nextplace.model.repository.UserRepository;
import com.aespa.nextplace.model.response.ListSellPlamonResponse;
import com.aespa.nextplace.model.response.PlamonResponse;
import com.aespa.nextplace.service.PlamonDealServiceImpl;
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
class PlamonDealServiceTest {

    @InjectMocks
    PlamonDealServiceImpl plamonDealService;

    @Mock
    PlamonRepository plamonRepo;

    @Mock
    UserRepository userRepo;

    @Mock
    PladexRepository pladexRepo;

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

    @DisplayName("N 등급을 랜덤으로 뽑을 수 있는지 검증한다")
    @Test
    void N등급뽑기() throws Exception {
        //given
        List<Pladex> normalPlamonList = List.of(
                createPladexOfIdAndRank(1L, PlamonRank.N),
                createPladexOfIdAndRank(2L, PlamonRank.N),
                createPladexOfIdAndRank(3L, PlamonRank.N)
        );
        given(pladexRepo.findAllByRank(any(PlamonRank.class)))
                .willReturn(normalPlamonList);

        //when
        List<Pladex> pladexList = plamonDealService.getRandomPlamonListByRank();

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
    void 여러개중랜덤뽑기() throws Exception {
        //given
        List<Pladex> normalPlamonList = List.of(
                createPladexOfIdAndRank(1L, PlamonRank.N),
                createPladexOfIdAndRank(2L, PlamonRank.N),
                createPladexOfIdAndRank(3L, PlamonRank.N)
        );

        //when
        Pladex pladex = plamonDealService.selectOnePlamon(normalPlamonList);

        //then
        assertThat(pladex)
                .isNotNull();
        assertThat(pladex.getRank())
                .isEqualTo(PlamonRank.N);
    }

    @DisplayName("아무것도 없는데 뽑을 시 null")
    @Test
    void 없는데랜덤뽑기() throws Exception {
        //given
        List<Pladex> pladexList = new ArrayList<>();

        //when
        Pladex pladex = plamonDealService.selectOnePlamon(pladexList);

        //then
        assertThat(pladex)
                .isNull();
    }

    @DisplayName("각각의 등급을 랜덤으로 뽑을 수 있는지 검증한다")
    @Test
    @Disabled
    void 각각의등급뽑기() throws Exception {
        //given
        int count;

        //when and then
        for (var plamonRank : PlamonRank.values()) {
            count = 0;

            while (plamonDealService.getPlamonRank() != plamonRank) {
                count++;
            }

            assertThat(count)
                    .isGreaterThan(-1);
        }
    }

    @DisplayName("골드를 사용해서 새로운 플레몬을 획득한다")
    @Test
    void 플레몬뽑기() throws IllegalArgumentException {
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
        plamonResponseDto = plamonDealService.buyNewPlamonWithGold(user.getOauthUid());


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
    void 플레몬뽑기골드부족() throws IllegalArgumentException {
        //given
        User user = createUser("G-12345", 50, 0);
        given(userRepo.findByOauthUid("G-12345"))
                .willReturn(user);

        //when
        IllegalStateException exception = assertThrows(IllegalStateException.class, () -> plamonDealService.buyNewPlamonWithGold(user.getOauthUid()));


        //then
        assertThat(exception.getMessage())
                .isEqualTo("캐릭터를 구매할 골드가 부족합니다");
    }

    @DisplayName("존재하지 않는 유저는 뽑기 불가")
    @Test
    void 캐릭터인증() throws Exception {
        //given
        User user = createUser("B-12345", 0, 0);
        given(userRepo.findByOauthUid("B-12345"))
                .willReturn(null);

        //when
        IllegalArgumentException exception = assertThrows(IllegalArgumentException.class, () -> plamonDealService.buyNewPlamonWithGold(user.getOauthUid()));

        //then
        assertThat(exception.getMessage())
                .isEqualTo("존재하지 않는 유저입니다");
    }

    @DisplayName("내가 가지고 있는 캐릭터를 판매한다")
    @Test
    void 캐릭터팔기() throws Exception {
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
        ListSellPlamonResponse allPlamonResponse = plamonDealService.sell(user.getOauthUid(), sellingPlamon.getId());

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
    void 미소유캐릭터팔기() throws Exception {
        //given
        User user = createUser("G-12345", 1000, 0);
        given(userRepo.findByOauthUid("G-12345"))
                .willReturn(user);
        given(plamonRepo.findPlamonByUserAndId(user, 2L))
                .willReturn(null);

        //when
        IllegalStateException exception =
                assertThrows(IllegalStateException.class,
                        () -> plamonDealService.sell(user.getOauthUid(), 2L));

        //then
        assertThat(exception.getMessage())
                .isEqualTo("해당 캐릭터는 보유 중이 아닙니다");
    }

    @DisplayName("대표 캐릭터는 판매할 수 없다")
    @Test
    void 대표캐릭터팔기() throws Exception {
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
                        () -> plamonDealService.sell(user.getOauthUid(), sellingPlamon.getId()));


        //then
        assertThat(exception.getMessage())
                .isEqualTo("대표 캐릭터는 삭제할 수 없습니다");
    }

}
