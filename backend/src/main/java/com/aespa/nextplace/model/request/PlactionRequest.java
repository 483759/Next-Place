package com.aespa.nextplace.model.request;

import io.swagger.v3.oas.annotations.media.Schema;
import lombok.Getter;

@Getter
public class PlactionRequest {
	@Schema(example="1")
	private long spotId;
	@Schema(example="100")
	private int score;
	@Schema(example="현재 정해진 형태 없음 - 지금은 신경 쓰지 마세요")
	private String scoreToken;
}
