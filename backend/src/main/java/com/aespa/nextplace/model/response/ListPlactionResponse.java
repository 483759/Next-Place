package com.aespa.nextplace.model.response;

import com.aespa.nextplace.model.entity.Plaction;
import com.aespa.nextplace.model.entity.Spot;
import io.swagger.v3.oas.annotations.media.Schema;
import lombok.Getter;
import java.util.ArrayList;
import java.util.HashSet;
import java.util.List;
import java.util.Set;

@Getter
public class ListPlactionResponse {
	@Schema(description = "획득한 스팟(플렉션) 목록")
	private List<PlactionResponse> plactions = new ArrayList<>();
	@Schema(description ="획득하지 못한 스팟 목록")
	private List<SpotResponse> spots = new ArrayList<>();
	
	
	public ListPlactionResponse(List<Plaction> plactions, List<Spot> spots) {
		Set<Long> idSet = new HashSet<>();
		for(var plaction : plactions) {
			this.plactions.add(new PlactionResponse(plaction));
			idSet.add(plaction.getSpot().getId());			
		}
		
		for(var spot: spots) {
			if(!idSet.contains(spot.getId())) {
				this.spots.add(new SpotResponse(spot));
			}
		}
		
		
	}
	
}
