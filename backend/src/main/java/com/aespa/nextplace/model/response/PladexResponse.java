package com.aespa.nextplace.model.response;

import com.aespa.nextplace.model.entity.Pladex;
import com.aespa.nextplace.model.entity.PlamonRank;
import lombok.Getter;

@Getter
public class PladexResponse {
    private Long id;
    private String name;
    private String information;
    private PlamonRank rank;

    public PladexResponse(Pladex pladex) {
        this.id = pladex.getId();
        this.name = pladex.getName();
        this.information = pladex.getInformation();
        this.rank = pladex.getRank();
    }
}
