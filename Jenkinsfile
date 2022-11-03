pipeline {
    agent any

    stages {
//         stage('Clone sources') {
//             steps {
//                 git url: 'https://github.com/ranveer17/C-_Jenkins.git'
//             }
//         }

        stage('Build Stage') {
            steps {
                sh'make main'
                sh'./main'
                }
            }
        
        stage('Testing') {
            steps {
                sh'make test_unit'
                sh'./test_unit'

               }
        }
        

    }
post {
    always{
        sh'make clean'
        }
    }
}
