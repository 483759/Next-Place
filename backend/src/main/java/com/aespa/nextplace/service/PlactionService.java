package com.aespa.nextplace.service;

import com.aespa.nextplace.model.response.PlactionResponse;

public interface PlactionService {
	PlactionResponse savePlaction(long spotId, String OauthUid, int score);
}
