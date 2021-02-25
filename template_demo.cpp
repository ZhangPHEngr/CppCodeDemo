#include "template_demo.h"

#include <iostream>

template <typename T>
T add(T& a, T& b) {
  T c = a + b;
  return c;
}

namespace template_demo {
int test() {
  int a = 6;
  int b = 4;
  std::cout << add(a, b) << std::endl;
  return 0;
}
}  // namespace template_demo
