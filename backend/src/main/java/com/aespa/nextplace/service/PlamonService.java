package com.aespa.nextplace.service;

import com.aespa.nextplace.model.request.PlamonChangeMainRequest;
import com.aespa.nextplace.model.request.PlamonLevelUpRequest;
import com.aespa.nextplace.model.response.ListAllPlamonResponse;
import com.aespa.nextplace.model.response.PlamonResponse;

public interface PlamonService {
    ListAllPlamonResponse findAllByUser(String oauthUid);
    PlamonResponse levelUpWithDalgona(String oauthUid, PlamonLevelUpRequest request);
    PlamonResponse getMyMainPlamon(String oauthUid);
    PlamonResponse changeMainPlamon(String oauthUid, PlamonChangeMainRequest request);
}
