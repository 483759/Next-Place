pipeline {
    agent none

    environment {
      REGISTRY = 'nextplace'
    }

    stages {
        stage('Test') {
            agent {
                docker {
                    image 'adoptopenjdk/openjdk11:alpine'
                    alwaysPull true
                }
            }
            steps {
                sh './gradlew test --no-daemon'
            }
        }

        stage('Build') {
            agent {
                docker {
                    image 'adoptopenjdk/openjdk11:alpine'
                    alwaysPull true
                }
            }
            steps {
                sh './gradlew --no-daemon build -x test'
            }
            post {
                success {
                    stash includes: '**/build/**', name: 'build'
                }
            }
        }

        stage('Docker image build & push') {
            agent any
            steps {
                unstash 'build'
                sh 'ls -al'
                sh 'docker login -u ubuntu'
                sh 'docker build -t $REGISTRY:latest .'
            }
            post {
                success {
                    sh 'docker image ls | grep ubuntu'
                    sh 'docker push $REGISTRY:latest'
                }
            }
        }

        stage('Clean docker image') {
            agent any
            steps {
                sh 'docker rmi $REGISTRY'
            }
        }
    }

    post {
      echo 'post'
    }
}