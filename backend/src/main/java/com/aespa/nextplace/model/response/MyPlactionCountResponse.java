package com.aespa.nextplace.model.response;

import java.util.ArrayList;
import java.util.List;

import com.aespa.nextplace.model.entity.Plaction;
import com.aespa.nextplace.model.entity.Spot;

import lombok.Getter;

@Getter
public class MyPlactionCountResponse {
	private int totalCount;
	private int myCount;
	private String name;
	private int id;
	
	public MyPlactionCountResponse(int totalCount, int myCount, String name, int id) {
		this.totalCount = totalCount;
		this.myCount = myCount;
		this.name = name;
		this.id = id;
	}
	
}
