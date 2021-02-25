#include "sizeof_demo.h"

#include <stdint.h>

#include <iostream>
#include <string>

using namespace std;

struct pp {
  int a;
  int b;
};

namespace sizeof_demo {
int test() {
  cout << sizeof(char) << endl;
  cout << sizeof(uint8_t) << endl;

  int* ss = new int[10];
  cout << ss << endl;

  return 0;
}
}  // namespace sizeof_demo
