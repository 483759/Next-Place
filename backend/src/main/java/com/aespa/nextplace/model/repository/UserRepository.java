package com.aespa.nextplace.model.repository;

import org.springframework.data.jpa.repository.JpaRepository;
import org.springframework.stereotype.Repository;

import com.aespa.nextplace.model.entity.User;


@Repository
public interface UserRepository extends JpaRepository<User,Long> {
	User findById(long id);
	User findByOauthUid(String oauthUid);	
	boolean existsByOauthUid(String oauthUid);
}
