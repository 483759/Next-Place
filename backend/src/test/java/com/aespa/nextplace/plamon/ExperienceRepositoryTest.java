package com.aespa.nextplace.plamon;

import com.aespa.nextplace.model.entity.Experience;
import com.aespa.nextplace.model.repository.ExperienceRepository;
import org.junit.jupiter.api.Disabled;
import org.junit.jupiter.api.DisplayName;
import org.junit.jupiter.api.Test;
import org.junit.jupiter.api.extension.ExtendWith;
import org.mockito.junit.jupiter.MockitoExtension;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.boot.test.autoconfigure.jdbc.AutoConfigureTestDatabase;
import org.springframework.boot.test.autoconfigure.orm.jpa.DataJpaTest;

import static org.assertj.core.api.Assertions.assertThat;

@ExtendWith(MockitoExtension.class)
@DataJpaTest
@Disabled
@AutoConfigureTestDatabase(replace = AutoConfigureTestDatabase.Replace.NONE)
public class ExperienceRepositoryTest {
    @Autowired
    ExperienceRepository expRepo;

    @DisplayName("특정 경험치가 속하는 레벨 조회")
    @Test
    public void 경험치로레벨조회() throws Exception {
        //given
        int accumulated = 1265;

        //when
        Experience experience = expRepo.findFirstByAccumulatedLessThanEqualOrderByLevelDesc(accumulated);

        //then
        assertThat(experience.getLevel())
                .isEqualTo(8);
    }
}
