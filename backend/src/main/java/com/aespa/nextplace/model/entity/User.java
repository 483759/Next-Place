package com.aespa.nextplace.model.entity;

import lombok.AccessLevel;
import lombok.Builder;
import lombok.Getter;
import lombok.NoArgsConstructor;
import org.springframework.util.Assert;

import javax.persistence.*;

@Entity
@NoArgsConstructor(access = AccessLevel.PROTECTED)
@Getter
public class User {
    @Id
    @GeneratedValue(strategy = GenerationType.IDENTITY)
    @Column(name = "user_id")
    private Long id;

    @Column(name = "user_oauth_uid")
    private String oauthUid;

    @Column(name = "user_nickname")
    private String nickname;

    @Column(name = "user_role")
    @Enumerated(EnumType.STRING)
    private UserRole role;

    @Column(name = "user_gold")
    private int gold;

    @Column(name = "user_dalgona")
    private int dalgona;

    @Column(name = "user_avatar")
    private String avatar;

    public User(String oauthUid, String nickname) {
        this.nickname = nickname;
        this.oauthUid = oauthUid;
    }

    @Builder
    public User(long id, User user, UserRole role, int gold, int dalgona, String avatar) {
        Assert.hasText(user.getNickname(), "Nickname must not be empty");
        Assert.hasText(user.getOauthUid(), "OauthUid must not be empty");
        this.id = id;
        this.oauthUid = user.getOauthUid();
        this.nickname = user.getNickname();
        this.role = role;
        this.gold = gold;
        this.dalgona = dalgona;
        this.avatar = avatar;
    }

    public boolean hasEnoughGold(int gold) {
        return this.gold >= gold;
    }

    public boolean minusGold(int gold) {
        if (!hasEnoughGold(gold)) {
            return false;
        }
        this.gold -= gold;
        return true;
    }

    public void earnDalgona(int dalgona) {
        this.dalgona += dalgona;
    }

    public boolean hasEnoughDalgona(int dalgona) {
        return this.dalgona >= dalgona;
    }

    public boolean consumeDalgona(int dalgona) {
        if(!hasEnoughDalgona(dalgona)) {
            return false;
        }
        this.dalgona -= dalgona;
        return true;
    }
}
