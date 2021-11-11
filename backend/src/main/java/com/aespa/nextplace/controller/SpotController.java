package com.aespa.nextplace.controller;

import org.springframework.http.ResponseEntity;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.bind.annotation.RestController;

import com.aespa.nextplace.model.response.ErrorResponse;
import com.aespa.nextplace.model.response.ListSpotResponse;
import com.aespa.nextplace.service.SpotService;

import io.swagger.v3.oas.annotations.Operation;
import io.swagger.v3.oas.annotations.media.Content;
import io.swagger.v3.oas.annotations.media.Schema;
import io.swagger.v3.oas.annotations.responses.ApiResponse;
import lombok.RequiredArgsConstructor;

@RestController
@RequestMapping("spot")
@RequiredArgsConstructor
public class SpotController {
	
	
	private final SpotService spotService;
	
    
    @GetMapping
    @Operation(summary = "Spot 목록 반환", description = "해당 지역에 해당하는 Spot 목록을 반환한다", responses = {
            @ApiResponse(responseCode = "200", description = "조회 성공", content = @Content(schema = @Schema(implementation=ListSpotResponse.class))),
            @ApiResponse(responseCode = "400", description = "조회 실패", content = @Content(schema = @Schema(implementation=Exception.class)))
    })
    public ResponseEntity<Object> getSpots(@RequestParam("lat")float lat, @RequestParam("lng")float lng){    	
    	ListSpotResponse response = null;
    	
    	try {
    		response = spotService.getSpots(lat, lng);
    	} catch(IllegalArgumentException e) {
    		return ResponseEntity.badRequest().body(new ErrorResponse(e.getMessage()));
    	}
    	
    	
    	return ResponseEntity.ok(response);
    	
    }    
    
}
