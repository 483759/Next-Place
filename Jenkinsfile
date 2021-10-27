pipeline{
  agent none

  stages{
    stage('example build'){
      steps{
        echo 'jenkins example'
      }
    }
  }
  post{
    always{
      echo 'post process'
    }
  }

}