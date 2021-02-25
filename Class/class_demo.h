#ifndef CLASS_DEMO_H
#define CLASS_DEMO_H
//类内声明，类外定义，声明在头文件，定义在cpp文件
class Person {
 public:
  Person();
  Person(int age);
  ~Person();

 public:
  int age;

 public:
  void setAge(int age);
  int getAge();
  void func();
  void operator+(const Person &p);
};

namespace class_demo {
int test();
}

#endif  // CLASS_DEMO_H
