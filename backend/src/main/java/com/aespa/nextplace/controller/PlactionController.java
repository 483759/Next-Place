package com.aespa.nextplace.controller;

import javax.servlet.http.HttpServletRequest;

import org.springframework.http.ResponseEntity;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

import com.aespa.nextplace.model.request.PlactionRequest;
import com.aespa.nextplace.model.response.ErrorResponse;
import com.aespa.nextplace.model.response.PlactionResponse;
import com.aespa.nextplace.service.PlactionService;

import io.swagger.v3.oas.annotations.Operation;
import io.swagger.v3.oas.annotations.media.Content;
import io.swagger.v3.oas.annotations.media.Schema;
import io.swagger.v3.oas.annotations.responses.ApiResponse;
import lombok.RequiredArgsConstructor;

@RestController
@RequestMapping("plaction")
@RequiredArgsConstructor
public class PlactionController {
    
	private final PlactionService plactionService;
    
    @PostMapping
    @Operation(summary = "Plaction 등록 혹은 갱신", description = "해당하는 Spot에 Plaction을 등록 혹은 갱신한다", responses = {
            @ApiResponse(responseCode = "200", description = "조회 성공", content = @Content(schema = @Schema(implementation=PlactionResponse.class))),
            @ApiResponse(responseCode = "400", description = "등록 실패", content = @Content(schema = @Schema(implementation=Exception.class)))
    })
    public ResponseEntity<Object> addPlaction(@RequestBody PlactionRequest request,HttpServletRequest httpServletReq){
    	
    	PlactionResponse response = null;
    	
    	try {
    		response = plactionService.savePlaction(request.getSpotId(), "G-12345", request.getScore());
    	}catch(Exception e) {
    		return ResponseEntity.badRequest().body(new ErrorResponse(e.getMessage()));
    	}
    	
    	
    	
    	return ResponseEntity.ok(response);
    }
}
