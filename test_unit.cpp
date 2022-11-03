#include "acutest.hpp"
#include "util.hpp"

void test_add(void){
    TEST_CHECK_(add(10,10)==20,"add(%d,%d)==%d",40,75,(40+75));
}

TEST_LIST ={
    {
        "int add(int,int);",test_add
    },
    {0}
};