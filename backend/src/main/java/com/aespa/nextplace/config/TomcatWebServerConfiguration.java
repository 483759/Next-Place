package com.aespa.nextplace.config;

import org.springframework.boot.web.embedded.tomcat.TomcatServletWebServerFactory;
import org.springframework.boot.web.server.WebServerFactoryCustomizer;
import org.springframework.context.annotation.Configuration;

/**
 * Pagination 사용 시 요청 URI에 허용할 문자를 추가해주기 위한 Configuration 클래스
 * */
@Configuration
public class TomcatWebServerConfiguration implements WebServerFactoryCustomizer<TomcatServletWebServerFactory> {
    @Override
    public void customize(TomcatServletWebServerFactory factory) {
        factory.addConnectorCustomizers(connector -> connector.setProperty("relaxedQueryChars", "<>[\\]^`{|}"));
    }
}
