#pragma once

//头文件
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include "Eigen/eigendemo.h"
#include <map>
#include <string>
//声明
namespace template_demo {
int test();
}

namespace lambda_demo {
void test();
}

namespace pthread_demo {
void* threadFunc1(void* args);
void* threadFunc2(void* args);
void test();
}


namespace virtualFunc_demo {

class BaseClass{
public:
    BaseClass(){};
    virtual ~BaseClass(){};
    virtual void testVirtual();
    void testNoVirtual();
};
class InheriterClass : public BaseClass{
public:
    InheriterClass(){};
    ~InheriterClass(){};
    void testVirtual();
    void testNoVirtual();
    void test();
};

}
//文件读写部分
namespace ofs_demo {
int test();
}
//指针部分
namespace ptr_demo {
int test_unique();
}
//string 部分
namespace string_demo {
int test();
}
//STL部分
namespace STL_demo {
int test_vector();
int test_map();
}
