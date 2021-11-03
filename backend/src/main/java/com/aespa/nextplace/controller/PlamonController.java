package com.aespa.nextplace.controller;

import com.aespa.nextplace.model.response.ListPlamonResponse;
import com.aespa.nextplace.service.PlamonService;
import lombok.RequiredArgsConstructor;
import org.springframework.http.ResponseEntity;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PathVariable;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

@RestController
@RequestMapping(value = "/plamon")
@RequiredArgsConstructor
public class PlamonController {
    private final PlamonService plamonService;

    @GetMapping("/{oauthUid}")
    public ResponseEntity<ListPlamonResponse> readAllPlamon(@PathVariable String oauthUid) {
        ListPlamonResponse list = plamonService.findAllByUser(oauthUid);

        return ResponseEntity.ok(list);
    }
}
