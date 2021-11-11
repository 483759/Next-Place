package com.aespa.nextplace.model.response;

import java.util.ArrayList;
import java.util.List;

import lombok.Getter;

@Getter
public class ListMyPlactionCountResponse {
	private List<MyPlactionCountResponse> myPlactionCounts;
	
	public ListMyPlactionCountResponse(List<MyPlactionCountResponse> myPlactionCounts) {
		this.myPlactionCounts = new ArrayList();
		for(MyPlactionCountResponse response : myPlactionCounts) {
			this.myPlactionCounts.add(response);
		}
	}
	
}
