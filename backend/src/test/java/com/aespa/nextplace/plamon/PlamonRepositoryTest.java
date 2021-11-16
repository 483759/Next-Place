package com.aespa.nextplace.plamon;

import com.aespa.nextplace.model.entity.Plamon;
import com.aespa.nextplace.model.entity.User;
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
import org.springframework.transaction.annotation.Transactional;

import java.util.List;

import static org.assertj.core.api.Assertions.assertThat;

@ExtendWith(MockitoExtension.class)
@DataJpaTest
@Disabled
@AutoConfigureTestDatabase(replace = AutoConfigureTestDatabase.Replace.NONE)
class PlamonRepositoryTest {
    @Autowired private PlamonRepository plamonRepo;
    @Autowired private UserRepository userRepo;

    @DisplayName("캐릭터를 판매했을 때 정상적으로 삭제되는지 검증")
    @Test
    @Transactional
    void 데이터삭제() throws Exception {
        //given
        User user = userRepo.findByOauthUid("G-12345");
        List<Plamon> plamons = plamonRepo.findAllByUser(user);

        if(plamons.isEmpty()) {
            assertThat(true)
                    .isTrue();
        }
        long size = plamons.size();

        //when
        System.out.println(plamons.get(0).toString());
        plamonRepo.delete(plamons.get(0));

        //then
        assertThat(plamonRepo.count())
                .isEqualTo(size-1);
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
                .isEqualTo(true);
    }
}
