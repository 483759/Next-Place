package com.aespa.nextplace.model.repository;

import com.aespa.nextplace.model.entity.Plamon;
import org.springframework.data.jpa.repository.JpaRepository;
import org.springframework.stereotype.Repository;

import java.util.List;

@Repository
public interface PlamonRepository extends JpaRepository<Plamon, Long> {
    List<Plamon> findAllByUserId(Long userId);
}
