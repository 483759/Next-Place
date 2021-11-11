package com.aespa.nextplace.plamon;

import com.aespa.nextplace.model.entity.Pladex;
import com.aespa.nextplace.model.entity.Plamon;
import com.aespa.nextplace.model.entity.User;
import com.aespa.nextplace.model.repository.PladexRepository;
import com.aespa.nextplace.model.repository.PlamonRepository;
import com.aespa.nextplace.model.repository.UserRepository;
import org.junit.jupiter.api.DisplayName;
import org.junit.jupiter.api.Test;
import org.junit.jupiter.api.extension.ExtendWith;
import org.mockito.junit.jupiter.MockitoExtension;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.boot.test.autoconfigure.jdbc.AutoConfigureTestDatabase;
import org.springframework.boot.test.autoconfigure.orm.jpa.DataJpaTest;

import java.util.List;

import static org.assertj.core.api.Assertions.assertThat;

@ExtendWith(MockitoExtension.class)
@DataJpaTest
@AutoConfigureTestDatabase(replace = AutoConfigureTestDatabase.Replace.NONE)
public class PladexRepositoryTest {
    @Autowired private PladexRepository pladexRepo;
    @Autowired private PlamonRepository plamonRepo;
    @Autowired private UserRepository userRepo;

    @DisplayName("ff")
    @Test
    public void ff() throws Exception {
        //given
        User user = userRepo.findByOauthUid("G-12345");

        //when
        List<Plamon> all = plamonRepo.findAllByUserWithNotMine(user);

        //then
        assertThat(all)
                .isNotNull();
    }

    @DisplayName("내가 가지지 않은 캐릭터 조회")
    @Test
    //@Disabled
    public void 안가진캐릭터조회() throws Exception {
        //given
        User user = userRepo.findByOauthUid("G-12345");

        //when
        List<Pladex> all = pladexRepo.findAllByUserWithNotMine(user);

        //then
        assertThat(user.getNickname())
                .isEqualTo("냉정한 고추참치");
        assertThat(all)
                .isNotNull();
        assertThat(all.size())
                .isEqualTo(10);
    }
}
