package com.aespa.nextplace.service;

import java.util.List;

import org.springframework.stereotype.Service;

import com.aespa.nextplace.model.entity.BaseAddress;
import com.aespa.nextplace.model.entity.Plaction;
import com.aespa.nextplace.model.entity.Spot;
import com.aespa.nextplace.model.entity.User;
import com.aespa.nextplace.model.repository.BaseAddressRepository;
import com.aespa.nextplace.model.repository.PlactionRepository;
import com.aespa.nextplace.model.repository.SpotRepository;
import com.aespa.nextplace.model.repository.UserRepository;
import com.aespa.nextplace.model.response.ListSpotResponse;
import com.aespa.nextplace.model.response.PlactionResponse;
import com.aespa.nextplace.util.GoogleGeocodeUtil;

import lombok.RequiredArgsConstructor;

@Service
@RequiredArgsConstructor
public class SpotServiceImpl implements SpotService {

	
	private final SpotRepository spotRepo;
	
	private final BaseAddressRepository baseAddressRepo;
		
	private final GoogleGeocodeUtil geocodeUtil;	
	
	private final PlactionRepository plactionRepo;	
	
	private final UserRepository userRepo;
	
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
		
	
	public PlactionResponse savePlaction(long spotId, String oauthUid, int score){
		
		PlactionResponse response = null;
		
		Spot spot = spotRepo.findByIdAllJoinFetch(spotId);
		
		if(spot == null) {
			throw new IllegalArgumentException("Can't find Spot");
		}
		
		User user = userRepo.findByOauthUid(oauthUid);
		
		if(user == null) {
			throw new IllegalArgumentException("Can't find User");
		}
		
		
		Plaction plaction = null;
		
		if(plactionRepo.existsByUserAndSpot(user, spot)) {
			plaction = plactionRepo.findByUserAndSpot(user, spot);
			plaction = plaction.builder()
					.id(plaction.getId())
					.plaction(plaction)
					.score(score)
					.build();
		}
		
		if(plaction == null) {
			plaction = Plaction.builder()
			.plaction(new Plaction(user, spot))
			.score(score)
			.build();
		}
	
				
		
		plactionRepo.save(plaction);		
		
		plaction = plactionRepo.findByUserAndSpot(user, spot);		
		response = new PlactionResponse(plaction);
		
		return response;
	}

}
