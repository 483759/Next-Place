package com.aespa.nextplace.service;

import com.aespa.nextplace.model.entity.Plamon;
import com.aespa.nextplace.model.entity.User;
import com.aespa.nextplace.model.repository.PlamonRepository;
import com.aespa.nextplace.model.repository.UserRepository;
import com.aespa.nextplace.model.response.ListPlamonResponse;
import lombok.RequiredArgsConstructor;
import org.springframework.stereotype.Service;
import org.springframework.transaction.annotation.Transactional;

import java.util.List;

@Service
@RequiredArgsConstructor
@Transactional(readOnly = true)
public class PlamonServiceImpl implements PlamonService{
    private final PlamonRepository plamonRepo;
    private final UserRepository userRepo;

    @Override
    public ListPlamonResponse findAllByUser(String oauthUid) {
        User user = userRepo.findByOauthUid(oauthUid);
        List<Plamon> plamonList = plamonRepo.findAllByUser(user);

        return new ListPlamonResponse(plamonList);
    }
}
