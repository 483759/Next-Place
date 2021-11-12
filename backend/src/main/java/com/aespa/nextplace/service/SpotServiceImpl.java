package com.aespa.nextplace.service;

import java.util.List;

import org.springframework.stereotype.Service;
import org.springframework.transaction.annotation.Transactional;

import com.aespa.nextplace.model.entity.Spot;
import com.aespa.nextplace.model.repository.BaseAddressRepository;
import com.aespa.nextplace.model.repository.SpotRepository;
import com.aespa.nextplace.model.response.ListSpotResponse;
import com.aespa.nextplace.util.NaverMapUtil;
import com.aespa.nextplace.util.RedisUtil;

import lombok.RequiredArgsConstructor;

@Service
@RequiredArgsConstructor
@Transactional(readOnly = true)
public class SpotServiceImpl implements SpotService {

	
	private final SpotRepository spotRepo;
	
	private final BaseAddressRepository baseAddressRepo;
			
	private final RedisUtil redisUtil;
	
	private final NaverMapUtil geocodeUtil;
	
	public ListSpotResponse getSpots(String oauthUid, String lat, String lng) {
		
		float latFloat = Float.parseFloat(lat);
		float lngFloat = Float.parseFloat(lng);
		
		if(latFloat >90 || latFloat <-90 || lngFloat >180 || lngFloat <-180) {
			throw new IllegalArgumentException("Wrong lat or lng");
		}
		
		String realAddress = geocodeUtil.getAddress(lat, lng);		
		String address[] = realAddress.split(" ");	
		
		if(address.length < 3)
			throw new IllegalArgumentException("Wrong address");
		
		String cityName = address[0];
		String gugunName = address[1];
		String dongName = address[2];
						
		
		List<Spot> spotList = spotRepo.findAllByCityAndDong(cityName, dongName);	
		ListSpotResponse response = new ListSpotResponse(spotList,oauthUid, redisUtil);
		
		return response;

				
	}

}
