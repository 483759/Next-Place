package com.aespa.nextplace.config;

import org.springframework.context.annotation.Configuration;
import org.springframework.web.servlet.config.annotation.CorsRegistry;
import org.springframework.web.servlet.config.annotation.WebMvcConfigurer;

@Configuration
public class WebConfiguration implements WebMvcConfigurer {
    @Override
    public void addCorsMappings(CorsRegistry registry) {
        registry.addMapping("/**") //모든 요청에 대해서
                .allowedOrigins("http://localhost", "https://localhost", "http://k5b106.p.ssafy.io", "https://k5b106.p.ssafy.io"); //허용할 오리진들
    }
}
