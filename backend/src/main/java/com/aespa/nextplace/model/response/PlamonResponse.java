package com.aespa.nextplace.model.response;

import com.aespa.nextplace.model.entity.Plamon;

public class PlamonResponse {
    private Long id;
    private int level;
    private int exp;
    private String nickname;
    private boolean isMain;
    private PladexResponse pladex;

    public PlamonResponse(Plamon plamon) {
        this.id= plamon.getId();
        this.level= plamon.getLevel();
        this.exp= plamon.getExp();
        this.nickname= plamon.getNickname();
        this.isMain= plamon.isMain();
        this.pladex=new PladexResponse(plamon.getPladex());
    }
}
