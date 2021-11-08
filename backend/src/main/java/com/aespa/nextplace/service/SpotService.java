package com.aespa.nextplace.service;

import com.aespa.nextplace.model.response.ListSpotResponse;

public interface SpotService {
	ListSpotResponse getSpots(float lat, float lng);
}
