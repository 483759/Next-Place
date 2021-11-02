package com.aespa.nextplace.model.dto;

import com.aespa.nextplace.model.entity.Pladex;

public class PladexDtoAssembler {

    public static PladexDto convert(Pladex pladex) {
        return PladexDto.builder()
                .id(pladex.getId())
                .name(pladex.getName())
                .information(pladex.getInformation())
                .rank(pladex.getRank())
                .build();
    }
}
