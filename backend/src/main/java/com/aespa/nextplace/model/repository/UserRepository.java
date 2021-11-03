package com.aespa.nextplace.model.repository;

@Repository
public interface UserRepository extends JpaRepository<User,Long> {
	User findById(long id);
	User findByOauthUid(String oauthUid);	
	boolean existsByOauthUid(String oauthUid);
}
