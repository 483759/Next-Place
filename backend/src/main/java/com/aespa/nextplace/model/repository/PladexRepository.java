package com.aespa.nextplace.model.repository;

import com.aespa.nextplace.model.entity.Pladex;
import com.aespa.nextplace.model.entity.PlamonRank;
import org.springframework.data.jpa.repository.JpaRepository;
import org.springframework.stereotype.Repository;

import java.util.List;

@Repository
public interface PladexRepository extends JpaRepository<Pladex, Long> {

    Pladex findByName(String name);

    List<Pladex> findAllByRank(PlamonRank rank);
}
