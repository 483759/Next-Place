package com.aespa.nextplace.model.response;

import com.aespa.nextplace.model.entity.Plamon;
import io.swagger.v3.oas.annotations.media.Schema;
import lombok.Getter;

import java.util.ArrayList;
import java.util.List;

@Getter
public class ListPlamonResponse {
    @Schema(description = "플레몬 리스트")
    private List<PlamonResponse> plamonList = new ArrayList<>();

    public ListPlamonResponse(List<Plamon> plamonList) {
        for(var plamon: plamonList) {
            this.plamonList.add(new PlamonResponse(plamon));
        }
    }
}
