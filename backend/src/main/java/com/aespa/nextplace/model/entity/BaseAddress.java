package com.aespa.nextplace.model.entity;

import javax.persistence.Column;
import javax.persistence.Entity;
import javax.persistence.FetchType;
import javax.persistence.GeneratedValue;
import javax.persistence.Id;
import javax.persistence.JoinColumn;
import javax.persistence.ManyToOne;
import javax.persistence.Table;

import lombok.AccessLevel;
import lombok.Getter;
import lombok.NoArgsConstructor;

@Entity
@Getter
@NoArgsConstructor(access = AccessLevel.PROTECTED)
@Table(name="baseaddress")
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
    
    
    public BaseAddress(long id, City city, String gugun, String dong) {
    	this.id = id;
    	this.city =city;
    	this.gugun = gugun;
    	this.dong = dong;
    }
    
}
