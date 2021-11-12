package com.aespa.nextplace.controller;

import com.aespa.nextplace.model.response.ErrorResponse;
import com.aespa.nextplace.model.response.ListPlamonResponse;
import com.aespa.nextplace.model.response.PlamonResponse;
import com.aespa.nextplace.service.PlamonService;
import io.swagger.v3.oas.annotations.Operation;
import io.swagger.v3.oas.annotations.responses.ApiResponse;
import lombok.RequiredArgsConstructor;
import org.json.simple.parser.ParseException;
import org.springframework.http.HttpStatus;
import org.springframework.http.ResponseEntity;
import org.springframework.web.bind.annotation.*;

@RestController
@RequestMapping(value = "/plamon")
@RequiredArgsConstructor
public class PlamonController {
    private final PlamonService plamonService;

    @GetMapping("/all/{oauthUid}")
    @Operation(summary = "내 캐릭터 조회", description = "유저가 소유한 캐릭터 목록을 조회한다", responses = {
            @ApiResponse(responseCode = "200", description = "조회 성공")
    })
    public ResponseEntity<?> readAllPlamon(@PathVariable String oauthUid) {
        try {
            ListPlamonResponse list = plamonService.findAllByUser(oauthUid);

            return ResponseEntity.ok(list);
        } catch (IllegalArgumentException e) {      // 유저 정보 없음
            return ResponseEntity.status(HttpStatus.UNAUTHORIZED)
                    .body(new ErrorResponse(e.getMessage()));
        }
    }

    @PostMapping("/buy/{oauthUid}")
    @Operation(summary = "캐릭터 구매", description = "골드를 지불해서 새로운 캐릭터를 구매한다", responses = {
            @ApiResponse(responseCode = "200", description = "구매 성공"),
            @ApiResponse(responseCode = "400", description = "구매할 골드 부족"),
            @ApiResponse(responseCode = "401", description = "유저 정보 없음"),
            @ApiResponse(responseCode = "501", description = "서버에서 캐릭터를 얻을 수 없음")
    })
    public ResponseEntity<?> buyNewPlamonByGold(@PathVariable String oauthUid) throws ParseException {
        PlamonResponse response;

        try {
            response = plamonService.buyNewPlamonWithGold(oauthUid);
        } catch (IllegalArgumentException e) {      // 유저 정보 없음
            return ResponseEntity.status(HttpStatus.UNAUTHORIZED)
                    .body(new ErrorResponse(e.getMessage()));
        } catch (IllegalStateException e) {         // 골드 부족
            return ResponseEntity.status(HttpStatus.BAD_REQUEST)
                    .body(new ErrorResponse(e.getMessage()));
        } catch (UnsupportedOperationException e) {     // 서버에 캐릭터 없음
            return ResponseEntity.status(HttpStatus.NOT_IMPLEMENTED)
                    .body(new ErrorResponse(e.getMessage()));
        }

        return ResponseEntity.ok(response);
    }
}
