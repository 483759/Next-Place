package com.aespa.nextplace.service;

import com.aespa.nextplace.model.response.ListMyPlactionCountResponse;
import com.aespa.nextplace.model.response.PlactionResponse;

public interface PlactionService {
	PlactionResponse savePlaction(long spotId, String OauthUid, int score);
	ListMyPlactionCountResponse getMyPlactionsCountFromCities(String oauthUid);
	ListMyPlactionCountResponse getMyPlactionsCountFromGugun(String oauthUid, String city);
}
