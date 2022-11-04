pipeline {
    agent any

    stages {
        stage('Clone sources') {
            steps {
                checkout scm
            }
        }

        stage('Build Stage') {
            steps {
                sh'make main'
                sh'./main'
                }
            }
        
        stage('Testing') {
            steps {
                sh'make test_unit'
                sh'./test_unit -v'

               }
        }
        stage('Email Notification'){
            steps{
                mail bcc: '', body: ' repo is ', cc: '', from: '', replyTo: '', subject: 'Jenkins Job', to: 'ranveersingh7600454082@gmail.com'
            }
        }
        

    }
post {
    always{
        sh'make clean'
        }
    }
}