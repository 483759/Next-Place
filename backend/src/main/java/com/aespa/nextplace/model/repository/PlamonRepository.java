package com.aespa.nextplace.model.repository;

import com.aespa.nextplace.model.entity.Plamon;
import com.aespa.nextplace.model.entity.User;
import org.springframework.data.jpa.repository.JpaRepository;
import org.springframework.data.jpa.repository.Query;
import org.springframework.data.repository.query.Param;
import org.springframework.stereotype.Repository;

import java.util.List;

@Repository
public interface PlamonRepository extends JpaRepository<Plamon, Long> {
    List<Plamon> findAllByUser(User user);

    Plamon findPlamonByUserAndId(User user, Long id);

    @Query("select m from Plamon m where m.user = :user and m.isMain = true")
    Plamon findPlamonByUserAndMainIsTrue(@Param("user") User user);

    @Query("select m from Plamon m where m.pladex.id = 16L")
    Plamon findDefaultPlamon();
}
