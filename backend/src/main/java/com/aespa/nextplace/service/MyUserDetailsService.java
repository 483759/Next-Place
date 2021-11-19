package com.aespa.nextplace.service;

import org.springframework.security.core.userdetails.UserDetails;
import org.springframework.security.core.userdetails.UserDetailsService;
import org.springframework.security.core.userdetails.UsernameNotFoundException;
import org.springframework.stereotype.Service;

import com.aespa.nextplace.model.entity.MyUserDetails;
import com.aespa.nextplace.model.entity.User;
import com.aespa.nextplace.model.repository.UserRepository;

import lombok.RequiredArgsConstructor;


@Service
@RequiredArgsConstructor
public class MyUserDetailsService implements UserDetailsService {

	
	private final UserRepository userRepo;
	
	@Override
	public UserDetails loadUserByUsername(String userid) throws UsernameNotFoundException {
		
		String oauthUid = "G-"+userid;
		
		User user = userRepo.findByOauthUid(oauthUid);
		
		if(user == null) {
			throw new UsernameNotFoundException(oauthUid+" : 해당되는 사용자가 없습니다 ");
		}
		
		
		
		return new MyUserDetails(user);
	}

}
