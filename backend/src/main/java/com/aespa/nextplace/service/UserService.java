package com.aespa.nextplace.service;

import javax.servlet.http.HttpServletResponse;

import com.aespa.nextplace.model.response.UserResponse;
import com.google.firebase.auth.FirebaseAuthException;

public interface UserService {
	String getUid(String idToken) throws FirebaseAuthException;
	boolean existsByOauthId(String uid);
	void signUp(String uid);
	UserResponse login(String uid, String idToken,HttpServletResponse httpServletRes);
	void logout(HttpServletResponse httpServletRes);
	UserResponse getMyInfo(String uid);
	void guest(HttpServletResponse httpServletRes);
}
