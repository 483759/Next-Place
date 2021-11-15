package com.aespa.nextplace.model.entity;

import com.aespa.nextplace.util.LevelUtil;
import lombok.AccessLevel;
import lombok.Builder;
import lombok.Getter;
import lombok.NoArgsConstructor;
import org.springframework.util.Assert;

import javax.persistence.*;

@Entity
@Getter
@NoArgsConstructor(access = AccessLevel.PROTECTED)
public class Plamon {
    @Id
    @GeneratedValue(strategy = GenerationType.IDENTITY)
    @Column(name = "plamon_id")
    private Long id;

    @Column(name = "plamon_level")
    private int level;

    @Column(name = "plamon_exp")
    private int exp;

    @Column(name = "plamon_nickname")
    private String nickname;

    @Column(name = "plamon_main")
    private boolean isMain;

    @ManyToOne(fetch = FetchType.LAZY)
    @JoinColumn(name = "pladex_id", referencedColumnName = "pladex_id")
    private Pladex pladex;

    @ManyToOne(fetch = FetchType.LAZY)
    @JoinColumn(name = "user_id", referencedColumnName = "user_id")
    private User user;

    public Plamon(Pladex pladex, User user) {
        Assert.notNull(pladex);
        Assert.notNull(user);

        this.level = 1;
        this.exp = 0;
        this.nickname = pladex.getName();
        this.isMain = false;

        this.pladex = pladex;
        this.user = user;
    }

    @Builder
    public Plamon(Long id, int level, int exp, String nickname, boolean isMain, Pladex pladex, User user) {
        this.id = id;
        this.level = level;
        this.exp = exp;
        this.nickname = nickname;
        this.isMain = isMain;
        this.pladex = pladex;
        this.user = user;
    }

    /**
     * @param newExp 새로운 누적 경험치
     * @param next 다음 레벨에 대한 정보
     * @implNote 레벨과 경험치를 갱신한다
     * */
    public void levelUp(int newExp, Experience next) {
        this.level = next.getLevel();
        this.exp = newExp - next.getAccumulated();

        LevelUtil levelUtil = LevelUtil.getInstance();
        if (this.level == levelUtil.getMAXLEVEL() && this.exp > levelUtil.getMAXEXP()) {
            this.exp = levelUtil.getMAXEXP();
        }
    }
}
