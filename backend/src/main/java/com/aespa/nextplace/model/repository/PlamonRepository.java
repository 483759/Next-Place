package com.aespa.nextplace.model.repository;

import com.aespa.nextplace.model.entity.Plamon;
import com.aespa.nextplace.model.entity.User;
import org.springframework.data.domain.Pageable;
import org.springframework.data.jpa.repository.JpaRepository;
import org.springframework.stereotype.Repository;

import java.util.List;

@Repository
public interface PlamonRepository extends JpaRepository<Plamon, Long> {
    List<Plamon> findAllByUser(User user);
    List<Plamon> findAllByUser(User user, Pageable pageable);
    Plamon findPlamonByUserAndId(User user, Long id);
}
