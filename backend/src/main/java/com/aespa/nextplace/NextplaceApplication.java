package com.aespa.nextplace;

import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;
import org.springframework.context.annotation.EnableAspectJAutoProxy;

@SpringBootApplication
@EnableAspectJAutoProxy
public class NextplaceApplication {

	public static void main(String[] args) {
		SpringApplication.run(NextplaceApplication.class, args);
	}

}
