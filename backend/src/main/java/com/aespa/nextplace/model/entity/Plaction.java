package com.aespa.nextplace.model.entity;

import javax.persistence.*;

@Entity
public class Plaction extends BaseTimeEntity{
    @Id
    @GeneratedValue
    @Column(name = "plaction_id")
    private Long id;

    @Column(name = "plaction_score")
    private int score;

    @ManyToOne(fetch = FetchType.LAZY)
    @JoinColumn(name = "user_id", referencedColumnName = "user_id")
    private User user;

    @ManyToOne(fetch = FetchType.LAZY)
    @JoinColumn(name = "spot_id", referencedColumnName = "spot_id")
    private Spot spot;
}
