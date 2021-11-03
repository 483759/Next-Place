package com.aespa.nextplace.service;

import java.util.Collection;
import java.util.Random;

import javax.servlet.http.Cookie;
import javax.servlet.http.HttpServletResponse;

import org.springframework.http.HttpHeaders;
import org.springframework.stereotype.Service;
import org.springframework.transaction.annotation.Transactional;
import org.threeten.bp.LocalDateTime;

import com.aespa.nextplace.model.entity.User;
import com.aespa.nextplace.model.entity.UserRole;
import com.aespa.nextplace.model.repository.UserRepository;
import com.aespa.nextplace.response.UserResponse;
import com.aespa.nextplace.util.CookieUtil;
import com.google.firebase.auth.FirebaseAuth;
import com.google.firebase.auth.FirebaseAuthException;
import com.google.firebase.auth.FirebaseToken;

import lombok.RequiredArgsConstructor;


@Service
@RequiredArgsConstructor
@Transactional(readOnly = true)
public class UserServiceImpl implements UserService {

	private final UserRepository userRepo;
	
	private final CookieUtil cookieUtil;
	

	public String getUid(String idToken) throws FirebaseAuthException {
		FirebaseToken decodedToken = FirebaseAuth.getInstance().verifyIdToken(idToken);
		String uid = "G-"+decodedToken.getUid();

		return uid;
	}
	
	
	public boolean existsByOauthId(String uid) {		
		
		return userRepo.existsByOauthUid(uid);
	}
	

	@Transactional
	public void signUp(String uid) {
		
		Random random = new Random();
		
		int prefixIdx = LocalDateTime.now().getSecond()%10;
		int suffixIdx = random.nextInt(10);
		
		String nicknamePrefix[] = { "고독한", "즐거운", "용감한", "활발한", "냉정한", "장난꾸러기", "무시무시한", "화려한", "미스테리한", "사랑스러운" };
		String nicknameSuffix[] ={ "손바닥", "발바닥", "치킨마요", "고추참치", "냥이", "댕댕이", "전문가", "아마추어", "성심이", "고로케" };
		
		User user = User.builder()				
				.user(new User(uid, nicknamePrefix[prefixIdx]+" "+nicknameSuffix[suffixIdx]))
				.role(UserRole.USER)
				.build();
	
		userRepo.save(user);

	}
	
	public UserResponse login(String uid, String idToken, HttpServletResponse httpServletRes) {
		UserResponse response = null;
		Cookie accessTokenCookie = cookieUtil.createCookie("token",idToken,60* 24 * 5);
		
		httpServletRes.addCookie(accessTokenCookie);
		Collection<String> headers = httpServletRes.getHeaders(HttpHeaders.SET_COOKIE);
		for (String header : headers) {
			httpServletRes.setHeader(HttpHeaders.SET_COOKIE, header + "; " + "SameSite=None; Secure");
		}		
		
		
		User user = userRepo.findByOauthUid(uid);
		response = new UserResponse(user);
		
		
		
		
		return response;

	}

}
