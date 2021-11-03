package com.aespa.nextplace.model.entity;

import lombok.*;

import javax.persistence.*;

@Entity
@Getter
@Builder
@NoArgsConstructor(access = AccessLevel.PROTECTED)
@AllArgsConstructor
public class Pladex {
    @Id
    @GeneratedValue
    @Column(name = "pladex_id")
    private Long id;

    @Column(name = "pladex_name")
    private String name;

    @Column(name = "pladex_infor")
    private String information;

    @Column(name = "pladex_rank")
    @Enumerated(EnumType.STRING)
    private PlamonRank rank;
}
