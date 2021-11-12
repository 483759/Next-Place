package com.aespa.nextplace.model.response;

import java.util.ArrayList;
import java.util.List;

import com.aespa.nextplace.model.entity.Spot;
import com.aespa.nextplace.util.RedisUtil;

import lombok.Getter;

@Getter
public class ListSpotResponse {
	private List<SpotResponse> spotList = new ArrayList();
	
	public ListSpotResponse(List<Spot> spots) {
		for(Spot spot : spots) {
			spotList.add(new SpotResponse(spot));
		}
	}
	
	public ListSpotResponse(List<Spot> spots, String oauthUid,RedisUtil redisUtil) {
		for(Spot spot : spots) {
			if(redisUtil.getData(oauthUid+"+"+spot.getId())==null) {			
				spotList.add(new SpotResponse(spot));
			}
		}
	}
}
