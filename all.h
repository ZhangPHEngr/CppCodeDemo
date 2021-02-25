#pragma once

//头文件
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include<pthread.h>

//声明
namespace lambda_demo {
void test();
}

namespace pthread_demo {
void* threadFunc1(void* args);
void* threadFunc2(void* args);
void test();
}


