package com.aespa.nextplace.service;

import com.aespa.nextplace.model.response.PlamonListResponseDto;

import java.util.List;

public interface PlamonService {
    List<PlamonListResponseDto> findAllByUser(Long userId);
}
