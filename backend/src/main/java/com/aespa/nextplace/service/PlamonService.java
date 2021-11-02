package com.aespa.nextplace.service;

import com.aespa.nextplace.model.response.PlamonListResponseDto;

public interface PlamonService {
    PlamonListResponseDto findAllByUser(Long userId);
}
