package com.aespa.nextplace.service;

import com.aespa.nextplace.model.entity.Plamon;
import com.aespa.nextplace.model.repository.PlamonRepository;
import com.aespa.nextplace.model.response.PlamonListResponseDto;
import lombok.RequiredArgsConstructor;
import org.springframework.stereotype.Service;
import org.springframework.transaction.annotation.Transactional;

import java.util.List;

@Service
@RequiredArgsConstructor
@Transactional(readOnly = true)
public class PlamonServiceImpl implements PlamonService{
    private final PlamonRepository plamonRepo;

    @Override
    public PlamonListResponseDto findAllByUser(Long userId) {
        List<Plamon> plamonList = plamonRepo.findAllByUserId(userId);

        return new PlamonListResponseDto(plamonList);
    }
}
