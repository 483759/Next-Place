package com.aespa.nextplace.controller;

import javax.servlet.http.HttpServletRequest;

import org.springframework.http.ResponseEntity;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PathVariable;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

import com.aespa.nextplace.model.request.PlactionRequest;
import com.aespa.nextplace.model.response.ErrorResponse;
import com.aespa.nextplace.model.response.ListMyPlactionCountResponse;
import com.aespa.nextplace.model.response.ListPlactionResponse;
import com.aespa.nextplace.model.response.PlactionResponse;
import com.aespa.nextplace.model.response.PlactionUpdateResponse;
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
            @ApiResponse(responseCode = "200", description = "등록 성공", content = @Content(schema = @Schema(implementation=PlactionResponse.class))),
            @ApiResponse(responseCode = "400", description = "등록 실패", content = @Content(schema = @Schema(implementation=Exception.class)))
    })
    public ResponseEntity<?> addPlaction(@RequestBody PlactionRequest request,HttpServletRequest httpServletReq){
    	
    	PlactionUpdateResponse response = null;
    	
    	try {
    		response = plactionService.savePlaction(request.getSpotId(), "G-12345", request.getScore());
    	}catch(IllegalArgumentException e) {
    		return ResponseEntity.badRequest().body(new ErrorResponse(e.getMessage()));
    	}catch(IllegalStateException e) {
    		return ResponseEntity.badRequest().body(new ErrorResponse(e.getMessage()));    		
    	}
    	
    	
    	
    	return ResponseEntity.ok(response);
    }
    
    
    @GetMapping("/count")
    @Operation(summary = "Plaction 시도별 달성률 받기", description = "시도별로 업적 달성률을 반환합니다", responses = {
            @ApiResponse(responseCode = "200", description = "조회 성공", content = @Content(schema = @Schema(implementation=ListMyPlactionCountResponse.class))),
            @ApiResponse(responseCode = "400", description = "조회 실패", content = @Content(schema = @Schema(implementation=Exception.class)))
    })
    public ResponseEntity<?> myPlactionsCountFromCities(HttpServletRequest httpServletReq){
    	
    	
    	String oauthUid = "G-12345";
    	ListMyPlactionCountResponse response = null;
    	try {
    		response = plactionService.getMyPlactionsCountFromCities(oauthUid);
    	}catch(IllegalArgumentException e){
    		return ResponseEntity.badRequest().body(new ErrorResponse(e.getMessage()));
    	}
    	
    	
    	return ResponseEntity.ok(response);
    }
    
    @GetMapping("/count/{city}")
    @Operation(summary = "Plaction 도시 내 구군별 달성률 받기", description = "도시 내에 구군별로 업적 달성률을 반환합니다", responses = {
            @ApiResponse(responseCode = "200", description = "조회 성공", content = @Content(schema = @Schema(implementation=ListMyPlactionCountResponse.class))),
            @ApiResponse(responseCode = "400", description = "조회 실패", content = @Content(schema = @Schema(implementation=Exception.class)))
    })
    public ResponseEntity<?> myPlactionsCountFromGugun(@PathVariable String city, HttpServletRequest httpServletReq){
    	
    	
    	String oauthUid = "G-12345";
    	ListMyPlactionCountResponse response = null;
    	try {
    		response = plactionService.getMyPlactionsCountFromGugun(oauthUid, city);
    	}catch(IllegalArgumentException e){
    		return ResponseEntity.badRequest().body(new ErrorResponse(e.getMessage()));
    	}
    	
    	
    	return ResponseEntity.ok(response);
    }
   
    
    
   @GetMapping
   @Operation(summary = "Plaction 전체 조회", description = "본인의 Plaction과 획득 못한 Spot 목록 반환", responses = {
           @ApiResponse(responseCode = "200", description = "조회 성공", content = @Content(schema = @Schema(implementation=ListPlactionResponse.class))),
           @ApiResponse(responseCode = "400", description = "조회 실패", content = @Content(schema = @Schema(implementation=Exception.class)))
   })
   public ResponseEntity<?> myPlactions(HttpServletRequest httpServletRequest){
	   
	   String oauthUid = "G-12345";
	   
	   ListPlactionResponse response = null;
	   
	   try {
		   response = plactionService.getMyPlactions(oauthUid);
	   }catch(IllegalArgumentException e) {
		   return ResponseEntity.badRequest().body(new ErrorResponse(e.getMessage()));
	   }
	   
	   return ResponseEntity.ok(response);
   }
    
   @GetMapping("/{city}")
   @Operation(summary = "Plaction 도시 기준 전체 조회", description = "도시 기준 본인의 Plaction과 획득 못한 Spot 목록 반환", responses = {
           @ApiResponse(responseCode = "200", description = "조회 성공", content = @Content(schema = @Schema(implementation=ListPlactionResponse.class))),
           @ApiResponse(responseCode = "400", description = "조회 실패", content = @Content(schema = @Schema(implementation=Exception.class)))
   })
   public ResponseEntity<?> myPlactionsFromCity(@PathVariable("city") String city, HttpServletRequest httpServletRequest){
	   
	   String oauthUid = "G-12345";
	   
	   ListPlactionResponse response = null;
	   
	   try {
		   response = plactionService.getMyPlactionsFromCity(oauthUid, city);
	   }catch(IllegalArgumentException e) {
		   return ResponseEntity.badRequest().body(new ErrorResponse(e.getMessage()));
	   }
	   
	   return ResponseEntity.ok(response);
   }
   
   @GetMapping("/{city}/{gugun}")
   @Operation(summary = "Plaction 구군 기준 전체 조회", description = "구군 기준 본인의 Plaction과 획득 못한 Spot 목록 반환", responses = {
           @ApiResponse(responseCode = "200", description = "조회 성공", content = @Content(schema = @Schema(implementation=ListPlactionResponse.class))),
           @ApiResponse(responseCode = "400", description = "조회 실패", content = @Content(schema = @Schema(implementation=Exception.class)))
   })
   public ResponseEntity<?> myPlactionsFromGugun(@PathVariable("city") String city, @PathVariable("gugun") String gugun, HttpServletRequest httpServletRequest){
	   
	   String oauthUid = "G-12345";
	   
	   ListPlactionResponse response = null;
	   
	   try {
		   response = plactionService.getMyPlactionsFromGugun(oauthUid,city,gugun);
	   }catch(IllegalArgumentException e) {
		   return ResponseEntity.badRequest().body(new ErrorResponse(e.getMessage()));
	   }
	   
	   return ResponseEntity.ok(response);
   }
    
    
}
