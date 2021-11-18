package com.aespa.nextplace.pladex;

import com.aespa.nextplace.model.entity.Pladex;
import com.aespa.nextplace.model.entity.PlamonRank;
import com.aespa.nextplace.model.repository.PladexRepository;
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

    @DisplayName("등급 별 캐릭터 조회")
    @Test
    void 등급별_캐릭터_조회() {
        //given
        PlamonRank rank = PlamonRank.N;

        //when
        List<Pladex> pladexList = pladexRepo.findAllByRank(rank);

        //then
        for (Pladex pladex: pladexList) {
            assertThat(pladex.getRank())
                    .isEqualTo(rank);
        }
    }
}
