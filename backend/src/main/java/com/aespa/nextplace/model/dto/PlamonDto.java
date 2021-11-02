package com.aespa.nextplace.model.dto;

import lombok.AllArgsConstructor;
import lombok.Builder;
import lombok.NoArgsConstructor;

@Builder
@NoArgsConstructor
@AllArgsConstructor
public class PlamonDto {
    private Long id;
    private int level;
    private int exp;
    private String nickname;
    private boolean isMain;
    private PladexDto pladex;
}
