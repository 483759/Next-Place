package com.aespa.nextplace.spot;

import static org.assertj.core.api.Assertions.assertThat;
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
import com.aespa.nextplace.model.entity.Spot;
import com.aespa.nextplace.model.entity.SpotType;
import com.aespa.nextplace.model.repository.PlactionRepository;
import com.aespa.nextplace.model.repository.SpotRepository;
import com.aespa.nextplace.model.repository.UserRepository;
import com.aespa.nextplace.model.response.ListSpotResponse;
import com.aespa.nextplace.model.response.SpotResponse;
import com.aespa.nextplace.service.SpotServiceImpl;
import com.aespa.nextplace.util.NaverMapUtil;
import com.aespa.nextplace.util.RedisUtil;

@ExtendWith(MockitoExtension.class)
@Transactional
public class SpotServiceTest {
	
	
	@InjectMocks
	SpotServiceImpl spotService;	
	
	@Mock
	NaverMapUtil geocodeUtil;
	
	@Mock
	SpotRepository spotRepo;
			
	@Mock
	PlactionRepository plactionRepo;
	
	@Mock
	UserRepository userRepo;
	
	@Mock
	RedisUtil redisUtil;
	
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
	
	

	
	//성공 , 잘못된 좌표가 있는 경우, 도시가 없는 경우, 동을 찾을 수 없는 경우, 스팟이 없는 경우
	
	@DisplayName("스팟 조회 성공")
	@Test
	void 스팟조회_성공() throws Exception{
		
		//given
		String oauthUid = "G-12345";
		String daejeon = "대전광역시";
		BaseAddress baseAddress = getSampleBaseAddress();
		String dong = "봉명동";
		String lat = "50", lng = "100";
		
		given(geocodeUtil.getAddress(lat, lng))
		.willReturn("대전광역시 유성구 봉명동");
		
		
		List<Spot> spotList = List.of(getSpotSample(baseAddress));
		
		given(spotRepo.findAllByCityAndDong(daejeon,dong))
			.willReturn(spotList);
		
		
		//when		
		ListSpotResponse response = spotService.getSpots(oauthUid,lat,lng);
		
		
		//then
		verify(geocodeUtil).getAddress(lat,lng);
		verify(spotRepo).findAllByCityAndDong(daejeon,dong);
		
		for(SpotResponse res : response.getSpotList())
			assertThat(res.getName())
				.isEqualTo("온천교");
		
	}
	
	
	
	
	@DisplayName("잘못된 좌표로 스팟 조회 실패")
	@Test
	void 잘못된_좌표() throws Exception{
		//given
		String oauthUid = "G-12345";
		String lat = "500", lng = "100";
		

		
		//when
		try {
			spotService.getSpots(oauthUid,lat,lng);					
		}
		catch(IllegalArgumentException e){
			ex = e;
		}
		
		
		//then
		assertEquals("Wrong lat or lng",ex.getMessage());
		
		
		
	}
	
	@DisplayName("한국 주소를 찾을 수 없어 스팟 조회 실패")
	@Test
	void 잘못된_주소_스팟조회_실패() throws Exception{
		//given
		String oauthUid = "G-12345";
		String lat = "50", lng = "100";
		
		given(geocodeUtil.getAddress(lat, lng))
		.willReturn("");
		
		//when
		try {
			spotService.getSpots(oauthUid,lat,lng);					
		}
		catch(IllegalArgumentException e){
			ex = e;
		}
		
		
		//then
		assertEquals("Wrong address",ex.getMessage());
		
		
		
	}
	
	@DisplayName("조회 시 스팟이 없거나 방문한 스팟인 경우")
	@Test
	void 스팟_성공_결과없음() throws Exception{
		//given
		String oauthUid = "G-12345";
		String daejeon = "대전광역시";
		BaseAddress baseAddress = getSampleBaseAddress();
		String dong = "봉명동";
		String lat = "50", lng = "100";
		
		given(geocodeUtil.getAddress(lat, lng))
		.willReturn("대전광역시 유성구 봉명동");
		
			
		List<Spot> spotList = new ArrayList<>();
		spotList.add(getSpotSample(baseAddress));
		
		given(redisUtil.getData(oauthUid+"+1"))
		.willReturn("123");
		
		given(spotRepo.findAllByCityAndDong(daejeon,dong))
		.willReturn(spotList);
		
		
		//when
		
		ListSpotResponse response = spotService.getSpots(oauthUid,lat,lng);
		
		
		//then
		verify(geocodeUtil).getAddress(lat,lng);
		verify(spotRepo).findAllByCityAndDong(daejeon,dong);
		
		
		assertEquals(0,response.getSpotList().size());
		
		
	}
	

	
	
}
