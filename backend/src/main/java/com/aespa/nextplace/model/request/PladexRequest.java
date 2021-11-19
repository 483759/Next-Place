package com.aespa.nextplace.model.request;

import io.swagger.v3.oas.annotations.media.Schema;
import lombok.*;

@Getter
@NoArgsConstructor(access = AccessLevel.PROTECTED)
@AllArgsConstructor
@ToString
public class PladexRequest {
    @Schema(example = "실험몬")
    private String name;

    @Schema(example = "어느 대학원생이 랩실에 혼자 남아 실험을 하다가 몬스터가 되었다는 소문이 있다")
    private String information;

    @Schema(example = "R")
    private String rank;
}
