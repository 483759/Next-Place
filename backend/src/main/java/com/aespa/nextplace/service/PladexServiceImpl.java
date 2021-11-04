package com.aespa.nextplace.service;

import com.aespa.nextplace.model.entity.Pladex;
import com.aespa.nextplace.model.repository.PladexRepository;
import com.aespa.nextplace.model.response.ListPladexResponse;
import com.aespa.nextplace.model.response.PladexResponse;
import lombok.RequiredArgsConstructor;
import org.springframework.stereotype.Service;
import org.springframework.transaction.annotation.Transactional;

@Service
@RequiredArgsConstructor
@Transactional(readOnly = true)
public class PladexServiceImpl implements PladexService{

    private final PladexRepository pladexRepo;

    @Override
    public ListPladexResponse findAll() {
        return new ListPladexResponse(pladexRepo.findAll());
    }

    @Override
    public PladexResponse savePladex(Pladex pladex) {
        return null;
    }

}
