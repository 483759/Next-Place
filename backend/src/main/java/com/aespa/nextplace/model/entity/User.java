package com.aespa.nextplace.model.entity;

import javax.persistence.*;

@Entity
public class User {
    @Id @GeneratedValue
    @Column(name = "user_id")
    private Long id;

    @Column(name = "user_oauth_uid")
    private String oauthUID;

    @Column(name = "user_nickname")
    private String nickname;

    @Column(name = "user_role")
    @Enumerated(EnumType.STRING)
    private UserRole role;

    @Column(name = "user_gold")
    private int gold;

    @Column(name = "user_dalgona")
    private int dalgona;
}
