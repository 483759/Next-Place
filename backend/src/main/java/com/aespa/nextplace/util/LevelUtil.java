package com.aespa.nextplace.util;

import org.springframework.stereotype.Component;

@Component
public class LevelUtil {
    private final int EXPVALUE = 30;
    private final int MAXLEVEL = 15;
    private final int MAXEXP = 1490;

    public static LevelUtil getInstance() {
        return LevelUtil.LazyHolder.instance;
    }

    public int getExpValue(int dalgona) {
        return this.EXPVALUE * dalgona;
    }

    public int getMAXLEVEL() {
        return MAXLEVEL;
    }

    public int getMAXEXP() {
        return MAXEXP;
    }

    private static class LazyHolder {
        private static final LevelUtil instance = new LevelUtil();
    }
}
