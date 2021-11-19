package com.aespa.nextplace.model.response;

import io.swagger.v3.oas.annotations.media.Schema;
import lombok.Getter;

import java.util.List;

@Getter
public class ListSellPlamonResponse {
    @Schema(description = "변화된 달고나 수")
    private int dalgona;

    @Schema(description = "보유한 캐릭터")
    private List<PlamonResponse> myPlamon;

    @Schema(description = "보유하지 않은 캐릭터")
    private ListPladexResponse notMyPlamon;

    public ListSellPlamonResponse(int dalgona, List<PlamonResponse> myPlamon, ListPladexResponse notMyPlamon) {
        this.dalgona = dalgona;
        this.myPlamon = myPlamon;
        this.notMyPlamon = notMyPlamon;
    }
}
