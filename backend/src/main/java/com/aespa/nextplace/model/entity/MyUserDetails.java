package com.aespa.nextplace.model.entity;

import java.util.ArrayList;
import java.util.Collection;
import java.util.List;

import org.springframework.security.core.GrantedAuthority;
import org.springframework.security.core.userdetails.UserDetails;

public class MyUserDetails implements UserDetails {

	private User user;
	private boolean accountNonExpired;
	private boolean accountNonLocked;
	private boolean credentialNonExpired;
	private boolean enabled;
	private Collection<? extends GrantedAuthority> authorities;
	private static final long serialVersionUID = 1L;
	
	public MyUserDetails(User user) {
		super();
		this.user = user;
		authorities = new ArrayList<>();
	}

	 @Override
	    public Collection<? extends GrantedAuthority> getAuthorities() {
	        return this.authorities;
	    }

	    public void setAuthorities(List<GrantedAuthority> authorities) {
	        this.authorities = authorities;
	    }

	    @Override
	    public String getPassword() {
	        return null;
	    }

	    @Override
	    public String getUsername() {
	        return user.getOauthUid();
	    }

	    @Override
	    public boolean isAccountNonExpired() {
	        return this.accountNonExpired;
	    }

	    @Override
	    public boolean isAccountNonLocked() {
	        return this.accountNonLocked;
	    }

	    @Override
	    public boolean isCredentialsNonExpired() {
	        return this.credentialNonExpired;
	    }

	    @Override
	    public boolean isEnabled() {
	        return this.enabled;
	    }


}
