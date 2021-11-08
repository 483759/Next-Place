package com.aespa.nextplace.model.response;

import com.aespa.nextplace.model.entity.Spot;
import com.aespa.nextplace.model.entity.SpotType;

import lombok.Getter;

@Getter
public class SpotResponse {
	
	private long id;
	private String name;
	private SpotType type;
	private String information;
	private String detail;
	private boolean isRandom;
	private float lat;
	private float lng;	
	
	public SpotResponse(Spot spot) {
		this.id = spot.getId();
		this.name = spot.getName();
		this.information = spot.getInformation();
		this.detail = spot.getDetail();
		this.isRandom = spot.isRandom();
		this.lat = spot.getLat();
		this.lng = spot.getLng();
	}
}
