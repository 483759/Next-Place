package com.aespa.nextplace.util;

import com.aespa.nextplace.model.entity.PlamonRank;
import org.springframework.stereotype.Component;

import java.util.Map;

@Component
public class PlamonRankUtil {

    private static final int GATCHA_PRICE = 100;
    private final Map<PlamonRank, Integer> gatchaProbability;
    private final Map<PlamonRank, Integer> salesPrice;

    private PlamonRankUtil() {
        this.gatchaProbability = Map.ofEntries(
                Map.entry(PlamonRank.N, 40),
                Map.entry(PlamonRank.R, 70),
                Map.entry(PlamonRank.SR, 90),
                Map.entry(PlamonRank.SSR, 100)
        );
        this.salesPrice = Map.ofEntries(
                Map.entry(PlamonRank.N, 1),
                Map.entry(PlamonRank.R, 2),
                Map.entry(PlamonRank.SR, 5),
                Map.entry(PlamonRank.SSR, 10)
        );
    }

    public static PlamonRankUtil getInstance() {
        return LazyHolder.instance;
    }

    public int getNumberOfRanks() {
        return this.gatchaProbability.size();
    }

    public int getGatchaPrice() {
        return this.GATCHA_PRICE;
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
