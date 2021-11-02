package com.aespa.nextplace.model.entity;

import javax.persistence.Column;
import javax.persistence.Entity;
import javax.persistence.EnumType;
import javax.persistence.Enumerated;
import javax.persistence.GeneratedValue;
import javax.persistence.GenerationType;
import javax.persistence.Id;

import org.springframework.util.Assert;

import lombok.AccessLevel;
import lombok.Builder;
import lombok.Getter;
import lombok.NoArgsConstructor;

@Entity
@NoArgsConstructor(access = AccessLevel.PROTECTED)
@Getter
public class User {
    @Id @GeneratedValue(strategy = GenerationType.IDENTITY)
    @Column(name = "user_id")
    private Long id;

    @Column(name = "user_oauth_uid")
    private String oauthUid;

    @Column(name = "user_nickname")
    private String nickname;

    @Column(name = "user_role")
    @Enumerated(EnumType.STRING)
    private UserRole role;

    @Column(name = "user_gold")
    private int gold;

    @Column(name = "user_dalgona")
    private int dalgona;
    
    @Column(name ="user_avatar")
    private String avatar;
       
    
    public User(String oauthUid, String nickname) {
    	this.nickname = nickname;
    	this.oauthUid = oauthUid;
    }
    
       
    @Builder
    public User(long id, User user, UserRole role, int gold, int dalgona, String avatar) {    	
    	Assert.hasText(user.getNickname(),"Nickname must not be empty");
    	Assert.hasText(user.getOauthUid(),"OauthUid must not be empty");    	    	
    	this.id = id;
    	this.oauthUid = user.getOauthUid();
    	this.nickname = user.getNickname();
    	this.role = role;
    	this.gold = gold;
    	this.dalgona = dalgona;
    	this.avatar = avatar;
    }        
    
//    @Builder
//    public User(long id, String oauthUid, String nickname, UserRole role, int gold, int dalgona, String avatar) {    	
//    	Assert.hasText(nickname,"Nickname must not be empty");
//    	Assert.hasText(oauthUid,"OauthUid must not be empty");    	    	
//    	this.id = id;
//    	this.oauthUid = oauthUid;
//    	this.nickname = nickname;
//    	this.role = role;
//    	this.gold = gold;
//    	this.dalgona = dalgona;
//    	this.avatar = avatar;
//    }
    
    
}
