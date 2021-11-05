package com.aespa.nextplace.model.repository;

import org.springframework.data.jpa.repository.JpaRepository;

import com.aespa.nextplace.model.entity.City;

public interface CityRepository extends JpaRepository<City,Long> {
	City findByName(String name);
}
