package com.aespa.nextplace.model.entity;

import javax.persistence.Column;
import javax.persistence.Entity;
import javax.persistence.EnumType;
import javax.persistence.Enumerated;
import javax.persistence.FetchType;
import javax.persistence.GeneratedValue;
import javax.persistence.Id;
import javax.persistence.JoinColumn;
import javax.persistence.ManyToOne;
import javax.persistence.Table;

import lombok.AccessLevel;
import lombok.Builder;
import lombok.Getter;
import lombok.NoArgsConstructor;

@Entity
@Getter
@NoArgsConstructor(access = AccessLevel.PROTECTED)
@Table(name="spot")
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
    
    public Spot(BaseAddress baseAddess,String name, float lat, float lng) {
    	this.baseAddress = baseAddess;
    	this.name = name;
    	this.lat = lat;
    	this.lng = lng;
    	
    }
    
    @Builder
    public Spot(long id, Spot spot, SpotType type, String information, String detail, boolean isRandom, int exp ) {    
    	this.baseAddress = spot.getBaseAddress();
    	this.name = spot.getName();
    	this.lat = spot.getLat();
    	this.lng = spot.getLng();    	
    	this.id = id;
    	this.type = type;
    	this.information = information;
    	this.detail =detail;
    	this.exp = exp;
    	this.isRandom = isRandom;
    }

    
    
    
    
}
