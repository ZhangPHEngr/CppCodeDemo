#include <iostream>

#include "Class/class_demo.h"
#include "Math/div_demo.h"
#include "refer_demo.h"
#include "sizeof_demo.h"
#include "static_demo.h"
#include "struct_demo.h"
#include "all.h"

using namespace std;

int main() {
  cout << "****************CppCodeDemo***************" << endl;

//  refer_demo::test();
//  sizeof_demo::test();
//  static_demo::test();
//  struct_demo::test();
//  template_demo::test();
//  div_demo::test();
//  ofs_demo::test();
//  class_demo::testInherit();

//  lambda_demo::test();
//  pthread_demo::test();
//  virtualFunc_demo::InheriterClass tmp;tmp.test();
//  EigenDemo::test();
//  ofs_demo::test();
//  ptr_demo::test_unique();

//  string_demo::test();
  STL_demo::test_map();
  cout << "******************End*******************" << endl;

  return 0;
}
/**
new int 和 new int（）的区别
https://blog.csdn.net/zwz2011303359/article/details/80871050


 */
