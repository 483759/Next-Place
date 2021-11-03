package com.aespa.nextplace.config;

import io.swagger.v3.oas.models.Components;
import io.swagger.v3.oas.models.OpenAPI;
import io.swagger.v3.oas.models.info.Contact;
import io.swagger.v3.oas.models.info.Info;
import io.swagger.v3.oas.models.info.License;
import io.swagger.v3.oas.models.security.SecurityRequirement;
import io.swagger.v3.oas.models.security.SecurityScheme;
import org.springframework.beans.factory.annotation.Value;
import org.springframework.context.annotation.Bean;
import org.springframework.context.annotation.Configuration;

@Configuration
public class SwaggerConfiguration {
    public static final String SECURITY_SCHEMA_NAME = "bearer";
    public static final String AUTHORIZATION_SCOPE_GLOBAL = "global";
    public static final String AUTHORIZATION_SCOPE_GLOBAL_DESC = "accessEverything";

    private Info info() {
        return new Info().title("Next Place")
                .description("<h2>Next Place API Reference Document for AESPA</h2>")
                .termsOfService("https://github.com/483759/Next-Place")
                .contact(new Contact().name("김경원, 박근일, 윤이진, 이상현, 이종은").email("483759@naver.com"))
                .license(new License().name("Apache License Version 2.0").url("http://www.apache.org/licenses/LICENSE-2.0"))
                .version("1.0");
    }

    @Bean
    public OpenAPI openAPI(@Value("${springdoc.version}") String appVersion) {
        Info info = new Info().title("Next Place")
                .description("<h2>Next Place API Reference Document for AESPA</h2>")
                .termsOfService("https://edu.ssafy.com")
                .contact(new Contact().name("김경원, 박근일, 윤이진, 이상현, 이종은").email("483759@naver.com"))
                .license(new License().name("Apache License Version 2.0").url("http://www.apache.org/licenses/LICENSE-2.0"))
                .version("1.0");

        SecurityScheme basicAuth = new SecurityScheme()
                .type(SecurityScheme.Type.HTTP).scheme("bearer").bearerFormat("JWT")
                .in(SecurityScheme.In.HEADER).name("Authorization");
        SecurityRequirement securityItem = new SecurityRequirement().addList("bearerAuth");

        return new OpenAPI()
                .components(new Components().addSecuritySchemes("bearerAuth", basicAuth))
                .addSecurityItem(securityItem)
                .info(info)
                ;

    }

}
