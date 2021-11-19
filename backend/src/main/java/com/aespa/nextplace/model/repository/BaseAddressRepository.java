package com.aespa.nextplace.model.repository;

import org.springframework.data.jpa.repository.JpaRepository;
import org.springframework.stereotype.Repository;

import com.aespa.nextplace.model.entity.BaseAddress;

@Repository
public interface BaseAddressRepository extends JpaRepository<BaseAddress, Long>{
	BaseAddress findByCityAndGugunAndDong(String city,String gugun, String dong);
}
