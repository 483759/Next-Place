package com.aespa.nextplace.model.request;

import com.aespa.nextplace.model.entity.Pladex;
import com.aespa.nextplace.model.entity.PlamonRank;

public class PladexDtoAssembler {
    private PladexDtoAssembler() {
        throw new IllegalStateException("Util 클래스는 인스턴스를 생성하지 않습니다");
    }

    public static Pladex convertRequestToEntity(PladexRequest request) {
        return new Pladex(request.getName(), request.getInformation(), PlamonRank.valueOf(request.getRank()));
    }
}
