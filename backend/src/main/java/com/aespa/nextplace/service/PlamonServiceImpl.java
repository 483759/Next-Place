package com.aespa.nextplace.service;

import com.aespa.nextplace.model.entity.Plamon;
import com.aespa.nextplace.model.entity.User;
import com.aespa.nextplace.model.repository.PlamonRepository;
import com.aespa.nextplace.model.repository.UserRepository;
import com.aespa.nextplace.model.response.ListPlamonResponse;
import com.aespa.nextplace.model.response.PlamonResponse;
import lombok.RequiredArgsConstructor;
import org.springframework.stereotype.Service;
import org.springframework.transaction.annotation.Transactional;

import java.util.List;

@Service
@RequiredArgsConstructor
@Transactional(readOnly = true)
public class PlamonServiceImpl implements PlamonService {
    private final PlamonRepository plamonRepo;
    private final UserRepository userRepo;

    User findUserByOauthUid(String oauthUid) throws IllegalArgumentException {
        User user = userRepo.findByOauthUid(oauthUid);
        if (user == null) {
            throw new IllegalArgumentException("존재하지 않는 사용자입니다");
        }
        return user;
    }

    @Override
    public ListPlamonResponse findAllByUser(String oauthUid) {
        User user = findUserByOauthUid(oauthUid);
        List<Plamon> plamonList = plamonRepo.findAllByUser(user);

        return new ListPlamonResponse(plamonList);
    }

    @Override
    @Transactional
    public PlamonResponse buyNewPlamonWithGold(String oauthUid) {
        return null;
    }
}
