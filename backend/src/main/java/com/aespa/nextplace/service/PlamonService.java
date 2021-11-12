package com.aespa.nextplace.service;

import com.aespa.nextplace.model.response.ListAllPlamonResponse;
import com.aespa.nextplace.model.response.PlamonResponse;

public interface PlamonService {
    ListAllPlamonResponse findAllByUser(String oauthUid);
    PlamonResponse buyNewPlamonWithGold(String oauthUid);
    ListAllPlamonResponse sell(String oauthUid, Long plamonId);
}
