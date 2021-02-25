#include <iostream>

#include "Class/class_demo.h"
#include "File/ofs_demo.h"
#include "Math/div_demo.h"
#include "refer_demo.h"
#include "sizeof_demo.h"
#include "static_demo.h"
#include "struct_demo.h"
#include "template_demo.h"

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
//  class_demo::test();

//  lambda_demo::test();
  pthread_demo::test();
  cout << "******************End*******************" << endl;

  return 0;
}
