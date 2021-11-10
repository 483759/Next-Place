package com.aespa.nextplace.model.repository;

import java.util.List;

import org.springframework.data.jpa.repository.JpaRepository;
import org.springframework.data.jpa.repository.Query;
import org.springframework.data.repository.query.Param;
import org.springframework.stereotype.Repository;

import com.aespa.nextplace.model.entity.BaseAddress;
import com.aespa.nextplace.model.entity.Spot;

@Repository
public interface SpotRepository extends JpaRepository<Spot,Long>{
	List<Spot> findAllByBaseAddress(BaseAddress baseAddress);
	@Query("select DISTINCT s from Spot s join fetch s.baseAddress where s.id = :id")
	Spot findByIdAllJoinFetch(@Param("id")long id);
	Spot findById(long id);
	@Query("select DISTINCT s from Spot s join fetch s.baseAddress where s.baseAddress.city = :city")
	List<Spot> findAllByCity(@Param("city") String city);
	
	@Query("select DISTINCT s from Spot s join fetch s.baseAddress where s.baseAddress.gugun = :gugun")
	List<Spot> findAllByGugun(@Param("gugun") String gugun);
	
	
}
