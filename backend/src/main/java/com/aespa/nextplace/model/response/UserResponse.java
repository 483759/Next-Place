package com.aespa.nextplace.model.response;

import com.aespa.nextplace.model.entity.User;
import com.aespa.nextplace.model.entity.UserRole;

import lombok.Getter;
import lombok.Setter;

@Getter
@Setter
public class UserResponse {
	private long id;	
	private String nickname;
	private int gold;
	private int dalgona;
	private String avatar;
	private UserRole role;

	public UserResponse(User user) {
		this.id = user.getId();
		this.nickname = user.getNickname();
		this.gold = user.getGold();
		this.dalgona = user.getDalgona();
		this.avatar = user.getAvatar();
		this.role = user.getRole();
	}
	
}
