package com.aespa.nextplace.util;

import java.util.HashMap;
import java.util.Map;

import org.springframework.stereotype.Component;

@Component
public class GugunUtil {

	Map<String, String[]> gugun = new HashMap();
	
	private GugunUtil() {
		String daejeon[] = {"유성구" , "서구" ,"중구", "동구", "대덕구"};
		gugun.put("대전광역시",daejeon);		
	}
	
	private static class LazyHolder {
		private static final GugunUtil instance = new GugunUtil();
	}
	
	public static GugunUtil getInstance() {
		return LazyHolder.instance;
	}
	
	public String[] getGugun(String city) {
		return gugun.get(city);
	}
	
	
	
}
