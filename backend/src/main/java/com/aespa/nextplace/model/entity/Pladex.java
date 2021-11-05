package com.aespa.nextplace.model.entity;

import lombok.AccessLevel;
import lombok.Builder;
import lombok.Getter;
import lombok.NoArgsConstructor;
import org.springframework.util.Assert;

import javax.persistence.*;

@Entity
@Getter
@NoArgsConstructor(access = AccessLevel.PROTECTED)
public class Pladex {
    @Id
    @GeneratedValue(strategy = GenerationType.IDENTITY)
    @Column(name = "pladex_id")
    private Long id;

    @Column(name = "pladex_name")
    private String name;

    @Column(name = "pladex_infor")
    private String information;

    @Column(name = "pladex_rank")
    @Enumerated(EnumType.STRING)
    private PlamonRank rank;

    public Pladex(String name, String information, PlamonRank rank) {
        this.name = name;
        this.information = information;
        this.rank = rank;
    }

    @Builder
    public Pladex(Long id, Pladex pladex) {
        Assert.hasText(pladex.getName(), "Name must not be empty");
        Assert.hasText(pladex.getInformation(), "Information must not be empty");
        Assert.hasText(pladex.getRank().toString(), "Rank must not be empty");

        this.id = id;
        this.name = pladex.getName();
        this.information = pladex.getInformation();
        this.rank = pladex.getRank();
    }
}
