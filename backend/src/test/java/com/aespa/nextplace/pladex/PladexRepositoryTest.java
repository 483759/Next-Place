package com.aespa.nextplace.pladex;

import com.aespa.nextplace.model.entity.Pladex;
import com.aespa.nextplace.model.entity.User;
import com.aespa.nextplace.model.repository.PladexRepository;
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
//@Disabled
@AutoConfigureTestDatabase(replace = AutoConfigureTestDatabase.Replace.NONE)
class PladexRepositoryTest {
    @Autowired private PladexRepository pladexRepo;
    @Autowired private UserRepository userRepo;


    @DisplayName("내가 안 가진 캐릭터 조회")
    @Test
    void 내가_안가진_캐릭터_조회() throws Exception {
        //given
        User user = userRepo.findByOauthUid("G-12345");

        //when
        List<Pladex> notMine = pladexRepo.findAllByUserWithNotMine(user);

        //then
        for (Pladex pladex: notMine) {
            System.out.println(pladex.toString());
        }
        assertThat(notMine.size())
                .isEqualTo(2);
    }
}
