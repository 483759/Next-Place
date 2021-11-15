package com.aespa.nextplace.model.repository;

import com.aespa.nextplace.model.entity.Experience;
import org.springframework.data.jpa.repository.JpaRepository;

public interface ExperienceRepository extends JpaRepository<Experience, Integer> {
    Experience findFirstByAccumulatedLessThanEqualOrderByLevelDesc(int accumulated);
    Experience findByLevel(int level);
}