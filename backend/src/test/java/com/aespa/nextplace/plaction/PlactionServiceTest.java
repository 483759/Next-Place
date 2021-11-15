package com.aespa.nextplace.plaction;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.mockito.BDDMockito.given;
import static org.mockito.Mockito.verify;

import java.util.ArrayList;
import java.util.List;

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
import com.aespa.nextplace.model.response.ListMyPlactionCountResponse;
import com.aespa.nextplace.model.response.ListPlactionResponse;
import com.aespa.nextplace.model.response.PlactionUpdateResponse;
import com.aespa.nextplace.service.PlactionServiceImpl;
import com.aespa.nextplace.util.RedisUtil;


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
	
	@Mock
	RedisUtil redisUtil;
	
	private final String cities[] = {"서울특별시","인천광역시","대전광역시", "부산광역시","울산광역시","광주광역시","제주특별자치도","경기도", "충청북도","충청남도","강원도","경상북도","경상남도","전라북도","전라남도"};
	private Exception ex;
	
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
		
		given(redisUtil.getData(oauthUid+"+"+spotId))
		.willReturn(null);
				
		//when		
		PlactionUpdateResponse response = plactionService.savePlaction(spotId, oauthUid, 100);
		
		
		//then		
		assertEquals(100,response.getGold());
		assertEquals(spot.getId(),response.getSpot().getId());
		
		
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
		PlactionUpdateResponse response;
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
		PlactionUpdateResponse response = null;
		
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
		
		given(redisUtil.getData(oauthUid+"+"+spotId))
		.willReturn(null);
		
		
		//when		
		PlactionUpdateResponse response = null;
		try{
			response = plactionService.savePlaction(spotId, oauthUid, score);
		}catch(Exception e) {
			ex = e;
		}
		
		
		//then		
		assertEquals(100,response.getGold());
		
		
	}
	
	@DisplayName("방문한지 일정 시간이 안 지난 스팟이라서 플렉션 갱신 실패")
	@Test
	public void 시간제한으로_플렉션_등록_실패() throws Exception{
		
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
		
		given(redisUtil.getData(oauthUid+"+"+spotId))
			.willReturn("something");
		
		
		//when		
		PlactionUpdateResponse response = null;
		try{
			response = plactionService.savePlaction(spotId, oauthUid, score);
		}catch(Exception e) {
			ex = e;
		}
		
		
		//then		
		assertEquals("Illegal game play",ex.getMessage());
		
		
	}
	
	
	@DisplayName("도시별 업적 진행률 받기 성공")
	@Test
	public void 도시별_플렉션_진행률_받기_성공() throws Exception{
		
		String oauthUid = "G-12345";
		User user = getSampleUser();
		Spot spot = getSpotSample();
		List<Spot> spots = List.of(spot);
		Plaction plaction = getSamplePlaction(user, spot);
		List<Plaction> plactions = List.of(plaction);
		
		//given
		given(userRepo.findByOauthUid(oauthUid)).willReturn(user);
		
		
		given(spotRepo.findAllByCity(cities[0])).willReturn(spots);
		given(plactionRepo.findAllByUserAndCity(user,cities[0])).willReturn(plactions);
		
		for(int i=1;i<cities.length;i++) {
			given(spotRepo.findAllByCity(cities[i])).willReturn(new ArrayList());
			given(plactionRepo.findAllByUserAndCity(user, cities[i])).willReturn(new ArrayList());
		}
		
		//when
		ListMyPlactionCountResponse response = null;
		try {
			response = plactionService.getMyPlactionsCountFromCities(oauthUid);
		}
		catch(Exception e) {
			ex = e;
		}
		
		assertEquals(1, response.getMyPlactionCounts().get(0).getMyCount());
		
		
		
	}
	
	@DisplayName("구군별 업적 진행률 받기 성공")
	@Test
	public void 구군별_플렉션_진행률_받기_성공() throws Exception{
		
		String oauthUid = "G-12345";
		String city = "대전광역시";
		User user = getSampleUser();
		Spot spot = getSpotSample();
		List<Spot> spots = List.of(spot);
		Plaction plaction = getSamplePlaction(user, spot);
		List<Plaction> plactions = List.of(plaction);
		
		String gugun[] = {"유성구","서구","중구","동구","대덕구"};
		
		//given
		given(userRepo.findByOauthUid(oauthUid)).willReturn(user);
		
		
		given(spotRepo.findAllByCityAndGugun(city,gugun[0])).willReturn(spots);
		given(plactionRepo.findAllByUserAndCityAndGugun(user,city,gugun[0])).willReturn(plactions);
		
		for(int i=1;i<gugun.length;i++) {
			given(spotRepo.findAllByCityAndGugun(city,gugun[i])).willReturn(new ArrayList());
			given(plactionRepo.findAllByUserAndCityAndGugun(user,city, gugun[i])).willReturn(new ArrayList());
		}
		
		//when
		ListMyPlactionCountResponse response = null;
		try {
			response = plactionService.getMyPlactionsCountFromGugun(oauthUid,city);
		}
		catch(Exception e) {
			ex = e;
		}
		
		//then
		assertEquals(1, response.getMyPlactionCounts().get(0).getMyCount());

	}
	
	@DisplayName("사용자 플렉션 전체 반환")
	@Test
	public void 사용자_플렉션_반환() {
		String oauthUid = "G-12345";
		String city = "대전광역시";
		User user = getSampleUser();
		Spot spot = getSpotSample();
		List<Spot> spots = List.of(spot);
		Plaction plaction = getSamplePlaction(user, spot);
		List<Plaction> plactions = List.of(plaction);
		
		
		//given
		given(userRepo.findByOauthUid(oauthUid)).willReturn(user);
		given(spotRepo.findAllJoinFetch()).willReturn(spots);
		given(plactionRepo.findAllByUser(user)).willReturn(plactions);
		
		
		//when
		ListPlactionResponse response = null;
		try {
			response = plactionService.getMyPlactions(oauthUid);			
		} catch(Exception e){
			ex = e;			
		}
		//then
		verify(userRepo).findByOauthUid(oauthUid);
		verify(spotRepo).findAllJoinFetch();
		verify(plactionRepo).findAllByUser(user);
		assertEquals(plaction.getScore(),response.getPlactions().get(0).getScore());
		
		
	}
	
	
	@DisplayName("사용자 플렉션 도시 기준 반환")
	@Test
	public void 사용자_플렉션_도시_기준_반환() {
		String oauthUid = "G-12345";
		String city = "대전광역시";
		User user = getSampleUser();
		Spot spot = getSpotSample();
		List<Spot> spots = List.of(spot);
		Plaction plaction = getSamplePlaction(user, spot);
		List<Plaction> plactions = List.of(plaction);
		
		
		//given
		given(userRepo.findByOauthUid(oauthUid)).willReturn(user);
		given(spotRepo.findAllByCity(city)).willReturn(spots);
		given(plactionRepo.findAllByUserAndCity(user,city)).willReturn(plactions);
		
		
		//when
		ListPlactionResponse response = null;
		try {
			response = plactionService.getMyPlactionsFromCity(oauthUid,city);			
		} catch(Exception e){
			
		}
		//then
		verify(userRepo).findByOauthUid(oauthUid);
		verify(spotRepo).findAllByCity(city);
		verify(plactionRepo).findAllByUserAndCity(user,city);
		assertEquals(plaction.getScore(),response.getPlactions().get(0).getScore());
		
		
	}
	
	
	@DisplayName("사용자 플렉션 구군 기준 반환")
	@Test
	public void 사용자_플렉션_구군_기준_반환() {
		String oauthUid = "G-12345";
		String city = "대전광역시";
		String gugun ="유성구";
		User user = getSampleUser();
		Spot spot = getSpotSample();
		List<Spot> spots = List.of(spot);
		Plaction plaction = getSamplePlaction(user, spot);
		List<Plaction> plactions = List.of(plaction);
		
		
		//given
		given(userRepo.findByOauthUid(oauthUid)).willReturn(user);
		given(spotRepo.findAllByCityAndGugun(city, gugun)).willReturn(spots);
		given(plactionRepo.findAllByUserAndCityAndGugun(user,city,gugun)).willReturn(plactions);
		
		
		//when
		ListPlactionResponse response = null;
		try {
			response = plactionService.getMyPlactionsFromGugun(oauthUid,city,gugun);			
		} catch(Exception e){
			
		}
		
		//then
		verify(userRepo).findByOauthUid(oauthUid);
		verify(spotRepo).findAllByCityAndGugun(city,gugun);
		verify(plactionRepo).findAllByUserAndCityAndGugun(user,city,gugun);
		assertEquals(plaction.getScore(),response.getPlactions().get(0).getScore());
		
		
	}
	
	
	
	
	
}
