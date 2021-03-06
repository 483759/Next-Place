package com.aespa.nextplace.model.repository;

import com.aespa.nextplace.model.entity.User;
import org.springframework.data.jpa.repository.JpaRepository;
import org.springframework.stereotype.Repository;

@Repository
public interface UserRepository extends JpaRepository<User,Long> {
	User findById(long id);
	User findByOauthUid(String oauthUid);	
	boolean existsByOauthUid(String oauthUid);
}
