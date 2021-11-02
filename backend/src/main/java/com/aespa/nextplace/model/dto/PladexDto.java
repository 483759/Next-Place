package com.aespa.nextplace.model.dto;

import com.aespa.nextplace.model.entity.PlamonRank;
import lombok.AllArgsConstructor;
import lombok.Builder;
import lombok.NoArgsConstructor;

@Builder
@NoArgsConstructor
@AllArgsConstructor
public class PladexDto {
    private Long id;
    private String name;
    private String information;
    private PlamonRank rank;
}
