package com.aespa.nextplace.service;

import com.aespa.nextplace.model.response.ListPlamonResponse;

public interface PlamonService {
    ListPlamonResponse findAllByUser(String oauthUid);
}
