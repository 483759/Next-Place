package com.aespa.nextplace.model.request;

import io.swagger.v3.oas.annotations.media.Schema;
import lombok.*;

@Getter
@NoArgsConstructor(access = AccessLevel.PROTECTED)
@AllArgsConstructor
@ToString
public class PlamonLevelUpRequest {
    @Schema(description = "레벨업하려는 캐릭터의 ID")
    Long plamonId;

    @Schema(description = "사용하려는 달고나 개수")
    int dalgona;
}
