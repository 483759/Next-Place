package com.aespa.nextplace.controller;

import com.aespa.nextplace.model.response.ListPladexResponse;
import com.aespa.nextplace.service.PladexService;
import io.swagger.v3.oas.annotations.Operation;
import io.swagger.v3.oas.annotations.responses.ApiResponse;
import lombok.RequiredArgsConstructor;
import org.springframework.http.ResponseEntity;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

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
}
