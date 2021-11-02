package com.aespa.nextplace.plamon;

import com.aespa.nextplace.model.entity.Plamon;
import com.aespa.nextplace.model.repository.PlamonRepository;
import com.aespa.nextplace.service.PlamonServiceImpl;
import org.junit.jupiter.api.DisplayName;
import org.junit.jupiter.api.Test;
import org.junit.jupiter.api.extension.ExtendWith;
import org.mockito.InjectMocks;
import org.mockito.Mock;
import org.mockito.junit.jupiter.MockitoExtension;
import org.springframework.transaction.annotation.Transactional;

import java.util.ArrayList;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.mockito.BDDMockito.*;

@ExtendWith(MockitoExtension.class)
@Transactional
class ReadPlamonList {

    @InjectMocks
    PlamonServiceImpl plamonService;

    @Mock
    PlamonRepository plamonRepo;

    @DisplayName("모든 플레몬의 리스트를 반환한다")
    @Test
    public void 플레몬리스트반환() throws Exception {
        //given
        given(plamonRepo.findAll())
                .willReturn(new ArrayList<Plamon>());

        //when
        var list = plamonService.findAll();

        //then
        assertEquals(0, list.size());
        verify(plamonRepo).findAll();
    }
}
