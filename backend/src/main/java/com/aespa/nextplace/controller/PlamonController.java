package com.aespa.nextplace.controller;

import com.aespa.nextplace.model.request.PlamonChangeMainRequest;
import com.aespa.nextplace.model.request.PlamonLevelUpRequest;
import com.aespa.nextplace.model.response.ErrorResponse;
import com.aespa.nextplace.model.response.ListAllPlamonResponse;
import com.aespa.nextplace.model.response.ListSellPlamonResponse;
import com.aespa.nextplace.model.response.PlamonResponse;
import com.aespa.nextplace.service.PlamonService;
import io.swagger.v3.oas.annotations.Operation;
import io.swagger.v3.oas.annotations.Parameter;
import io.swagger.v3.oas.annotations.media.Content;
import io.swagger.v3.oas.annotations.media.Schema;
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

    @GetMapping("")
    @Operation(summary = "내 캐릭터 조회", description = "유저가 소유한 캐릭터 목록을 조회한다", responses = {
            @ApiResponse(responseCode = "200", description = "조회 성공")
    })
    public ResponseEntity<?> readAllPlamon() {
        String oauthUid = "G-12345";
        try {
            ListAllPlamonResponse list = plamonService.findAllByUser(oauthUid);

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

    @PutMapping("/{plamonId}")
    @Operation(summary = "캐릭터 판매", description = "캐릭터를 팔아서 달고나를 얻는다", responses = {
            @ApiResponse(responseCode = "200", description = "구매 성공"),
            @ApiResponse(responseCode = "400", description = "구매할 골드 부족"),
            @ApiResponse(responseCode = "401", description = "유저 정보 없음")
    })
    public ResponseEntity<?> sellMyPlamon(@PathVariable Long plamonId) throws ParseException {
        String oauthUid = "G-12345";

        try {
            ListSellPlamonResponse response = plamonService.sell(oauthUid, plamonId);
            return ResponseEntity.ok(response);
        } catch (IllegalArgumentException e) {      // 유저 정보 없음
            return ResponseEntity.status(HttpStatus.UNAUTHORIZED)
                    .body(new ErrorResponse(e.getMessage()));
        } catch (IllegalStateException e) {         // 판매할 수 없음(소유X or 대표캐릭터)
            return ResponseEntity.status(HttpStatus.BAD_REQUEST)
                    .body(new ErrorResponse(e.getMessage()));
        }

    }

    @PostMapping("/levelup")
    @Operation(summary = "캐릭터 레벨 업", description = "달고나를 사용해서 캐릭터를 레벨 업 시킨다", responses = {
            @ApiResponse(responseCode = "200", description = "구매 성공"),
            @ApiResponse(responseCode = "400", description = "잘못 된 요청"),
            @ApiResponse(responseCode = "401", description = "유저 정보 없음")
    })
    public ResponseEntity<?> levelUpPlamonByDalgona(@RequestBody @Parameter(description = "레벨 업에 필요한 정보", required = true) PlamonLevelUpRequest request) throws ParseException {
        String oauthUid = "G-12345";

        try {
            PlamonResponse response = plamonService.levelUpWithDalgona(oauthUid, request);

            return ResponseEntity.ok(response);
        } catch (IllegalArgumentException e) {      // 유저 정보 없음
            return ResponseEntity.status(HttpStatus.UNAUTHORIZED)
                    .body(new ErrorResponse(e.getMessage()));
        } catch (IllegalStateException e) {         // 달고나 부족 or 존재하지 않는 캐릭터
            return ResponseEntity.status(HttpStatus.BAD_REQUEST)
                    .body(new ErrorResponse(e.getMessage()));
        }
    }

    @GetMapping("/main")
    @Operation(summary = "내 대표 캐릭터 조회", description = "유저의 대표 캐릭터를 조회한다", responses = {
            @ApiResponse(responseCode = "200", description = "조회 성공", content = @Content(schema = @Schema(implementation= PlamonResponse.class)))
    })
    public ResponseEntity<?> readMyMainPlamon() {
        String oauthUid = "G-12345";
        try {
            PlamonResponse myMainPlamon = plamonService.getMyMainPlamon(oauthUid);

            return ResponseEntity.ok(myMainPlamon);
        } catch (IllegalArgumentException e) {      // 유저 정보 없음
            return ResponseEntity.status(HttpStatus.UNAUTHORIZED)
                    .body(new ErrorResponse(e.getMessage()));
        }
    }

    @PatchMapping("/main")
    @Operation(summary = "내 대표 캐릭터 변경", description = "유저의 대표 캐릭터를 변경한다", responses = {
            @ApiResponse(responseCode = "200", description = "조회 성공", content = @Content(schema = @Schema(implementation= PlamonResponse.class))),
            @ApiResponse(responseCode = "400", description = "보유하지 않은 캐릭터", content = @Content(schema = @Schema(implementation= ErrorResponse.class))),
            @ApiResponse(responseCode = "401", description = "유저 정보 없음", content = @Content(schema = @Schema(implementation= ErrorResponse.class)))
    })
    public ResponseEntity<?> changeMyMainPlamon(@RequestBody @Parameter(description = "레벨 업에 필요한 정보", required = true) PlamonChangeMainRequest request) {
        String oauthUid = "G-12345";
        try {
            PlamonResponse response = plamonService.changeMainPlamon(oauthUid, request);

            return ResponseEntity.ok(response);
        } catch (IllegalArgumentException e) {      // 유저 정보 없음
            return ResponseEntity.status(HttpStatus.UNAUTHORIZED)
                    .body(new ErrorResponse(e.getMessage()));
        } catch (IllegalStateException e) {
            return ResponseEntity.status(HttpStatus.BAD_REQUEST)
                    .body(new ErrorResponse(e.getMessage()));
        }
    }
}
