#include "ofs_demo.h"

#include <fstream>
using namespace std;

namespace ofs_demo {
int test() {
  ofstream ofs;
  ofs.open("testFileOut.txt", ios::out);

  ofs << "张三" << endl;
  ofs << "李四" << endl;

  ofs.close();
  return 0;
}
}  // namespace ofs_demo
