package com.aespa.nextplace.model.entity;

import javax.persistence.*;

@Entity
public class BaseAddress {
    @Id
    @GeneratedValue
    @Column(name = "baseaddress_id")
    private Long id;

    @ManyToOne(fetch = FetchType.LAZY)
    @JoinColumn(name = "city_id", referencedColumnName = "city_id")
    private City city;

    @Column(name = "baseaddress_gugun")
    private String gugun;

    @Column(name = "baseaddress_dong")
    private String dong;
}
