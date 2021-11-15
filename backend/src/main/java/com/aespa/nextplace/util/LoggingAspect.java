package com.aespa.nextplace.util;

import lombok.extern.slf4j.Slf4j;
import org.aspectj.lang.JoinPoint;
import org.aspectj.lang.annotation.Aspect;
import org.aspectj.lang.annotation.Before;
import org.springframework.stereotype.Component;

import java.util.Arrays;

@Component
@Aspect
@Slf4j
public class LoggingAspect {

    @Before(value = "within(com.aespa.nextplace.service.*)")
    public void logging(JoinPoint joinPoint) {
        log.info("실행 메서드 : {}, 전달 파라미터 : {}, 클래스: {}", joinPoint.getSignature().getName(), Arrays.toString(joinPoint.getArgs()), joinPoint.getSignature().getDeclaringTypeName());
    }
}
