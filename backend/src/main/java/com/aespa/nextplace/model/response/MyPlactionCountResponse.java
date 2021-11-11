package com.aespa.nextplace.model.response;

import io.swagger.v3.oas.annotations.media.Schema;
import lombok.Getter;

@Getter
public class MyPlactionCountResponse {
	@Schema(example="10")
	private int totalCount;
	@Schema(example="1")
	private int myCount;
	@Schema(example="지역이름")
	private String name;
	@Schema(example="1")
	private int id;
	
	public MyPlactionCountResponse(int totalCount, int myCount, String name, int id) {
		this.totalCount = totalCount;
		this.myCount = myCount;
		this.name = name;
		this.id = id;
	}
	
}
