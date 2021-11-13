package com.aespa.nextplace.util;

import org.springframework.stereotype.Component;

@Component
public class LevelUtil {
    private final int expValue = 30;

    public static LevelUtil getInstance() {
        return LevelUtil.LazyHolder.instance;
    }

    public int getExpValue(int dalgona) { return this.expValue * dalgona; }

    private static class LazyHolder {
        private static final LevelUtil instance = new LevelUtil();
    }
}
