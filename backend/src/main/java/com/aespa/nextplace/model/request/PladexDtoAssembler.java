package com.aespa.nextplace.model.request;

import com.aespa.nextplace.model.entity.Pladex;

public class PladexDtoAssembler {
    public static Pladex convertRequestToEntity(PladexRequest request) {
        return new Pladex(request.getName(), request.getInformation(), request.getRank());
    }
}
