package com.aespa.nextplace.util;

import org.springframework.stereotype.Component;

@Component
public class LevelUtil {
    public static final int EXP_VALUE = 30;
    public static final int MAX_LEVEL = 15;
    public static final int MAX_EXP = 1490;

    public static LevelUtil getInstance() {
        return LevelUtil.LazyHolder.instance;
    }

    public int getExpValue(int dalgona) {
        return this.EXP_VALUE * dalgona;
    }

    private static class LazyHolder {
        private static final LevelUtil instance = new LevelUtil();
    }
}
