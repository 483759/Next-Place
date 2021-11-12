package com.aespa.nextplace.model.response;

import java.time.LocalDateTime;

import com.aespa.nextplace.model.entity.Plaction;
import io.swagger.v3.oas.annotations.media.Schema;
import lombok.Getter;

import java.time.LocalDateTime;

@Getter
public class PlactionResponse {
	private SpotResponse spot;
	@Schema(example="100")
	private int score;	
	private LocalDateTime createdDate;
	private LocalDateTime modifiedDate;
	
	
	public PlactionResponse(Plaction plaction) {
		this.spot = new SpotResponse(plaction.getSpot());
		this.score = plaction.getScore();
		this.createdDate = plaction.getCreatedDate();
		this.modifiedDate = plaction.getModifiedDate();
	}
}
