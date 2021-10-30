package com.aespa.nextplace.model.entity;

import javax.persistence.*;

@Entity
public class Pladex {
    @Id
    @GeneratedValue
    @Column(name = "pladex_id")
    Long id;

    @Column(name = "pladex_name")
    String name;

    @Column(name = "pladex_infor")
    String information;

    @Column(name = "pladex_rank")
    @Enumerated(EnumType.STRING)
    PlamonRank rank;
}
