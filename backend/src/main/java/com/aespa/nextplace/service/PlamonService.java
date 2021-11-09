package com.aespa.nextplace.service;

import com.aespa.nextplace.model.response.ListPlamonResponse;
import com.aespa.nextplace.model.response.PlamonResponse;

public interface PlamonService {
    ListPlamonResponse findAllByUser(String oauthUid);
    PlamonResponse buyNewPlamonWithGold(String oauthUid);
}
