package com.aespa.nextplace.service;

import com.aespa.nextplace.model.entity.User;
import com.aespa.nextplace.model.response.ListAllPlamonResponse;
import com.aespa.nextplace.model.response.ListSellPlamonResponse;
import com.aespa.nextplace.model.response.PlamonResponse;

public interface PlamonDealService {
    User findUserByOauthUid(String oauthUid);

    ListAllPlamonResponse findAllByUser(String oauthUid);

    PlamonResponse buyNewPlamonWithGold(String oauthUid);
    ListSellPlamonResponse sell(String oauthUid, Long plamonId);
}
