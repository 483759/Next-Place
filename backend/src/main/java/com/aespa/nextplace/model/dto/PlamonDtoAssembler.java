package com.aespa.nextplace.model.dto;

import com.aespa.nextplace.model.entity.Plamon;
import com.aespa.nextplace.model.response.PlamonListResponseDto;

public class PlamonDtoAssembler {

    public static PlamonDto convert(Plamon plamon) {
        return PlamonDto.builder()
                .id(plamon.getId())
                .level(plamon.getLevel())
                .exp(plamon.getExp())
                .nickname(plamon.getNickname())
                .isMain(plamon.isMain())
                .pladex(PladexDtoAssembler.convert(plamon.getPladex()))
                .build();
    }

    public static PlamonListResponseDto plamonListResponseDto(Plamon plamon) {
        return PlamonListResponseDto.builder()
                .id(plamon.getId())
                .level(plamon.getLevel())
                .exp(plamon.getExp())
                .nickname(plamon.getNickname())
                .isMain(plamon.isMain())
                .pladex(PladexDtoAssembler.convert(plamon.getPladex()))
                .build();
    }
}
