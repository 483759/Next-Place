package com.aespa.nextplace.model.entity;

import javax.persistence.*;

@Entity
public class Plamon {
    @Id
    @GeneratedValue
    @Column(name = "plamon_id")
    Long id;

    @Column(name = "plamon_level")
    int level;

    @Column(name = "plamon_exp")
    int exp;

    @Column(name = "plamon_nickname")
    String nickname;

    @Column(name = "plamon_main")
    boolean isMain;

    @ManyToOne(fetch = FetchType.LAZY)
    @JoinColumn(name = "pladex_id", referencedColumnName = "pladex_id")
    Pladex pladex;

    @ManyToOne(fetch = FetchType.LAZY)
    @JoinColumn(name = "user_id", referencedColumnName = "user_id")
    User user;
}
