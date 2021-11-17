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
@Getter
@NoArgsConstructor(access = AccessLevel.PROTECTED)
@Table(name="baseaddress")
public class BaseAddress {
    @Id
    @GeneratedValue
    @Column(name = "baseaddress_id")
    private Long id; 
    
    @Column(name = "baseaddress_city")
    private String city;
    
    @Column(name = "baseaddress_gugun")
    private String gugun;

    @Column(name = "baseaddress_dong")
    private String dong;    
    
    public BaseAddress(long id,String city, String gugun, String dong) {
    	this.id = id;
    	this.city = city;
    	this.gugun = gugun;
    	this.dong = dong;
    }
    
}
