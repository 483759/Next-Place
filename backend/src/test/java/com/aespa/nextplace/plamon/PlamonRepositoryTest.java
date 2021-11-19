package com.aespa.nextplace.plamon;

import com.aespa.nextplace.model.entity.Pladex;
import com.aespa.nextplace.model.entity.Plamon;
import com.aespa.nextplace.model.entity.User;
import com.aespa.nextplace.model.repository.PladexRepository;
import com.aespa.nextplace.model.repository.PlamonRepository;
import com.aespa.nextplace.model.repository.UserRepository;
import org.junit.jupiter.api.Disabled;
import org.junit.jupiter.api.DisplayName;
import org.junit.jupiter.api.Test;
import org.junit.jupiter.api.extension.ExtendWith;
import org.mockito.junit.jupiter.MockitoExtension;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.boot.test.autoconfigure.jdbc.AutoConfigureTestDatabase;
import org.springframework.boot.test.autoconfigure.orm.jpa.DataJpaTest;

import java.util.HashSet;
import java.util.List;
import java.util.Set;

import static org.assertj.core.api.Assertions.assertThat;

@ExtendWith(MockitoExtension.class)
@DataJpaTest
@Disabled
@AutoConfigureTestDatabase(replace = AutoConfigureTestDatabase.Replace.NONE)
class PlamonRepositoryTest {
    @Autowired private PlamonRepository plamonRepo;
    @Autowired private PladexRepository pladexRepo;
    @Autowired private UserRepository userRepo;

    @DisplayName("가진 캐릭터를 전부 조회한다")
    @Test
    void 유저의_캐릭터_전체_조회() throws Exception {
        //given
        User user = userRepo.findByOauthUid("G-12345");

        //when
        List<Plamon> allByUser = plamonRepo.findAllByUser(user);

        //then
        for (var plamon: allByUser) {
            assertThat(plamon.getUser())
                    .isEqualTo(user);
        }
    }

    @DisplayName("대표 캐릭터 조회")
    @Test
    void 대표_캐릭터() throws Exception {
        //given
        User user = userRepo.findByOauthUid("G-12345");

        //when
        Plamon plamon = plamonRepo.findPlamonByUserAndMainIsTrue(user);

        //then
        assertThat(plamon.isMain())
                .isTrue();
    }

    @DisplayName("내가 안 가진 캐릭터 조회")
    @Test
    void 안가진캐릭터조회() throws Exception {
        //given
        User user = userRepo.findByOauthUid("G-12345");
        List<Plamon> allByUser = plamonRepo.findAllByUser(user);
        Set<Long> idOfPladexes = new HashSet<>();

        for (var plamon: allByUser) {
            idOfPladexes.add(plamon.getPladex().getId());
        }

        //when
        List<Pladex> notMine = pladexRepo.findAllByUserWithNotMine(user);

        //then
        for(var pladex: notMine) {
            assertThat(idOfPladexes.contains(pladex.getId()))
                    .isFalse();
        }
    }
}
