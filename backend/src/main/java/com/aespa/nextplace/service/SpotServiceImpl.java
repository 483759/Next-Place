package com.aespa.nextplace.service;

import java.util.List;

import org.springframework.cache.annotation.Cacheable;
import org.springframework.stereotype.Service;
import org.springframework.transaction.annotation.Transactional;

import com.aespa.nextplace.model.entity.Spot;
import com.aespa.nextplace.model.repository.SpotRepository;
import com.aespa.nextplace.model.response.ListSpotResponse;
import com.aespa.nextplace.util.NaverMapUtil;
import com.aespa.nextplace.util.RedisUtil;

import lombok.RequiredArgsConstructor;

@Service
@RequiredArgsConstructor
@Transactional(readOnly=true)
public class SpotServiceImpl implements SpotService {

	
	private final SpotRepository spotRepo;
				
	private final RedisUtil redisUtil;
	
	private final NaverMapUtil geocodeUtil;
	
	
	
	public String getRealAddress(String lat, String lng) {
		float latFloat = Float.parseFloat(lat);
		float lngFloat = Float.parseFloat(lng);
		
		if(latFloat >90 || latFloat <-90 || lngFloat >180 || lngFloat <-180) {
			throw new IllegalArgumentException("Wrong lat or lng");
		}
		
		return geocodeUtil.getAddress(lat, lng);		
		
		
	}
	
	@Cacheable(key="#realAddress", value="getSpotsFromAddress")
	public ListSpotResponse getSpotsFromAddress(String realAddress) {	
		
		String address[] = realAddress.split(" ");	
		
		if(address.length < 3)
			throw new IllegalArgumentException("Wrong address");
		
		String city = address[0];
		String dong = address[2];
						
		
		List<Spot> spotList = spotRepo.findAllByCityAndDong(city, dong);
		return new ListSpotResponse(spotList);
				
	}
	
	
	public ListSpotResponse getSpots(String oauthUid, ListSpotResponse listSpotResponse) {		
		
		return new ListSpotResponse(listSpotResponse, oauthUid, redisUtil);
	}
	
	


}
