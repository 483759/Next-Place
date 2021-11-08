package com.aespa.nextplace.service;

import java.util.List;

import org.springframework.stereotype.Service;

import com.aespa.nextplace.model.entity.BaseAddress;
import com.aespa.nextplace.model.entity.City;
import com.aespa.nextplace.model.entity.Spot;
import com.aespa.nextplace.model.repository.BaseAddressRepository;
import com.aespa.nextplace.model.repository.CityRepository;
import com.aespa.nextplace.model.repository.SpotRepository;
import com.aespa.nextplace.model.response.ListSpotResponse;
import com.aespa.nextplace.util.GoogleGeocodeUtil;

import lombok.RequiredArgsConstructor;

@Service
@RequiredArgsConstructor
public class SpotServiceImpl implements SpotService {

	
	private final SpotRepository spotRepo;
	
	private final BaseAddressRepository baseAddressRepo;
	
	private final CityRepository cityRepo;
	
	private final GoogleGeocodeUtil geocodeUtil;
	
	
	public ListSpotResponse getSpots(float lat, float lng) {		
		
		
		if(lat >90 || lat <-90 || lng >180 || lng <-180)
			throw new IllegalArgumentException("Wrong lat or lng");
		
		String realAddress = geocodeUtil.getAddress(lat, lng);
		String address[] = realAddress.split(" ");	
		
		if(address.length < 3)
			throw new IllegalArgumentException("Wrong address");
		
		String cityName = address[1];
		
		City city = cityRepo.findByName(cityName);
		
		if(city == null)
			throw new IllegalArgumentException("Can't find city");
		
		String dongName;		
		dongName = address[3];
		
		if(city.getId()>9)
			dongName = address[4];		
		
		BaseAddress baseAddress = baseAddressRepo.findByCityAndDong(city, dongName);
		
		if(baseAddress==null)
			throw new IllegalArgumentException("Can't find dong");
		
		List<Spot> spotList = spotRepo.findAllByBaseAddress(baseAddress);		
		ListSpotResponse response = new ListSpotResponse(spotList);
		
		return response;

				
	}

}
