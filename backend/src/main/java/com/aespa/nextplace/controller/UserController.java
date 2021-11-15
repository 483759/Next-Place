package com.aespa.nextplace.controller;

import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import org.springframework.http.HttpStatus;
import org.springframework.http.ResponseEntity;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

import com.aespa.nextplace.model.response.UserResponse;
import com.aespa.nextplace.service.UserService;
import com.google.firebase.auth.FirebaseAuthException;

import lombok.RequiredArgsConstructor;

@RestController
@RequestMapping("/user")
@RequiredArgsConstructor
public class UserController {
	
	private final UserService userService;
	

	@PostMapping("/login")
	public ResponseEntity<UserResponse> login(@RequestBody String idToken, HttpServletResponse httpServletRes) {
		
		
		UserResponse response = null;
		String uid;
		try {
			uid = userService.getUid(idToken);
		} catch (FirebaseAuthException e) {
			return new ResponseEntity<UserResponse>(response,HttpStatus.BAD_REQUEST);
		}
		
		if(!userService.existsByOauthId(uid))
			userService.signUp(uid);

		response = userService.login(uid, idToken,httpServletRes);
			
		return new ResponseEntity<UserResponse>(response,HttpStatus.OK);
	}
	

	@PostMapping("/logout")
	public ResponseEntity<?> logout(HttpServletResponse httpServletRes){
		
		
		userService.logout(httpServletRes);
		
		return ResponseEntity.ok("");
	}
	
	@GetMapping("/me")
	public ResponseEntity<?> myInfo(HttpServletRequest httpServletReq){
		
		String oauthUid = (String) httpServletReq.getAttribute("uid");
		
		UserResponse response = userService.getMyInfo(oauthUid);
		
		return ResponseEntity.ok(response);
	}
	
	@PostMapping("/guest")
	public ResponseEntity<?> guest(HttpServletResponse httpServletRes){
		
		
		userService.guest(httpServletRes);
		
		return ResponseEntity.ok("");
	}
	
	
}
