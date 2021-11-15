package com.aespa.nextplace.service;

import com.aespa.nextplace.model.request.PlamonChangeMainRequest;
import com.aespa.nextplace.model.request.PlamonLevelUpRequest;
import com.aespa.nextplace.model.response.ListAllPlamonResponse;
import com.aespa.nextplace.model.response.ListSellPlamonResponse;
import com.aespa.nextplace.model.response.PlamonChangeMainResponse;
import com.aespa.nextplace.model.response.PlamonResponse;

public interface PlamonService {
    ListAllPlamonResponse findAllByUser(String oauthUid);
    PlamonResponse buyNewPlamonWithGold(String oauthUid);
    ListSellPlamonResponse sell(String oauthUid, Long plamonId);
    PlamonResponse levelUpWithDalgona(String oauthUid, PlamonLevelUpRequest request);
    PlamonResponse getMyMainPlamon(String oauthUid);
    PlamonChangeMainResponse changeMainPlamon(String oauthUid, PlamonChangeMainRequest request);
}
