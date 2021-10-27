FROM openjdk:11-jdk
EXPOSE 8080
ADD ./Next-Place/backend/build/libs/nextplace-*-SNAPSHOT.jar nextplace.jar
ADD ./Next-Place/backend/src/main/resources/application.yml application.yml
ENTRYPOINT ["java","-Djava.security.egd=file:/dev/./urandom --spring.config.location=file:///application.yml","-jar","nextplace.jar"]