package com.aespa.nextplace.model.entity;

import java.time.LocalDateTime;

import javax.persistence.Column;
import javax.persistence.Entity;
import javax.persistence.FetchType;
import javax.persistence.GeneratedValue;
import javax.persistence.GenerationType;
import javax.persistence.Id;
import javax.persistence.JoinColumn;
import javax.persistence.ManyToOne;
import javax.persistence.Table;

import lombok.AccessLevel;
import lombok.Builder;
import lombok.Getter;
import lombok.NoArgsConstructor;

@Entity
@Table(name="plaction")
@NoArgsConstructor(access = AccessLevel.PROTECTED)
@Getter
public class Plaction extends BaseTimeEntity{
    @Id
    @GeneratedValue(strategy = GenerationType.IDENTITY)
    @Column(name = "plaction_id")
    private Long id;

    @Column(name = "plaction_score")
    private int score;

    @ManyToOne(fetch = FetchType.LAZY)
    @JoinColumn(name = "user_id", referencedColumnName = "user_id")
    private User user;

    @ManyToOne(fetch = FetchType.LAZY)
    @JoinColumn(name = "spot_id", referencedColumnName = "spot_id")
    private Spot spot;
    
    @ManyToOne(fetch = FetchType.LAZY)
    @JoinColumn(name = "baseaddress_id", referencedColumnName = "baseaddress_id")
    private BaseAddress baseAddress;
    
    
    public Plaction(User user, Spot spot) {
    	this.user = user;
    	this.spot = spot;
    	this.baseAddress = spot.getBaseAddress();
    }
    
    @Builder
    public Plaction(Plaction plaction, long id, int score) {
    	this.user = plaction.getUser();
    	this.spot = plaction.getSpot();
    	this.baseAddress = plaction.getBaseAddress();
    	this.id = id;
    	this.score = score;    	
    }
    
    
    
    
    
}
