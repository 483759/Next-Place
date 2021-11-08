package com.aespa.nextplace.controller;

import org.springframework.http.ResponseEntity;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.bind.annotation.RestController;

import com.aespa.nextplace.model.response.ListSpotResponse;
import com.aespa.nextplace.service.SpotService;

import lombok.RequiredArgsConstructor;

@RestController
@RequestMapping("spot")
@RequiredArgsConstructor
public class SpotController {
	
	
	private final SpotService spotService;
	
    
    @GetMapping
    public ResponseEntity<ListSpotResponse> getSpots(@RequestParam("lat")float lat, @RequestParam("lng")float lng){
    	
    	
    	ListSpotResponse response = null;
    	
    	try {
    		response = spotService.getSpots(lat, lng);
    	} catch(IllegalArgumentException e) {
    		return ResponseEntity.badRequest().body(response);
    	}
    	
    	
    	return ResponseEntity.ok(response);
    	
    }
}
