package com.aespa.nextplace.service;

import com.aespa.nextplace.model.response.ListSpotResponse;

public interface SpotService {	
	String getRealAddress(String lat, String lng);
	ListSpotResponse getSpotsFromAddress(String realAddress);
	ListSpotResponse getSpots(String oauthUid, ListSpotResponse listSpotResponse);
}
