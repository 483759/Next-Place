package com.aespa.nextplace.model.entity;

import javax.persistence.*;

@Entity
public class BaseAddress {
    @Id
    @GeneratedValue
    @Column(name = "baseaddress_id")
    Long id;

    @ManyToOne(fetch = FetchType.LAZY)
    @JoinColumn(name = "city_id", referencedColumnName = "city_id")
    City city;

    @Column(name = "baseaddress_gugun")
    String gugun;

    @Column(name = "baseaddress_dong")
    String dong;
}
