package com.aespa.nextplace.config;

import com.google.auth.oauth2.GoogleCredentials;
import com.google.firebase.FirebaseApp;
import com.google.firebase.FirebaseOptions;
import com.google.firebase.auth.FirebaseAuth;
import org.springframework.beans.factory.annotation.Value;
import org.springframework.context.annotation.Bean;
import org.springframework.context.annotation.Configuration;

import java.io.FileInputStream;
import java.io.IOException;
import java.util.List;

@Configuration
public class FirebaseInitializer {

	@Value("${firebase.route}")
	private String keyRoute;

	@Bean
	public FirebaseAuth getFirebaseAuth() throws IOException {

		FirebaseApp firebaseApp = null;
		FileInputStream serviceAccount = new FileInputStream(keyRoute);

		try {
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

				firebaseApp = FirebaseApp.initializeApp(options);
			}
		} finally {
			serviceAccount.close();
			FirebaseAuth firebaseAuth = FirebaseAuth.getInstance(firebaseApp);
			return firebaseAuth;
		}
	}
}