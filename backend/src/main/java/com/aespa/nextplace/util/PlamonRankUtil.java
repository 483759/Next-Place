package com.aespa.nextplace.util;

import com.aespa.nextplace.model.entity.PlamonRank;
import com.google.common.collect.ImmutableMap;
import org.springframework.stereotype.Component;

import java.util.Map;

@Component
public class PlamonRankUtil {

    private final int gatchaPrice = 100;
    private final Map<PlamonRank, Integer> gatchaProbability;
    private final Map<PlamonRank, Integer> salesPrice;

    private PlamonRankUtil() {
        this.gatchaProbability = ImmutableMap.of(
                PlamonRank.N, 40,
                PlamonRank.R, 70,
                PlamonRank.SR, 90,
                PlamonRank.SSR, 100
        );
        this.salesPrice = ImmutableMap.of(
                PlamonRank.N, 1,
                PlamonRank.R, 2,
                PlamonRank.SR, 5,
                PlamonRank.SSR, 10
        );
    }

    public static PlamonRankUtil getInstance() {
        return LazyHolder.instance;
    }

    public int getNumberOfRanks() {
        return this.gatchaProbability.size();
    }

    public int getGatchaPrice() {
        return this.gatchaPrice;
    }


    public int getProbabilityOfRank(PlamonRank rank) {
        return this.gatchaProbability.get(rank);
    }

    public int getSalesPriceOfRankAndLevel(PlamonRank rank, int level) {
        return this.salesPrice.get(rank) * level;
    }

    private static class LazyHolder {
        private static final PlamonRankUtil instance = new PlamonRankUtil();
    }
}
