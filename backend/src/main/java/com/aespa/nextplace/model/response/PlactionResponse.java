package com.aespa.nextplace.model.response;

import com.aespa.nextplace.model.entity.Plaction;

import io.swagger.v3.oas.annotations.media.Schema;
import lombok.Getter;

@Getter
public class PlactionResponse {
	@Schema(example="1")
	private long id;
	private SpotResponse spot;
	@Schema(example="100")
	private int score;
	
	
	
	public PlactionResponse(Plaction plaction) {
		this.id = plaction.getId();
		this.spot = new SpotResponse(plaction.getSpot());
		this.score = plaction.getScore();
	}
}
