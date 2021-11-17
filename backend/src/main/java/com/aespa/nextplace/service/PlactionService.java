package com.aespa.nextplace.service;

import com.aespa.nextplace.model.response.ListMyPlactionCountResponse;
import com.aespa.nextplace.model.response.ListPlactionResponse;
import com.aespa.nextplace.model.response.PlactionUpdateResponse;

public interface PlactionService {
	PlactionUpdateResponse savePlaction(long spotId, String OauthUid, int score);
	ListMyPlactionCountResponse getMyPlactionsCountFromCities(String oauthUid);
	ListMyPlactionCountResponse getMyPlactionsCountFromGugun(String oauthUid, String city);
	ListPlactionResponse getMyPlactions(String oauthUid);
	ListPlactionResponse getMyPlactionsFromCity(String oauthUid, String city);
	ListPlactionResponse getMyPlactionsFromGugun(String oauthUid, String city, String gugun);
}
