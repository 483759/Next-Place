package com.aespa.nextplace.plamon;

import com.aespa.nextplace.model.entity.Pladex;
import com.aespa.nextplace.model.entity.PlamonRank;
import com.aespa.nextplace.model.repository.PladexRepository;
import com.aespa.nextplace.model.response.PladexResponse;
import com.aespa.nextplace.service.PladexServiceImpl;
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
import static org.mockito.BDDMockito.given;
import static org.mockito.BDDMockito.verify;

@ExtendWith(MockitoExtension.class)
@Transactional
public class PladexServiceTest {

    @InjectMocks
    PladexServiceImpl pladexService;

    @Mock
    PladexRepository pladexRepo;

    private Pladex createPladexOfId(long id) {
        return Pladex.builder()
                .id(id)
                .name("test")
                .information("test info")
                .rank(PlamonRank.SR)
                .build();
    }

    @DisplayName("새로운 플레덱스를 등록한다")
    @Test
    public void 플레덱스등록() throws Exception {
        //given
        Pladex pladex = createPladexOfId(1L);
        given(pladexRepo.save(pladex))
                .willReturn(pladex);
        given(pladexRepo.findByName("test"))
                .willReturn(null);

        //when
        PladexResponse newPladex = pladexService.savePladex(pladex);

        //then
        verify(pladexRepo).save(pladex);
        verify(pladexRepo).findByName("test");
        assertThat(newPladex.getId())
                .isEqualTo(1L);
    }

    @DisplayName("이미 존재하는 플레덱스를 등록하려고 시도한다")
    @Test
    public void 이미존재하는플레덱스등록() throws Exception {
        //given
        Pladex pladex = createPladexOfId(2L);
        Pladex existingPladex = createPladexOfId(1L);
        given(pladexRepo.findByName(pladex.getName()))
                .willReturn(existingPladex);

        //when
        PladexResponse newPladex = pladexService.savePladex(pladex);

        //then
        verify(pladexRepo).findByName(pladex.getName());
        assertThat(newPladex)
                .isEqualTo(null);
    }

    @DisplayName("모든 플레덱스(고유 플레몬)의 리스트를 반환한다")
    @Test
    public void 플레덱스리스트반환() throws Exception {
        //given
        List<Pladex> pladexes = List.of(
                createPladexOfId(1L),
                createPladexOfId(2L),
                createPladexOfId(3L)
        );

        given(pladexRepo.findAll())
                .willReturn(pladexes);

        //when
        var pladexResponseDto = pladexService.findAll().getPladexList();

        //then
        assertThat(pladexResponseDto.size())
                .isEqualTo(3);
        assertThat(pladexResponseDto)
                .extracting("id", "name")
                .containsExactly(
                        tuple(1L, "test"),
                        tuple(2L, "test"),
                        tuple(3L, "test")
                );
        verify(pladexRepo).findAll();
    }
}
