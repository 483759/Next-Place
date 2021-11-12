package com.aespa.nextplace.model.response;

import com.aespa.nextplace.model.entity.Plamon;
import lombok.Getter;

import java.util.ArrayList;
import java.util.List;

@Getter
public class ListPlamonResponse {
    private List<PlamonResponse> plamonList = new ArrayList<>();

    public ListPlamonResponse(List<Plamon> plamonList, boolean ownFlag) {
        concatList(plamonList, ownFlag);
    }

    public void concatList(List<Plamon> plamonList, boolean ownFlag) {
        for(var plamon: plamonList) {
            this.plamonList.add(new PlamonResponse(plamon, ownFlag));
        }
    }
}
