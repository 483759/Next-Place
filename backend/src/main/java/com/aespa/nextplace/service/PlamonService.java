package com.aespa.nextplace.service;

import com.aespa.nextplace.model.response.ListPlamonResponse;
import com.aespa.nextplace.model.response.PlamonResponse;
import org.springframework.data.domain.Pageable;

public interface PlamonService {
    ListPlamonResponse findAllByUser(String oauthUid);
    ListPlamonResponse findAllByUserWithPagination(String oauthUid, Pageable pageable);
    PlamonResponse buyNewPlamonWithGold(String oauthUid);
    ListPlamonResponse sell(String oauthUid, Long plamonId);
}
