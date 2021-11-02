package com.aespa.nextplace.service;

import com.aespa.nextplace.model.dto.PlamonDtoAssembler;
import com.aespa.nextplace.model.entity.Plamon;
import com.aespa.nextplace.model.repository.PlamonRepository;
import com.aespa.nextplace.model.response.PlamonListResponseDto;
import lombok.RequiredArgsConstructor;
import org.springframework.stereotype.Service;
import org.springframework.transaction.annotation.Transactional;

import java.util.List;
import java.util.stream.Collectors;

@Service
@RequiredArgsConstructor
@Transactional(readOnly = true)
public class PlamonServiceImpl implements PlamonService{
    private final PlamonRepository plamonRepo;

    @Override
    public List<PlamonListResponseDto> findAllByUser(Long userId) {
        List<Plamon> plamonList = plamonRepo.findAllByUserId(userId);

        return plamonList.stream()
                .map(PlamonDtoAssembler::plamonListResponseDto)
                .collect(Collectors.toList());
    }
}
