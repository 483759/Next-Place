package com.aespa.nextplace.controller;

import com.aespa.nextplace.model.response.PlamonListResponseDto;
import com.aespa.nextplace.service.PlamonService;
import lombok.RequiredArgsConstructor;
import org.springframework.http.ResponseEntity;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PathVariable;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

import java.util.List;

@RestController
@RequestMapping(value = "/api/v1/plamon")
@RequiredArgsConstructor
public class PlamonController {
    private final PlamonService plamonService;

    @GetMapping("/all/{userId}")
    public ResponseEntity<List<PlamonListResponseDto>> readAllPlamon(@PathVariable Long userId) {
        List<PlamonListResponseDto> list = plamonService.findAllByUser(userId);

        return ResponseEntity.ok(list);
    }
}
