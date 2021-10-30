package com.aespa.nextplace.model.entity;

import javax.persistence.*;

@Entity
public class Spot {
    @Id
    @GeneratedValue
    @Column(name = "spot_id")
    Long id;

    @Column(name = "spot_name")
    String name;

    @Column(name = "spot_type")
    @Enumerated(EnumType.STRING)
    SpotType type;

    @Column(name = "spot_infor")
    String information;

    @Column(name = "spot_detail")
    String detail;

    @Column(name = "spot_random")
    boolean isRandom;

    @ManyToOne(fetch = FetchType.LAZY)
    @JoinColumn(name = "baseaddress_id", referencedColumnName = "baseaddress_id")
    BaseAddress baseAddress;

    @Column(name = "spot_lat")
    float lat;

    @Column(name = "spot_lng")
    float lng;

    @Column(name = "spot_exp")
    int exp;
}
