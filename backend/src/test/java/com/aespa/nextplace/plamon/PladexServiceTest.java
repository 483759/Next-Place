package com.aespa.nextplace.plamon;

import com.aespa.nextplace.model.entity.Pladex;
import com.aespa.nextplace.model.entity.PlamonRank;
import com.aespa.nextplace.model.repository.PladexRepository;
import com.aespa.nextplace.model.request.PladexRequest;
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
import static org.mockito.ArgumentMatchers.any;
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
                .pladex(new Pladex("test", "test info", PlamonRank.SR))
                .id(id)
                .build();
    }

    private PladexRequest convertEntityToDto(Pladex pladex) {
        return new PladexRequest(pladex.getName(),
                pladex.getInformation(),
                pladex.getRank().toString());
    }

    @DisplayName("새로운 캐릭터를 등록한다")
    @Test
    public void 캐릭터등록() throws Exception {
        //given
        Pladex pladex = createPladexOfId(1L);
        PladexRequest request = convertEntityToDto(pladex);

        given(pladexRepo.save(any(Pladex.class)))
                .willReturn(pladex);
        given(pladexRepo.findByName("test"))
                .willReturn(null);

        //when
        PladexResponse newPladex = pladexService.savePladex(request);

        //then
        verify(pladexRepo).findByName("test");
        assertThat(newPladex.getId())
                .isEqualTo(1L);
    }

    @DisplayName("이미 존재하는 캐릭터를 등록하려고 시도한다")
    @Test
    public void 이미존재하는캐릭터등록() throws Exception {
        //given
        Pladex pladex = createPladexOfId(2L);
        Pladex existingPladex = createPladexOfId(1L);
        PladexRequest request = convertEntityToDto(pladex);
        given(pladexRepo.findByName(pladex.getName()))
                .willReturn(existingPladex);

        //when
        PladexResponse newPladex = pladexService.savePladex(request);

        //then
        verify(pladexRepo).findByName(pladex.getName());
        assertThat(newPladex)
                .isEqualTo(null);
    }

    @DisplayName("모든 캐릭터(고유 플레몬)의 리스트를 반환한다")
    @Test
    public void 캐릭터리스트반환() throws Exception {
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
