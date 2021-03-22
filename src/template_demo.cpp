#include "all.h"

/**
 * 函数模板：
 *      概念：便于函数复用
 *      格式：
 *          template <typename T>
 *              ...func body...
 *
 *              template用于声明一下为函数模板
 *              typename说明后续T为可变数据类型，可以是基本数据类型或类，typename可以用class替代
 */

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
