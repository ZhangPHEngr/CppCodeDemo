#include<iostream>
#include <cstring>
#include "all.h"

namespace string_demo {
using namespace std;





int devide(){
    //strtok 与 strsep 函数说明:
    //https://www.cnblogs.com/devilmaycry812839668/p/6353912.html
    //以上两个函数都会改变原字符串，所以最好先strcpy复制要被拆分的字符串

    string ss = "This is - www.runoob.com - website";
    string s = "-";
    char *token;

    //strtok
    /* 获取第一个子字符串 */
    token = strtok((char*)ss.data(), s.data());

    /* 继续获取其他的子字符串 */
    while( token != NULL ) {
        printf( "%s\n", token );

        token = strtok(NULL, s.data());
    }
    //strsep
    string ss2 = "This is - www.runoob.com - website";
    //token = strsep( s, ss2 );
//    while( token != NULL )
//    {
//        /* While there are tokens in "string" */
//        printf( " %s\n", token );
//        /* Get next token: */
//        token = strsep( s, ss2 );
//    }

}


int test(){

    //string 是个类， char是基础数据类型
    //https://www.cnblogs.com/Pillar/p/4206452.html
    //string -> const char *
    string s = "1234";
    const char* p;
    p = s.c_str();//等同于s.data();
    cout<<p<<endl;

    //string -> char *
    char* p1 = (char*)s.data();
    cout<<p1<<endl;

    //char* -> string
    char *p2 = "hello";//直接赋值
    string s2 = p2;
    cout<<p2<<endl;

    //const char* -> string
    const char *p3 = "hello";//直接赋值
    string s3 = p3;
    cout<<p3<<endl;

}

int joint(){

    char ss[256];
    int index = 20;
    snprintf(ss,256,"this is cam %d ",index);
    cout<<ss<<endl;

}

int toNum(){
    char* ptr;
    //int n = strtold("22",ptr);
}


}

