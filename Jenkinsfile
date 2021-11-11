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
        stage('Docker build') {
            agent any
            steps {
                    mattermostSend (
                            color: "#2A42EE", 
                            message: "Build STARTED: ${env.JOB_NAME} #${env.BUILD_NUMBER} (<${env.BUILD_URL}|Link to build>)"
                    )
                script{
                    try{
                        sh 'sudo chmod -R +x+w backend'
                        sh 'sudo ./backend/gradlew clean build -p backend'
                        sh 'sudo docker build -t $PROJECT:latest .'
                    } catch(e){
                        mattermostSend (
                                    color: "danger", 
                                    message: "Build FAILED: ${env.JOB_NAME} #${env.BUILD_NUMBER} (<${env.BUILD_URL}|Link to build>)"
                                )
                    }
                }
            }
        }
        stage('Docker run') {
            agent any
            steps {
                
                script {
                    try {
                        sh 'sudo docker-compose -f /home/ubuntu/docker-compose.yml down'
                        sh 'sudo docker-compose -f /home/ubuntu/docker-compose.yml up -d'
                    } catch(e) {
                        currentBuild.result = "FAILURE"
                    } finally {
                        if(currentBuild.result == "FAILURE") {
                            mattermostSend (
                                color: "danger", 
                                message: "Build FAILED: ${env.JOB_NAME} #${env.BUILD_NUMBER} (<${env.BUILD_URL}|Link to build>)"
                            )
                        } else {
                            mattermostSend (
                                color: "good", 
                                message: "Build SUCCESS: ${env.JOB_NAME} #${env.BUILD_NUMBER} (<${env.BUILD_URL}|Link to build>)"
                            )
                        }                            
                    }           
                }
                

            }
        }
    }
}