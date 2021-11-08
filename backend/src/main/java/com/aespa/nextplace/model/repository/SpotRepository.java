package com.aespa.nextplace.model.repository;

import java.util.List;

import org.springframework.data.jpa.repository.JpaRepository;
import org.springframework.stereotype.Repository;

import com.aespa.nextplace.model.entity.BaseAddress;
import com.aespa.nextplace.model.entity.Spot;

@Repository
public interface SpotRepository extends JpaRepository<Spot,Long>{
	List<Spot> findAllByBaseAddress(BaseAddress baseAddress);
}
