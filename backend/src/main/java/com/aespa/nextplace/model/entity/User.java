package com.aespa.nextplace.model.entity;

import javax.persistence.*;

@Entity
public class User {
    @Id @GeneratedValue
    @Column(name = "user_id")
    Long id;

    @Column(name = "user_oauth_uid")
    String oauthUID;

    @Column(name = "user_nickname")
    String nickname;

    @Column(name = "user_role")
    @Enumerated(EnumType.STRING)
    UserRole role;

    @Column(name = "user_gold")
    int gold;

    @Column(name = "user_dalgona")
    int dalgona;
}
