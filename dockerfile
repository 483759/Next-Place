FROM openjdk:11-jdk
EXPOSE 8080
ADD ./backend/build/libs/nextplace-*-SNAPSHOT.jar nextplace.jar
ADD ./backend/src/main/resources/application.yml application.yml
ENTRYPOINT ["java","-Djava.security.egd=file:/dev/./urandom --spring.config.location=file:///application.yml","-jar","nextplace.jar"]