package com.aespa.nextplace.model.repository;

import com.aespa.nextplace.model.entity.BaseAddress;
import com.aespa.nextplace.model.entity.Spot;
import org.springframework.data.jpa.repository.JpaRepository;
import org.springframework.data.jpa.repository.Query;
import org.springframework.data.repository.query.Param;
import org.springframework.stereotype.Repository;

import java.util.List;

@Repository
public interface SpotRepository extends JpaRepository<Spot,Long>{
	List<Spot> findAllByBaseAddress(BaseAddress baseAddress);
	@Query("select DISTINCT s from Spot s join fetch s.baseAddress where s.id = :id")
	Spot findByIdAllJoinFetch(@Param("id")long id);
	Spot findById(long id);
	@Query("select DISTINCT s from Spot s join fetch s.baseAddress where s.baseAddress.city = :city")
	List<Spot> findAllByCity(@Param("city") String city);
	
	@Query("select DISTINCT s from Spot s join fetch s.baseAddress where s.baseAddress.city = :city and s.baseAddress.gugun = :gugun")
	List<Spot> findAllByCityAndGugun(@Param("city") String city, @Param("gugun") String gugun);
	
	@Query("select DISTINCT s from Spot s join fetch s.baseAddress where s.baseAddress.city = :city and s.baseAddress.dong = :dong")
	List<Spot> findAllByCityAndDong(@Param("city") String city, @Param("dong") String dong);
	
	@Query("select DISTINCT s from Spot s join fetch s.baseAddress")
	List<Spot> findAllJoinFetch();
}
