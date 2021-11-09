package com.aespa.nextplace.model.response;

import java.time.LocalDateTime;

import com.aespa.nextplace.model.entity.Plaction;

import lombok.Getter;

@Getter
public class PlactionResponse {
	private long id;
	private SpotResponse spot;
	private LocalDateTime createdTime;
	private int score;
	
	
	
	public PlactionResponse(Plaction plaction) {
		this.id = plaction.getId();
		this.spot = new SpotResponse(plaction.getSpot());
		this.createdTime = plaction.getCreatedDate();
		this.score = plaction.getScore();
	}
}
