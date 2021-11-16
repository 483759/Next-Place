package com.aespa.nextplace.model.request;

import io.swagger.v3.oas.annotations.media.Schema;
import lombok.*;

@Getter
@NoArgsConstructor(access = AccessLevel.PROTECTED)
@AllArgsConstructor
@ToString
public class PlamonChangeMainRequest {
    @Schema(example = "메인 캐릭터로 바꾸려는 캐릭터의 ID")
    Long newMainId;
}