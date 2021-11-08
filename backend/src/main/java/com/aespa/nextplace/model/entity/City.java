package com.aespa.nextplace.model.entity;

import javax.persistence.Column;
import javax.persistence.Entity;
import javax.persistence.GeneratedValue;
import javax.persistence.Id;
import javax.persistence.Table;

import lombok.AccessLevel;
import lombok.Getter;
import lombok.NoArgsConstructor;

@Entity
@NoArgsConstructor(access = AccessLevel.PROTECTED)
@Getter
@Table(name="city")
public class City {
    @Id
    @GeneratedValue
    @Column(name = "city_id")
    private Long id;

    @Column(name = "city_name")
    private String name;
    
    
    public City(long id, String name) {
    	this.id = id;
    	this.name = name;
    }
    
    
    
    
    
}
