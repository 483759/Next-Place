package com.aespa.nextplace.model.entity;

import lombok.AccessLevel;
import lombok.AllArgsConstructor;
import lombok.Getter;
import lombok.NoArgsConstructor;

import javax.persistence.Column;
import javax.persistence.Entity;
import javax.persistence.Id;

@Entity
@Getter
@NoArgsConstructor(access = AccessLevel.PROTECTED)
@AllArgsConstructor
public class Experience {
    @Id
    @Column(name = "exp_level")
    private int level;
    @Column(name = "exp_accumulated")
    private int accumulated;
    @Column(name = "exp_next")
    private int next;
}
