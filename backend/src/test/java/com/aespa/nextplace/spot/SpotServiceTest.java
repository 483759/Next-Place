package com.aespa.nextplace.spot;

import static org.assertj.core.api.Assertions.assertThat;
import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.assertThrows;
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
import com.aespa.nextplace.model.entity.City;
import com.aespa.nextplace.model.entity.Spot;
import com.aespa.nextplace.model.entity.SpotType;
import com.aespa.nextplace.model.repository.BaseAddressRepository;
import com.aespa.nextplace.model.repository.CityRepository;
import com.aespa.nextplace.model.repository.SpotRepository;
import com.aespa.nextplace.model.response.ListSpotResponse;
import com.aespa.nextplace.model.response.SpotResponse;
import com.aespa.nextplace.service.SpotServiceImpl;
import com.aespa.nextplace.util.GoogleGeocodeUtil;

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
	CityRepository cityRepo;
		
	private City getSampleCity() {
		return new City(6,"대전광역시");
	}
		
	
	public BaseAddress getSampleBaseAddress(City city) {
		return new BaseAddress(4283001004L,city,"유성구","봉명동");
	}
	
	
	public Spot getSpotSample(BaseAddress baseAddress ) {
		return Spot.builder().spot(new Spot(baseAddress, "온천교", 50f,100f))
				.id(1L)
				.type(SpotType.ATTRACTION)
				.information("information")
				.detail("detail")
				.exp(100)
				.isRandom(false)
				.build();
	}
	
	
	public ListSpotResponse getListSpotResponse(Spot spot) {
		
		List<Spot> list = new ArrayList();
		list.add(spot);
				
		return new ListSpotResponse(list); 
	}
	
	//성공 , 잘못된 좌표가 있는 경우, 도시가 없는 경우, 동을 찾을 수 없는 경우, 스팟이 없는 경우
	
	@DisplayName("스팟 조회 성공")
	@Test
	public void 스팟조회_성공() throws Exception{
		
		//given
		
		City daejeon = getSampleCity();
		BaseAddress baseAddress = getSampleBaseAddress(daejeon);
		String dong = "봉명동";
		float lat = 50, lng =100;
		
		given(geocodeUtil.getAddress(lat, lng))
		.willReturn("대한민국 대전광역시 유성구 봉명동");
		
		given(cityRepo.findByName("대전광역시"))
			.willReturn(daejeon);
		
		given(baseAddressRepo.findByCityAndDong(daejeon, dong))
			.willReturn(baseAddress);
		
		List<Spot> spotList = new ArrayList();
		spotList.add(getSpotSample(baseAddress));
		
		given(spotRepo.findAllByBaseAddress(baseAddress))
			.willReturn(spotList);
		
		
		//when
		
		ListSpotResponse response = spotService.getSpots(lat,lng);
		
		
		//then
		verify(geocodeUtil).getAddress(lat,lng);
		verify(cityRepo).findByName("대전광역시");
		verify(baseAddressRepo).findByCityAndDong(daejeon, dong);
		verify(spotRepo).findAllByBaseAddress(baseAddress);
		
		for(SpotResponse res : response.getSpotList())
			assertThat(res.getName())
				.isEqualTo("온천교");
		
	}
	
	
	Exception ex;
	
	@DisplayName("잘못된 좌표로 스팟 조회 실패")
	@Test
	public void 잘못된_좌표() throws Exception{
		//given
		
		City daejeon = getSampleCity();
		BaseAddress baseAddress = getSampleBaseAddress(daejeon);
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
		
		City daejeon = getSampleCity();
		BaseAddress baseAddress = getSampleBaseAddress(daejeon);
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
	
	@DisplayName("도시명를 찾을 수 없어 스팟 조회 실패")
	@Test
	public void 도시명_스팟조회_실패() throws Exception{
		//given
		
		City daejeon = getSampleCity();
		BaseAddress baseAddress = getSampleBaseAddress(daejeon);
		String dong = "봉명동";
		float lat = 50, lng =100;
		
		given(geocodeUtil.getAddress(lat, lng))
		.willReturn("우하하하하 유성구 봉명동");
		
		//when
		try {
			ListSpotResponse response = spotService.getSpots(lat,lng);					
		}
		catch(IllegalArgumentException e){
			ex = e;
		}
		
		
		//then
		assertEquals("Can't find city",ex.getMessage());		
	}
	
	
	@DisplayName("조회 시 스팟이 없는 경우")
	@Test
	public void 스팟_성공_결과없음() throws Exception{
		//given
		
		City daejeon = getSampleCity();
		BaseAddress baseAddress = getSampleBaseAddress(daejeon);
		String dong = "봉명동";
		float lat = 50, lng =100;
		
		given(geocodeUtil.getAddress(lat, lng))
		.willReturn("대한민국 대전광역시 유성구 봉명동");
		
		given(cityRepo.findByName("대전광역시"))
			.willReturn(daejeon);
		
		given(baseAddressRepo.findByCityAndDong(daejeon, dong))
			.willReturn(baseAddress);
		
		List<Spot> spotList = new ArrayList();
		spotList.add(getSpotSample(baseAddress));
		
		given(spotRepo.findAllByBaseAddress(baseAddress))
			.willReturn(new ArrayList());
		
		
		//when
		
		ListSpotResponse response = spotService.getSpots(lat,lng);
		
		
		//then
		verify(geocodeUtil).getAddress(lat,lng);
		verify(cityRepo).findByName("대전광역시");
		verify(baseAddressRepo).findByCityAndDong(daejeon, dong);
		verify(spotRepo).findAllByBaseAddress(baseAddress);
		
		
		assertEquals(0,response.getSpotList().size());
		
		
	}
	
	
	
}
