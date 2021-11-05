package com.aespa.nextplace.plamon;

import com.aespa.nextplace.model.entity.*;
import com.aespa.nextplace.model.repository.PlamonRepository;
import com.aespa.nextplace.model.repository.UserRepository;
import com.aespa.nextplace.service.PlamonServiceImpl;
import org.aspectj.lang.annotation.Before;
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

    private Pladex createPladexOfId(long id) {
        return Pladex.builder()
                .pladex(new Pladex("test", "test info", PlamonRank.SR))
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

    private User createUserOfUid(String uid) {
        return User.builder()
                .user(new User(uid, "냉정한 고추참치"))
                .role(UserRole.USER)
                .gold(1000)
                .dalgona(0)
                .avatar(null)
                .build();
    }

    @Before("")
    public void setup() {
        User user = createUserOfUid("G-12345");
        given(userRepo.findByOauthUid("G-12345"))
                .willReturn(user);
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

    @DisplayName("골드를 사용해서 새로운 플레몬을 획득한다")
    @Test
    public void 플레몬뽑기() throws Exception {
        //given
        User user = createUserOfUid("G-12345");
        Plamon buyingPlamon = createPlamonOfId(1L);

        given(plamonRepo.save(any(Plamon.class)))
                .willReturn(buyingPlamon);

        //when
        var plamonResponseDto = plamonService.buyNewPlamonWithGold(user.getOauthUid());

        //then
        assertThat(plamonResponseDto.getId())
                .isEqualTo(1L);
    }
}
