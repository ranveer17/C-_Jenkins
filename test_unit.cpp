#include "acutest.hpp"
#include "util.hpp"

void test_add(void){
    TEST_CHECK_(add(10,10)==20,"add(%d,%d)==%d",40,75,(40+75));
}

void test_mun(void){
    TEST_CHECK_(mun(10,10)==100,"add(%d,%d)==%d",40,75,(40+75));
}


void test_sub(void){
    TEST_CHECK_(sub(10,10)==0,"add(%d,%d)==%d",40,75,(40+75));
}

void test_mod(void){
    TEST_CHECK_(mod(25,10)==5,"add(%d,%d)==%d",40,75,(40+75));
}


TEST_LIST ={
    {
        "int add(int,int);",test_add
        
    },
    {
        "int mun(int,int);",test_mun
    },
    {
        "int sub(int,int);",test_sub
       
    },
    {
         "int mod(int,int);",test_mod
    },
    {0}
};