package com.aespa.nextplace.spot;

import static org.assertj.core.api.Assertions.assertThat;
import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.mockito.BDDMockito.given;
import static org.mockito.Mockito.verify;

import java.util.ArrayList;
import java.util.List;

import javax.servlet.http.HttpServletRequest;

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
import com.aespa.nextplace.model.response.ListSpotResponse;
import com.aespa.nextplace.model.response.PlactionResponse;
import com.aespa.nextplace.model.response.SpotResponse;
import com.aespa.nextplace.service.SpotServiceImpl;
import com.aespa.nextplace.util.GoogleGeocodeUtil;
import com.google.firebase.auth.FirebaseToken;

@ExtendWith(MockitoExtension.class)
@Transactional
public class SpotServiceTest {
	
	
	@InjectMocks
	SpotServiceImpl spotService;	
	
	@Mock
	GoogleGeocodeUtil geocodeUtil;
	
	@Mock
	SpotRepository spotRepo;
	
	@Mock
	BaseAddressRepository baseAddressRepo;
		
	@Mock
	PlactionRepository plactionRepo;
	
	@Mock
	UserRepository userRepo;
	
	private Exception ex;
	
	private BaseAddress getSampleBaseAddress() {
		return new BaseAddress(4283001004L,"대전광역시","유성구","봉명동");
	}
	
	
	private Spot getSpotSample(BaseAddress baseAddress ) {
		return Spot.builder().spot(new Spot(baseAddress, "온천교", 50f,100f))
				.id(1L)
				.type(SpotType.ATTRACTION)
				.information("information")
				.detail("detail")
				.exp(100)
				.isRandom(false)
				.build();
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
	
	
	private ListSpotResponse getListSpotResponse(Spot spot) {
		
		List<Spot> list = new ArrayList();
		list.add(spot);
				
		return new ListSpotResponse(list); 
	}
	
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
	
	//성공 , 잘못된 좌표가 있는 경우, 도시가 없는 경우, 동을 찾을 수 없는 경우, 스팟이 없는 경우
	
	@DisplayName("스팟 조회 성공")
	@Test
	public void 스팟조회_성공() throws Exception{
		
		//given
		
		String daejeon = "대전광역시";
		BaseAddress baseAddress = getSampleBaseAddress();
		String gugun ="유성구";
		String dong = "봉명동";
		float lat = 50, lng =100;
		
		given(geocodeUtil.getAddress(lat, lng))
		.willReturn("대한민국 대전광역시 유성구 봉명동");
		
		
		given(baseAddressRepo.findByCityAndGugunAndDong(daejeon,gugun, dong))
			.willReturn(baseAddress);
		
		List<Spot> spotList = List.of(getSpotSample(baseAddress));
		
		given(spotRepo.findAllByBaseAddress(baseAddress))
			.willReturn(spotList);
		
		
		//when		
		ListSpotResponse response = spotService.getSpots(lat,lng);
		
		
		//then
		verify(geocodeUtil).getAddress(lat,lng);
		verify(baseAddressRepo).findByCityAndGugunAndDong(daejeon,gugun, dong);
		verify(spotRepo).findAllByBaseAddress(baseAddress);
		
		for(SpotResponse res : response.getSpotList())
			assertThat(res.getName())
				.isEqualTo("온천교");
		
	}
	
	
	
	
	@DisplayName("잘못된 좌표로 스팟 조회 실패")
	@Test
	public void 잘못된_좌표() throws Exception{
		//given
		
		String daejeon = "대전광역시";
		BaseAddress baseAddress = getSampleBaseAddress();
		String dong = "봉명동";
		float lat = 1000, lng =100;
		

		
		//when
		try {
			ListSpotResponse response = spotService.getSpots(lat,lng);					
		}
		catch(IllegalArgumentException e){
			ex = e;
		}
		
		
		//then
		assertEquals("Wrong lat or lng",ex.getMessage());
		
		
		
	}
	
	@DisplayName("한국 주소를 찾을 수 없어 스팟 조회 실패")
	@Test
	public void 잘못된_주소_스팟조회_실패() throws Exception{
		//given
		
		String daejeon = "대전광역시";
		BaseAddress baseAddress = getSampleBaseAddress();
		String dong = "봉명동";
		float lat = 50, lng =100;
		
		given(geocodeUtil.getAddress(lat, lng))
		.willReturn("");
		
		//when
		try {
			ListSpotResponse response = spotService.getSpots(lat,lng);					
		}
		catch(IllegalArgumentException e){
			ex = e;
		}
		
		
		//then
		assertEquals("Wrong address",ex.getMessage());
		
		
		
	}
	
	@DisplayName("조회 시 스팟이 없는 경우")
	@Test
	public void 스팟_성공_결과없음() throws Exception{
		//given
		
		String daejeon = "대전광역시";
		BaseAddress baseAddress = getSampleBaseAddress();
		String gugun ="유성구";
		String dong = "봉명동";
		float lat = 50, lng =100;
		
		given(geocodeUtil.getAddress(lat, lng))
		.willReturn("대한민국 대전광역시 유성구 봉명동");
		
		
		given(baseAddressRepo.findByCityAndGugunAndDong(daejeon,gugun, dong))
			.willReturn(baseAddress);
		
		List<Spot> spotList = new ArrayList();
		spotList.add(getSpotSample(baseAddress));
		
		given(spotRepo.findAllByBaseAddress(baseAddress))
			.willReturn(new ArrayList());
		
		
		//when
		
		ListSpotResponse response = spotService.getSpots(lat,lng);
		
		
		//then
		verify(geocodeUtil).getAddress(lat,lng);
		verify(baseAddressRepo).findByCityAndGugunAndDong(daejeon,gugun, dong);
		verify(spotRepo).findAllByBaseAddress(baseAddress);
		
		
		assertEquals(0,response.getSpotList().size());
		
		
	}
	
	
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
		
		given(plactionRepo.existsByUserAndSpot(user, spot))
			.willReturn(false);		
		
		given(plactionRepo.findByUserAndSpot(user,spot))
			.willReturn(plaction);		
				
		//when		
		PlactionResponse response = spotService.savePlaction(spotId, oauthUid, 100);
		
		
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
			response = spotService.savePlaction(spotId, oauthUid, 100);
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
		HttpServletRequest httpServletReq = null;
		FirebaseToken decodedToken = null;
		User user = getSampleUser();
		Spot spot = getSpotSample();
		Plaction plaction = getSamplePlaction(user, spot);
		//given
		given(userRepo.findByOauthUid(oauthUid))
			.willReturn(null);
		
		given(spotRepo.findByIdAllJoinFetch(spotId))
			.willReturn(spot);
		
		//when		
		PlactionResponse response;
		
		try {
		response = spotService.savePlaction(spotId, oauthUid, 100);
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
		
		given(plactionRepo.existsByUserAndSpot(user, spot))
			.willReturn(true);
		
		given(plactionRepo.findByUserAndSpot(user, spot))
			.willReturn(plaction);
		
		//when		
		PlactionResponse response = null;
		try{
			response = spotService.savePlaction(spotId, oauthUid, score);
		}catch(Exception e) {
			ex = e;
		}
		
		
		//then		
		assertEquals(score,response.getScore());
		
		
	}
	
	
}
