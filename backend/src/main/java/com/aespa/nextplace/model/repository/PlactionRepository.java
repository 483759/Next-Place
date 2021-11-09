package com.aespa.nextplace.model.repository;

import org.springframework.data.jpa.repository.JpaRepository;

import com.aespa.nextplace.model.entity.Plaction;
import com.aespa.nextplace.model.entity.Spot;
import com.aespa.nextplace.model.entity.User;

public interface PlactionRepository extends JpaRepository<Plaction,Long> {
	boolean existsByUserAndSpot(User user, Spot spot);
	Plaction findByUserAndSpot(User user, Spot spot);
}
