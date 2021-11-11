package com.aespa.nextplace.service;

import java.util.List;

import org.springframework.stereotype.Service;
import org.springframework.transaction.annotation.Transactional;

import com.aespa.nextplace.model.entity.BaseAddress;
import com.aespa.nextplace.model.entity.Spot;
import com.aespa.nextplace.model.repository.BaseAddressRepository;
import com.aespa.nextplace.model.repository.SpotRepository;
import com.aespa.nextplace.model.response.ListSpotResponse;
import com.aespa.nextplace.util.GoogleGeocodeUtil;

import lombok.RequiredArgsConstructor;

@Service
@RequiredArgsConstructor
@Transactional(readOnly = true)
public class SpotServiceImpl implements SpotService {

	
	private final SpotRepository spotRepo;
	
	private final BaseAddressRepository baseAddressRepo;
		
	private final GoogleGeocodeUtil geocodeUtil;	
	
	public ListSpotResponse getSpots(float lat, float lng) {				
		if(lat >90 || lat <-90 || lng >180 || lng <-180) {
			throw new IllegalArgumentException("Wrong lat or lng");
		}
		
		String realAddress = geocodeUtil.getAddress(lat, lng);		
		String address[] = realAddress.split(" ");	
		
		if(address.length < 3)
			throw new IllegalArgumentException("Wrong address");
		
		String cityName = address[1];
		String gugunName = address[2];
		String dongName = address[3];
		if(address.length == 5) {
			cityName = address[2];
			gugunName = address[3];
			dongName = address[4];
		}
		
		BaseAddress baseAddress = baseAddressRepo.findByCityAndGugunAndDong(cityName,gugunName, dongName);
		
		if(baseAddress==null) {
			throw new IllegalArgumentException("Not supported address");
		}
		
		List<Spot> spotList = spotRepo.findAllByBaseAddress(baseAddress);		
		ListSpotResponse response = new ListSpotResponse(spotList);
		
		return response;

				
	}

}
