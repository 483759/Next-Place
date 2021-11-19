package com.aespa.nextplace.util;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.net.HttpURLConnection;
import java.net.URL;

import org.json.simple.JSONArray;
import org.json.simple.JSONObject;
import org.json.simple.parser.JSONParser;
import org.springframework.beans.factory.annotation.Value;
import org.springframework.stereotype.Service;

@Service
public class NaverMapUtil {

	
	@Value("${naver.geocode.id}")
	private String ID;
	@Value("${naver.geocode.key}")
	private String KEY;

	public String getAddress(String lat, String lng) {

		String realAddress = "none";
				
		try {
			
			String apiURL = "https://naveropenapi.apigw.ntruss.com/map-reversegeocode/v2/gc?coords="+lng+","+lat+"&sourcecrs=epsg:4326&orders=legalcode&output=json";
			URL url = new URL(apiURL);

			HttpURLConnection con = (HttpURLConnection) url.openConnection();
			con.setRequestProperty("X-NCP-APIGW-API-KEY-ID", ID);
			con.setRequestProperty("X-NCP-APIGW-API-KEY", KEY);
			con.setRequestMethod("GET");
			
			int responseCode = con.getResponseCode();
			BufferedReader br;
			if (responseCode == 200) {
				br = new BufferedReader(new InputStreamReader(con.getInputStream()));
			} else {
				br = new BufferedReader(new InputStreamReader(con.getErrorStream()));
			}
			String inputLine;
			StringBuffer response = new StringBuffer();
			while ((inputLine = br.readLine()) != null) {
				response.append(inputLine);
			}
			br.close();
			String result = response.toString();
			
			
			JSONParser jsonParser = new JSONParser();
			JSONObject jsonObject = (JSONObject) jsonParser.parse(result);			
			JSONArray results = (JSONArray) jsonObject.get("results");
			JSONObject region = (JSONObject)((JSONObject) results.get(0)).get("region");

			JSONObject area1 = (JSONObject) region.get("area1");
			JSONObject area2 = (JSONObject) region.get("area2");;
			JSONObject area3 = (JSONObject) region.get("area3");
			
			StringBuilder sb = new StringBuilder();
			sb.append(area1.get("name")).append(" ");
			sb.append(area2.get("name")).append(" ");
			sb.append(area3.get("name"));
			
			realAddress = sb.toString();
			

			return realAddress;
		} catch (Exception e) {
			return realAddress;
		}

	}

}
