package com.aespa.nextplace.config;

import java.io.FileInputStream;
import java.io.IOException;
import java.util.List;

import org.springframework.beans.factory.annotation.Value;
import org.springframework.context.annotation.Bean;
import org.springframework.context.annotation.Configuration;

import com.google.auth.oauth2.GoogleCredentials;
import com.google.firebase.FirebaseApp;
import com.google.firebase.FirebaseOptions;
import com.google.firebase.auth.FirebaseAuth;

@Configuration
public class FirebaseInitializer {

	@Value("${firebase.route}")
	private String keyRoute;

	@Bean
	public FirebaseAuth getFirebaseAuth() throws IOException {

		FileInputStream serviceAccount = new FileInputStream(keyRoute);
		FirebaseApp firebaseApp = null;
		List<FirebaseApp> firebaseApps = FirebaseApp.getApps();
		if(firebaseApps != null && !firebaseApps.isEmpty()) {
			for(FirebaseApp app : firebaseApps) {
				if(app.getName().equals(FirebaseApp.DEFAULT_APP_NAME))
					firebaseApp = app;
			}
		} else {
			FirebaseOptions options = new FirebaseOptions.Builder()
			  .setCredentials(GoogleCredentials.fromStream(serviceAccount))
			  .build();
			
			FirebaseApp.initializeApp(options);

		}
		
		
		
		FirebaseAuth firebaseAuth = FirebaseAuth.getInstance(FirebaseApp.getInstance());
		return firebaseAuth;
	}
}