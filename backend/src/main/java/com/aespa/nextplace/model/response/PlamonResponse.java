package com.aespa.nextplace.model.response;

import com.aespa.nextplace.model.entity.Plamon;
import io.swagger.v3.oas.annotations.media.Schema;
import lombok.Getter;

@Getter
public class PlamonResponse {
    @Schema(example = "1")
    private Long id;

    @Schema(example = "1")
    private int level;

    @Schema(example = "10")
    private int exp;

    @Schema(example = "실험몬")
    private String nickname;

    @Schema(example = "true")
    private boolean isMain;

    private PladexResponse pladex;

    public PlamonResponse(Plamon plamon) {
        this.id = plamon.getId();
        this.level = plamon.getLevel();
        this.exp = plamon.getExp();
        this.nickname = plamon.getNickname();
        this.isMain = plamon.isMain();
        this.pladex = new PladexResponse(plamon.getPladex());
    }
}
