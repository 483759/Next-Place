package com.aespa.nextplace.model.response;

import io.swagger.v3.oas.annotations.media.Schema;
import lombok.Getter;

@Getter
public class ErrorResponse {
    @Schema(example = "잘못 된 요청입니다")
    private String message;

    public ErrorResponse(String message) {
        this.message = message;
    }
}