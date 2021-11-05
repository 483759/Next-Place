package com.aespa.nextplace.service;

import com.aespa.nextplace.model.request.PladexRequest;
import com.aespa.nextplace.model.response.ListPladexResponse;
import com.aespa.nextplace.model.response.PladexResponse;

public interface PladexService {
    ListPladexResponse findAll();
    PladexResponse savePladex(PladexRequest pladex);
}
