package com.aespa.nextplace.model.repository;

import com.aespa.nextplace.model.entity.Pladex;
import org.springframework.data.jpa.repository.JpaRepository;
import org.springframework.stereotype.Repository;

@Repository
public interface PladexRepository extends JpaRepository<Pladex, Long> {
    Pladex findByName(String name);
}
