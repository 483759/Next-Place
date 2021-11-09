package com.aespa.nextplace.plaction;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.mockito.BDDMockito.given;

import org.junit.jupiter.api.DisplayName;
import org.junit.jupiter.api.Test;
import org.junit.jupiter.api.extension.ExtendWith;
import org.mockito.InjectMocks;
import org.mockito.Mock;
import org.mockito.junit.jupiter.MockitoExtension;
import org.springframework.transaction.annotation.Transactional;

import com.aespa.nextplace.model.entity.BaseAddress;
import com.aespa.nextplace.model.entity.Plaction;
import com.aespa.nextplace.model.entity.Spot;
import com.aespa.nextplace.model.entity.SpotType;
import com.aespa.nextplace.model.entity.User;
import com.aespa.nextplace.model.entity.UserRole;
import com.aespa.nextplace.model.repository.BaseAddressRepository;
import com.aespa.nextplace.model.repository.PlactionRepository;
import com.aespa.nextplace.model.repository.SpotRepository;
import com.aespa.nextplace.model.repository.UserRepository;
import com.aespa.nextplace.model.response.PlactionResponse;
import com.aespa.nextplace.service.PlactionServiceImpl;



@ExtendWith(MockitoExtension.class)
@Transactional
public class PlactionServiceTest {
	
	
	@InjectMocks
	PlactionServiceImpl plactionService;	
	
	@Mock
	SpotRepository spotRepo;
	
	@Mock
	BaseAddressRepository baseAddressRepo;
		
	@Mock
	PlactionRepository plactionRepo;
	
	@Mock
	UserRepository userRepo;
	
	
	private User getSampleUser() {
		return 	User.builder()
				.user(new User("G-12345","김실험"))
				.id(1)				
				.avatar(null)
				.dalgona(0)
				.gold(0)
				.role(UserRole.USER)
				.build();
	}
	
	private Plaction getSamplePlaction(User user, Spot spot) {
		return Plaction.builder()
				.plaction(new Plaction(user, spot))
				.id(10L)
				.score(100)
				.build();
	}
	
	private BaseAddress getSampleBaseAddress() {
		return new BaseAddress(4283001004L,"대전광역시","유성구","봉명동");
	}
	
	private Spot getSpotSample() {
		return Spot.builder().spot(new Spot(getSampleBaseAddress(), "온천교", 50f,100f))
				.id(10L)
				.type(SpotType.ATTRACTION)
				.information("information")
				.detail("detail")
				.exp(100)
				.isRandom(false)
				.build();
	}
	
	
	
	private Exception ex;
	
	
	@DisplayName("방문 스팟 플렉션 등록")
	@Test
	public void 플렉션_등록_성공() throws Exception{
		
		long spotId = 10L;
		String oauthUid = "G-12345";
		User user = getSampleUser();
		Spot spot = getSpotSample();
		Plaction plaction = getSamplePlaction(user, spot);
		//given
		
		given(userRepo.findByOauthUid(oauthUid))
			.willReturn(user);
		
		given(spotRepo.findByIdAllJoinFetch(spotId))
			.willReturn(spot);
				
		given(plactionRepo.findByUserAndSpot(user,spot))
			.willReturn(plaction);		
				
		//when		
		PlactionResponse response = plactionService.savePlaction(spotId, oauthUid, 100);
		
		
		//then		
		assertEquals(plaction.getId(),response.getId());
		
		
	}
	
	@DisplayName("잘못된 스팟 ID로 플렉션 등록 요청")
	@Test
	public void 잘못된_스팟ID_플렉션_등록_실패() throws Exception{
		
		long spotId = 10L;
		String oauthUid = "G-12345";
		
		//given
		given(spotRepo.findByIdAllJoinFetch(spotId))
			.willReturn(null);
				
		//when
		PlactionResponse response;
		try {
			response = plactionService.savePlaction(spotId, oauthUid, 100);
		} catch(Exception e) {
			ex = e;
		}
		
		
		//then		
		assertEquals("Can't find Spot",ex.getMessage());	
		
	}
	
	@DisplayName("잘못된 UID (탈퇴 혹은 오류)로 플렉션 등록 요청")
	@Test
	public void 잘못된_UID_플렉션_등록_실패() throws Exception{
		
		long spotId = 10L;
		String oauthUid = "G-12345";
		User user = getSampleUser();
		Spot spot = getSpotSample();
		Plaction plaction = getSamplePlaction(user, spot);
		//given
		given(userRepo.findByOauthUid(oauthUid))
			.willReturn(null);
		
		given(spotRepo.findByIdAllJoinFetch(spotId))
			.willReturn(spot);
		
		//when		
		PlactionResponse response = null;
		
		try {
		response = plactionService.savePlaction(spotId, oauthUid, 100);
		}catch(Exception e) {
			ex = e;
		}
		
		
		//then		
		assertEquals("Can't find User",ex.getMessage());
		
		
	}
	
	@DisplayName("중복 플렉션이라서 점수만 변경")
	@Test
	public void 중복_플렉션_등록_성공() throws Exception{
		
		long spotId = 10L;
		String oauthUid = "G-12345";
		User user = getSampleUser();
		Spot spot = getSpotSample();
		Plaction plaction = getSamplePlaction(user, spot);
		int score = 100;
		//given
		given(userRepo.findByOauthUid(oauthUid))
			.willReturn(user);
		
		given(spotRepo.findByIdAllJoinFetch(spotId))
			.willReturn(spot);
		
		given(plactionRepo.findByUserAndSpot(user, spot))
			.willReturn(plaction);
		
		//when		
		PlactionResponse response = null;
		try{
			response = plactionService.savePlaction(spotId, oauthUid, score);
		}catch(Exception e) {
			ex = e;
		}
		
		
		//then		
		assertEquals(score,response.getScore());
		
		
	}
}
