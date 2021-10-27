pipeline {
    agent none

    environment {
      PROJECT = 'nextplace'
    }

    //기본적으로 체크아웃을 하지 않는 옵션
    options { skipDefaultCheckout(true) }
    stages {
        stage('Checkout repository') {
            agent any
            steps {
                checkout scm
            }
        }
        stage('Build and test') {
            agent {
                any {
                    image 'gradle:6.6.1-jdk11-openj9'
                    args '-v /root/.m2:/root/.m2'
                }
            }
            steps {
                sh 'gradle clean build -x test'
            }
        }
        stage('Docker build') {
            agent any
            steps {
                sh 'docker build -t $PROJECT:latest .'
            }
        }
        stage('Docker run') {
            agent any
            steps {
                sh 'docker ps -f name=$PROJECT -q | xargs --no-run-if-empty docker container stop'
                sh 'docker container ls -a -fname=sbor_dev -q | xargs -r docker container rm'
                sh 'docker images --no-trunc --all --quiet --filter="dangling=true" | xargs --no-run-if-empty docker rmi'
                sh 'docker run -d --name $PROJECT -p 8080:8080 $PROJECT:latest'
                sh 'docker-compose up'
            }
        }
    }
}