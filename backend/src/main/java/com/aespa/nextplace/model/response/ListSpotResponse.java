package com.aespa.nextplace.model.response;

import java.util.ArrayList;
import java.util.List;

import com.aespa.nextplace.model.entity.Spot;

import lombok.Getter;

@Getter
public class ListSpotResponse {
	private List<SpotResponse> spotList = new ArrayList();
	
	public ListSpotResponse(List<Spot> spots) {
		for(Spot spot : spots) {
			spotList.add(new SpotResponse(spot));
		}
	}
}
