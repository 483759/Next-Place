package com.aespa.nextplace.service;

import com.aespa.nextplace.model.repository.PladexRepository;
import com.aespa.nextplace.model.response.ListPladexResponse;
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

}
