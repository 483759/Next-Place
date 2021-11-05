package com.aespa.nextplace.controller;

import com.aespa.nextplace.model.request.PladexRequest;
import com.aespa.nextplace.model.response.ListPladexResponse;
import com.aespa.nextplace.model.response.PladexResponse;
import com.aespa.nextplace.service.PladexService;
import io.swagger.v3.oas.annotations.Operation;
import io.swagger.v3.oas.annotations.Parameter;
import io.swagger.v3.oas.annotations.responses.ApiResponse;
import lombok.RequiredArgsConstructor;
import org.springframework.http.HttpStatus;
import org.springframework.http.ResponseEntity;
import org.springframework.web.bind.annotation.*;

@RestController
@RequestMapping(value = "/pladex")
@RequiredArgsConstructor
public class PladexController {
    private final PladexService pladexService;

    @GetMapping("")
    @Operation(summary = "전체 Pladex 반환", description = "전체 Pledex 리스트(고유 Plamon)을 반환한다", responses = {
            @ApiResponse(responseCode = "200", description = "조회 성공")
    })
    public ResponseEntity<ListPladexResponse> readAll() {
        ListPladexResponse pladexList = pladexService.findAll();

        return ResponseEntity.ok(pladexList);
    }

    @PostMapping("")
    @Operation(summary = "새로운 Pladex 등록", description = "새로운 Plamon을 도감에 등록한다", responses = {
            @ApiResponse(responseCode = "200", description = "이미 존재하는 Plamon"),
            @ApiResponse(responseCode = "201", description = "등록 성공")
    })
    public ResponseEntity<PladexResponse> addNewPladex(@RequestBody @Parameter(name = "새로운 Pladex 정보", required = true) PladexRequest request) {
        PladexResponse response = pladexService.savePladex(request);

        if(response == null) {
            return ResponseEntity.status(HttpStatus.OK).build();
        }

        return ResponseEntity.status(HttpStatus.CREATED)
                .body(response);
    }
}
