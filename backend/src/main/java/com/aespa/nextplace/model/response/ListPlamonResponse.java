package com.aespa.nextplace.model.response;

import com.aespa.nextplace.model.entity.Plamon;
import lombok.Getter;

import java.util.ArrayList;
import java.util.List;

@Getter
public class ListPlamonResponse {
    private List<PlamonResponse> plamonList;

    public ListPlamonResponse(List<Plamon> plamonList) {
        this.plamonList = new ArrayList<>();
        for(var plamon: plamonList) {
            this.plamonList.add(new PlamonResponse(plamon));
        }
    }
}
