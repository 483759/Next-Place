package com.aespa.nextplace.model.entity;

import javax.persistence.Column;
import javax.persistence.Entity;
import javax.persistence.GeneratedValue;
import javax.persistence.Id;

@Entity
public class City {
    @Id
    @GeneratedValue
    @Column(name = "city_id")
    Long id;

    @Column(name = "city_name")
    String name;
}
