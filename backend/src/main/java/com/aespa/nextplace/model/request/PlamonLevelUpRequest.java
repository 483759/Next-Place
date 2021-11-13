package com.aespa.nextplace.model.request;

import io.swagger.v3.oas.annotations.media.Schema;
import lombok.AccessLevel;
import lombok.AllArgsConstructor;
import lombok.Getter;
import lombok.NoArgsConstructor;

@Getter
@NoArgsConstructor(access = AccessLevel.PROTECTED)
@AllArgsConstructor
public class PlamonLevelUpRequest {
    @Schema(description = "레벨업하려는 캐릭터의 ID")
    Long plamonId;

    @Schema(description = "사용하려는 달고나 개수")
    int dalgona;
}
