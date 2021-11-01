package com.aespa.nextplace.model.entity;

import javax.persistence.*;

@Entity
public class Spot {
    @Id
    @GeneratedValue
    @Column(name = "spot_id")
    private Long id;

    @Column(name = "spot_name")
    private String name;

    @Column(name = "spot_type")
    @Enumerated(EnumType.STRING)
    private SpotType type;

    @Column(name = "spot_infor")
    private String information;

    @Column(name = "spot_detail")
    private String detail;

    @Column(name = "spot_random")
    private boolean isRandom;

    @ManyToOne(fetch = FetchType.LAZY)
    @JoinColumn(name = "baseaddress_id", referencedColumnName = "baseaddress_id")
    private BaseAddress baseAddress;

    @Column(name = "spot_lat")
    private float lat;

    @Column(name = "spot_lng")
    private float lng;

    @Column(name = "spot_exp")
    private int exp;
}
