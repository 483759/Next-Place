package com.aespa.nextplace.model.repository;

import java.util.List;

import org.springframework.data.jpa.repository.JpaRepository;
import org.springframework.data.jpa.repository.Query;
import org.springframework.data.repository.query.Param;

import com.aespa.nextplace.model.entity.Plaction;
import com.aespa.nextplace.model.entity.Spot;
import com.aespa.nextplace.model.entity.User;

public interface PlactionRepository extends JpaRepository<Plaction,Long> {
	boolean existsByUserAndSpot(User user, Spot spot);
	Plaction findByUserAndSpot(User user, Spot spot);
	
	@Query("select DISTINCT p from Plaction p join fetch p.baseAddress where p.user = :user and p.baseAddress.city = :city")
	List<Plaction> findAllByUserAndCity(@Param("user")User user, @Param("city")String city);
	
	@Query("select DISTINCT p from Plaction p join fetch p.baseAddress where p.user = :user and p.baseAddress.gugun = :gugun")
	List<Plaction> findAllByUserAndGugun(@Param("user")User user, @Param("gugun")String gugun);
	
}
