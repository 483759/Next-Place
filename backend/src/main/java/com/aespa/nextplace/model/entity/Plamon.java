package com.aespa.nextplace.model.entity;

import lombok.*;

import javax.persistence.*;

@Entity
@Getter
@Builder
@AllArgsConstructor
@NoArgsConstructor(access = AccessLevel.PROTECTED)
public class Plamon {
    @Id
    @GeneratedValue
    @Column(name = "plamon_id")
    private Long id;

    @Column(name = "plamon_level")
    private int level;

    @Column(name = "plamon_exp")
    private int exp;

    @Column(name = "plamon_nickname")
    private String nickname;

    @Column(name = "plamon_main")
    private boolean isMain;

    @ManyToOne(fetch = FetchType.LAZY)
    @JoinColumn(name = "pladex_id", referencedColumnName = "pladex_id")
    private Pladex pladex;

    @ManyToOne(fetch = FetchType.LAZY)
    @JoinColumn(name = "user_id", referencedColumnName = "user_id")
    private User user;
}
