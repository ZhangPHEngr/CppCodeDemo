#include<iostream>
#include <cstring>
#include "all.h"

namespace string_demo {
using namespace std;
int test(){

    //string -> const char *
    string s = "1234";
    const char* p;
    p = s.c_str();//等同于s.data();
    cout<<p<<endl;

    //string -> char *

}
}

