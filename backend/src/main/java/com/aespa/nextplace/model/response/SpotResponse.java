package com.aespa.nextplace.model.response;

import com.aespa.nextplace.model.entity.Spot;
import com.aespa.nextplace.model.entity.SpotType;

import io.swagger.v3.oas.annotations.media.Schema;
import lombok.AccessLevel;
import lombok.Getter;
import lombok.NoArgsConstructor;

@Getter
@NoArgsConstructor(access = AccessLevel.PROTECTED)
public class SpotResponse {
	
	@Schema(example="1")
	private long id;
	@Schema(example="온천교")
	private String name;
	@Schema(example="ATTRACTION")
	private SpotType type;
	@Schema(example="유성온천역 주변에서 볼 수 있는 강이 흐르는 다리")
	private String information;
	@Schema(example="유성온천역 주변에서 볼 수 있는 강이 흐르는 다리 \n"+
			" 이 주변에 술집도 많고 조금만 더 걸어가면 궁동이라 만남의 장소로 자주 선택되기도 한다")
	private String detail;
	@Schema(example="false")
	private boolean isRandom;
	@Schema(example="36.3581")
	private float lat;
	@Schema(example="127.343")
	private float lng;	
	
	public boolean getIsRandom() {
		return isRandom;
	}
	
	
	public SpotResponse(Spot spot) {
		this.id = spot.getId();
		this.name = spot.getName();
		this.information = spot.getInformation();
		this.detail = spot.getDetail();
		this.isRandom = spot.getIsRandom();
		this.lat = spot.getLat();
		this.lng = spot.getLng();
		this.type = spot.getType();
	}
}
