package com.aespa.nextplace.model.request;

import com.aespa.nextplace.model.entity.Pladex;
import com.aespa.nextplace.model.entity.PlamonRank;

public class PladexDtoAssembler {
    public static Pladex convertRequestToEntity(PladexRequest request) {
        return new Pladex(request.getName(), request.getInformation(), PlamonRank.valueOf(request.getRank()));
    }
}
