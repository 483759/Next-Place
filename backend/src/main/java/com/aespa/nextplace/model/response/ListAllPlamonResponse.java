package com.aespa.nextplace.model.response;

import com.aespa.nextplace.model.entity.Pladex;
import com.aespa.nextplace.model.entity.Plamon;
import io.swagger.v3.oas.annotations.media.Schema;
import lombok.Getter;

import java.util.ArrayList;
import java.util.List;

@Getter
public class ListAllPlamonResponse {
    @Schema(description = "보유한 캐릭터")
    List<PlamonResponse> myPlamon;
    @Schema(description = "보유하지 않은 캐릭터")
    ListPladexResponse notMyPlamon;

    public ListAllPlamonResponse(List<Plamon> myPlamon, List<Pladex> notMyPlamon) {
        this.myPlamon = new ArrayList<>();
        for(var plamon: myPlamon) {
            this.myPlamon.add(new PlamonResponse(plamon));
        }
        this.notMyPlamon = new ListPladexResponse(notMyPlamon);
    }
}
