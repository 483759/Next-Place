package com.aespa.nextplace.util;

import java.util.Collection;

import javax.servlet.http.Cookie;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import org.springframework.http.HttpHeaders;
import org.springframework.stereotype.Service;

@Service
public class CookieUtil {
	public final static long USER_NULL = -1;
	public final static int DEFAULT_TIME = 60* 24 * 5;
    public Cookie createCookie(String cookieName, String value, int time){
        Cookie token = new Cookie(cookieName,"Bearer "+value);
        token.setHttpOnly(true);
        token.setMaxAge(time);
        token.setPath("/");
        return token;
    }

    public Cookie getCookie(HttpServletRequest req, String cookieName){
        final Cookie[] cookies = req.getCookies();
        if(cookies==null) return null;
        for(Cookie cookie : cookies){
            if(cookie.getName().equals(cookieName))
                return cookie;
        }
        return null;
    }
        
    public void deleteCookie(HttpServletRequest req, HttpServletResponse res, String cookieName) {
    	Cookie cookie = new Cookie(cookieName,null);
    	cookie.setMaxAge(0);
    	cookie.setPath("/");
    	res.addCookie(cookie);
    	Collection<String> headers = res.getHeaders(HttpHeaders.SET_COOKIE);
		for (String header : headers) {
			res.setHeader(HttpHeaders.SET_COOKIE, header + "; " + "SameSite=None; Secure");
		}
    }
    
    

}
