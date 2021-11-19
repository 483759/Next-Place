package com.aespa.nextplace.model.response;

import com.aespa.nextplace.model.entity.Pladex;
import lombok.Getter;

import java.util.ArrayList;
import java.util.List;

@Getter
public class ListPladexResponse {
    private List<PladexResponse> pladexList;

    public ListPladexResponse(List<Pladex> pladexList) {
        this.pladexList = new ArrayList<>();
        for(var pladex: pladexList) {
            this.pladexList.add(new PladexResponse(pladex));
        }
    }
}
