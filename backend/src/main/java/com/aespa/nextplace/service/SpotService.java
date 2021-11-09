package com.aespa.nextplace.service;

import javax.servlet.http.HttpServletRequest;

import com.aespa.nextplace.model.response.ListSpotResponse;
import com.aespa.nextplace.model.response.PlactionResponse;

public interface SpotService {
	ListSpotResponse getSpots(float lat, float lng);
	PlactionResponse savePlaction(long spotId, String OauthUid, int score);
}
