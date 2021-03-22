#include "all.h"

#include <iostream>
using namespace std;

struct AA {
  int a;
  int b;
  struct AA* ptr1;
  struct AA* ptr2;
};

struct BB {
  int c;
  int d;
  AA* ptr1;
  AA* ptr2;
};

namespace struct_demo {

int test() {
  struct BB bb;
  bb.ptr1->a = 10;
  cout << sizeof(bb) << endl;

  return 0;
}
}  // namespace struct_demo
