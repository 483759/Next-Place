package com.aespa.nextplace.model.repository;

import java.util.List;

import org.springframework.data.jpa.repository.JpaRepository;
import org.springframework.stereotype.Repository;

import com.aespa.nextplace.model.entity.BaseAddress;
import com.aespa.nextplace.model.entity.City;

@Repository
public interface BaseAddressRepository extends JpaRepository<BaseAddress, Long>{
	BaseAddress findByCityAndDong(City city, String dong);
}
