package com.aespa.nextplace.plamon;

import com.aespa.nextplace.model.entity.*;
import com.aespa.nextplace.model.repository.PladexRepository;
import com.aespa.nextplace.model.repository.PlamonRepository;
import com.aespa.nextplace.model.repository.UserRepository;
import com.aespa.nextplace.model.response.PlamonResponse;
import com.aespa.nextplace.service.PlamonServiceImpl;
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

    private Plamon createPlamonOfId(long id) {
        return Plamon.builder()
                .id(id)
                .level(1)
                .exp(10)
                .nickname("랩실노예")
                .isMain(false)
                .pladex(createPladexOfId(1L))
                .user(createUserOfUid("G-12345"))
                .build();
    }

    private Plamon createPlamonOfIdAndRank(long id, PlamonRank rank) {
        return Plamon.builder()
                .id(id)
                .level(1)
                .exp(10)
                .nickname("랩실노예")
                .isMain(false)
                .pladex(createPladexOfIdAndRank(1L, rank))
                .user(createUserOfUid("G-12345"))
                .build();
    }

    private User createUserOfUid(String uid) {
        return User.builder()
                .id(1L)
                .user(new User(uid, "냉정한 고추참치"))
                .role(UserRole.USER)
                .gold(1000)
                .dalgona(0)
                .avatar(null)
                .build();
    }


    private User createUserOfUidAndGold(String uid, int gold) {
        return User.builder()
                .id(1L)
                .user(new User(uid, "냉정한 고추참치"))
                .role(UserRole.USER)
                .gold(gold)
                .dalgona(0)
                .avatar(null)
                .build();
    }

    @DisplayName("모든 플레몬의 리스트를 반환한다")
    @Test
    public void 플레몬리스트반환() throws Exception {
        //given
        User user = createUserOfUid("G-12345");
        List<Plamon> plamons = List.of(
                createPlamonOfId(1L),
                createPlamonOfId(2L),
                createPlamonOfId(3L)
        );

        given(userRepo.findByOauthUid("G-12345"))
                .willReturn(user);
        given(plamonRepo.findAllByUser(user))
                .willReturn(plamons);

        //when
        var plamonResponseDto = plamonService.findAllByUser("G-12345").getPlamonList();

        //then
        assertThat(plamonResponseDto)
                .extracting("id", "isMain")
                .containsExactly(
                        tuple(1L, false),
                        tuple(2L, false),
                        tuple(3L, false)
                );
        verify(plamonRepo).findAllByUser(user);
    }

    @DisplayName("내가 가지지 않은 캐릭터 확인")
    @Test
    public void 소유구분해서뽑기() throws Exception {
        //given
        User user = createUserOfUid("G-12345");
        List<Plamon> plamons = List.of(
                createPlamonOfIdAndRank(1L, PlamonRank.N),
                createPlamonOfIdAndRank(2L, PlamonRank.N),
                createPlamonOfIdAndRank(3L, PlamonRank.N)
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
        List<PlamonResponse> list = plamonService.findAllByUser(user.getOauthUid()).getPlamonList();

        //then
        assertThat(list).isNotNull();
        assertThat(list)
                .extracting("id", "pladex.rank", "ownFlag")
                .containsExactly(
                        tuple(1L, PlamonRank.N, true),
                        tuple(2L, PlamonRank.N, true),
                        tuple(3L, PlamonRank.N, true),
                        tuple(null, PlamonRank.SSR, false),
                        tuple(null, PlamonRank.SR, false)
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
        User user = createUserOfUid("G-12345");
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
        User user = createUserOfUidAndGold("G-12345", 50);
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
        User user = createUserOfUid("B-12345");
        given(userRepo.findByOauthUid("B-12345"))
                .willReturn(null);

        //when
        IllegalArgumentException exception = assertThrows(IllegalArgumentException.class, ()-> plamonService.buyNewPlamonWithGold(user.getOauthUid()));

        //then
        assertThat(exception.getMessage())
                .isEqualTo("존재하지 않는 유저입니다");
    }

}
