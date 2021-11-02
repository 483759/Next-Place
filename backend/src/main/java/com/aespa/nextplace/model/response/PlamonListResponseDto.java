package com.aespa.nextplace.model.response;

import com.aespa.nextplace.model.dto.PladexDto;
import lombok.AllArgsConstructor;
import lombok.Builder;
import lombok.NoArgsConstructor;

@Builder
@NoArgsConstructor
@AllArgsConstructor
public class PlamonListResponseDto {
    private Long id;
    private int level;
    private int exp;
    private String nickname;
    private boolean isMain;
    private PladexDto pladex;
}
