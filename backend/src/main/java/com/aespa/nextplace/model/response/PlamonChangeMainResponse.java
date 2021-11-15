package com.aespa.nextplace.model.response;

import com.aespa.nextplace.model.entity.Plamon;
import lombok.Getter;

@Getter
public class PlamonChangeMainResponse {
    boolean isSuccess;
    PlamonResponse plamon;

    public PlamonChangeMainResponse(boolean isSuccess, Plamon plamon) {
        this.isSuccess = isSuccess;
        this.plamon = new PlamonResponse(plamon);
    }
}