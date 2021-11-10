package com.aespa.nextplace.service;

import java.util.ArrayList;
import java.util.List;

import org.springframework.stereotype.Service;

import com.aespa.nextplace.model.entity.Plaction;
import com.aespa.nextplace.model.entity.Spot;
import com.aespa.nextplace.model.entity.User;
import com.aespa.nextplace.model.repository.PlactionRepository;
import com.aespa.nextplace.model.repository.SpotRepository;
import com.aespa.nextplace.model.repository.UserRepository;
import com.aespa.nextplace.model.response.ListMyPlactionCountResponse;
import com.aespa.nextplace.model.response.MyPlactionCountResponse;
import com.aespa.nextplace.model.response.PlactionResponse;
import com.aespa.nextplace.util.GugunUtil;

import lombok.RequiredArgsConstructor;

@Service
@RequiredArgsConstructor
public class PlactionServiceImpl implements PlactionService {	
	
	private final SpotRepository spotRepo;	
	
	private final PlactionRepository plactionRepo;	
	
	private final UserRepository userRepo;
	
	
	private final String cities[] = {"서울특별시","인천광역시","대전광역시", "부산광역시","울산광역시","광주광역시","제주특별자치도","경기도" ,"강원도", "충청북도","충청남도","경상북도","경상남도","전라북도","전라남도"};
	
	
	
	
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
		
		
		Plaction plaction = plactionRepo.findByUserAndSpot(user, spot);
		if(plaction != null) {			
			score = Math.max(score, plaction.getScore());			
			plaction = Plaction.builder()
					.id(plaction.getId())
					.plaction(plaction)
					.score(score)
					.build();
		}
		else {
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
	
	
	public ListMyPlactionCountResponse getMyPlactionsCountFromCities(String oauthUid) {
		
		
		User user = userRepo.findByOauthUid(oauthUid);
		
		if(user == null) {
			throw new IllegalArgumentException("Can't find User");
		}
				
		
		ListMyPlactionCountResponse response = null;
		List<MyPlactionCountResponse> counts = new ArrayList();
		
		for(int i=0;i<cities.length;i++) {
			int totalCount = 0;
			int myCount = 0;
			List<Spot> spots = spotRepo.findAllByCity(cities[i]);
			
			totalCount = spots.size();
			
			
			List<Plaction> plactions = plactionRepo.findAllByUserAndCity(user, cities[i]);
			
			myCount = plactions.size();
		
			MyPlactionCountResponse countResponse = new MyPlactionCountResponse(totalCount, myCount,cities[i],i);
			counts.add(countResponse);
			
			
		}
		

		
		
		response = new ListMyPlactionCountResponse(counts);
		
		
		
		
		return response;
	}
	
	
	
	public ListMyPlactionCountResponse getMyPlactionsCountFromGugun(String oauthUid, String city) {
		
		
		
		User user = userRepo.findByOauthUid(oauthUid);
		
		if(user == null) {
			throw new IllegalArgumentException("Can't find User");
		}
		
		GugunUtil gugunUtil = GugunUtil.getInstance();		
		String gugun[] = gugunUtil.getGugun(city);
		
		if(gugun == null) {
			throw new IllegalArgumentException(city+": Can't find city");
		}

		ListMyPlactionCountResponse response = null;
		List<MyPlactionCountResponse> counts = new ArrayList();
		
		for(int i=0;i<gugun.length;i++) {
			int totalCount = 0;
			int myCount = 0;
			List<Spot> spots = spotRepo.findAllByGugun(gugun[i]);
			
			totalCount = spots.size();			
			
			List<Plaction> plactions = plactionRepo.findAllByUserAndGugun(user, gugun[i]);
			
			myCount = plactions.size();
		
			MyPlactionCountResponse countResponse = new MyPlactionCountResponse(totalCount, myCount,gugun[i],i);
			counts.add(countResponse);			
			
		}
		
		response = new ListMyPlactionCountResponse(counts);
		
		return response;
		
	}
	
	
	
	
}
