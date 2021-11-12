package com.aespa.nextplace.service;

import com.aespa.nextplace.model.response.ListSpotResponse;

public interface SpotService {
	ListSpotResponse getSpots(String oauthUid, String lat, String lng);
}
