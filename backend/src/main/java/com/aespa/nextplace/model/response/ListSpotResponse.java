package com.aespa.nextplace.model.response;

import java.util.ArrayList;
import java.util.List;

import com.aespa.nextplace.model.entity.Spot;
import com.aespa.nextplace.util.RedisUtil;

import lombok.AccessLevel;
import lombok.Getter;
import lombok.NoArgsConstructor;

@Getter
@NoArgsConstructor(access = AccessLevel.PROTECTED)
public class ListSpotResponse {
	private List<SpotResponse> spotList = new ArrayList<>();
	
	public ListSpotResponse(List<Spot> spots) {
		for(Spot spot : spots) {
			spotList.add(new SpotResponse(spot));
		}
	}	
	
	public ListSpotResponse(ListSpotResponse response, String oauthUid,RedisUtil redisUtil) {
		for(SpotResponse spotResponse : response.getSpotList()) {
			if(redisUtil.getData(oauthUid+"+"+spotResponse.getId())==null) {			
				spotList.add(spotResponse);
			}
		}
	}
}
