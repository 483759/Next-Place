package com.aespa.nextplace.pladex;

import com.aespa.nextplace.model.entity.Pladex;
import com.aespa.nextplace.model.entity.PlamonRank;
import com.aespa.nextplace.model.repository.PladexRepository;
import org.junit.jupiter.api.Disabled;
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

    @DisplayName("이름으로 캐릭터 조회")
    @Test
    void 이름으로_조회() throws Exception {
        //given
        String pladexName = "성심당빵 시바";

        //when
        Pladex byName = pladexRepo.findByName(pladexName);

        //then
        assertThat(byName.getName())
                .isEqualTo(pladexName);
    }

    @DisplayName("존재하지 않는 이름으로 캐릭터 조회")
    @Test
    void 없는_이름으로_조회() throws Exception {
        //given
        String pladexName = "없는 캐릭터";

        //when
        Pladex byName = pladexRepo.findByName(pladexName);

        //then
        assertThat(byName)
                .isNull();
    }

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

    @DisplayName("기본 캐릭터 조회")
    @Test
    void 기본캐릭터_조회() throws Exception {
        //given

        //when
        Pladex defaultPlamon = pladexRepo.findDefaultPlamon();

        //then
        assertThat(defaultPlamon.getName())
                .isEqualTo("기본캐릭터");
    }
}
