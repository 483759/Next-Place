package com.aespa.nextplace.model.repository;

import com.aespa.nextplace.model.entity.Pladex;
import com.aespa.nextplace.model.entity.PlamonRank;
import com.aespa.nextplace.model.entity.User;
import org.springframework.data.jpa.repository.JpaRepository;
import org.springframework.data.jpa.repository.Query;
import org.springframework.data.repository.query.Param;
import org.springframework.stereotype.Repository;

import java.util.List;

@Repository
public interface PladexRepository extends JpaRepository<Pladex, Long> {

    Pladex findByName(String name);

    @Query("select d from Pladex d where d.rank = :rank and d.name <> '기본캐릭터'")
    List<Pladex> findAllByRank(@Param("rank") PlamonRank rank);

    @Query("select distinct d from Pladex d " +
            "left outer join Plamon m on m.pladex = d " +
            "where m.pladex is null or " +
            "m.pladex not in (select m.pladex from Plamon m where m.user = :user)")
    List<Pladex> findAllByUserWithNotMine(@Param("user") User user);

    @Query("select d from Pladex d where d.name = '기본캐릭터'")
    Pladex findDefaultPlamon();
}