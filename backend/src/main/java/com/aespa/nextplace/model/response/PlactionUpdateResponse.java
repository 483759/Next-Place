package com.aespa.nextplace.model.response;

import java.time.LocalDateTime;

import com.aespa.nextplace.model.entity.Plaction;

import io.swagger.v3.oas.annotations.media.Schema;
import lombok.Getter;

@Getter
public class PlactionUpdateResponse {
	private SpotResponse spot;
	@Schema(example="100")
	private int gold;	
	private LocalDateTime createdDate;
	private LocalDateTime modifiedDate;
	
	
	public PlactionUpdateResponse(Plaction plaction) {
		this.spot = new SpotResponse(plaction.getSpot());
		this.gold = plaction.getSpot().getExp();
		this.createdDate = plaction.getCreatedDate();
		this.modifiedDate = plaction.getModifiedDate();
	}
}
