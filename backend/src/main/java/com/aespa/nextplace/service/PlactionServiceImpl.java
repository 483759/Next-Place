package com.aespa.nextplace.service;

import org.springframework.stereotype.Service;

import com.aespa.nextplace.model.entity.Plaction;
import com.aespa.nextplace.model.entity.Spot;
import com.aespa.nextplace.model.entity.User;
import com.aespa.nextplace.model.repository.PlactionRepository;
import com.aespa.nextplace.model.repository.SpotRepository;
import com.aespa.nextplace.model.repository.UserRepository;
import com.aespa.nextplace.model.response.PlactionResponse;

import lombok.RequiredArgsConstructor;

@Service
@RequiredArgsConstructor
public class PlactionServiceImpl implements PlactionService {	
	
	private final SpotRepository spotRepo;	
	
	private final PlactionRepository plactionRepo;	
	
	private final UserRepository userRepo;
	
	
	
	
	
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
		System.out.println("--------------------------");
		if(plactionRepo.existsByUserAndSpot(user, spot)) {
			plaction = plactionRepo.findByUserAndSpot(user, spot);
			score = Math.max(score, plaction.getScore());			
			plaction = Plaction.builder()
					.id(plaction.getId())
					.plaction(plaction)
					.score(score)
					.build();
		}
		System.out.println("--------------------------");
		if(plaction == null) {
			plaction = Plaction.builder()
			.plaction(new Plaction(user, spot))
			.score(score)
			.build();
		}
		System.out.println("--------------------------");
				
		
		plactionRepo.save(plaction);		
		
		plaction = plactionRepo.findByUserAndSpot(user, spot);		
		response = new PlactionResponse(plaction);
		
		return response;
	}
}
