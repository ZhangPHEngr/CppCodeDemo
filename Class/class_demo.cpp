#include "class_demo.h"

#include <iostream>

using namespace std;

Person::Person() { cout << "实例化对象" << endl; }

Person::Person(int age) {
  this->age = age;
  cout << "实例化对象(有参)" << endl;
}

Person::~Person() { cout << "销毁实例化对象" << endl; }
void Person::setAge(int age) { this->age = age; }
int Person::getAge() { return this->age; }

void Person::func() { cout << "类内声明，类外定义函数" << endl; }
void Person::operator+(const Person &p) { this->age += p.age; }

namespace class_demo {
int test() {
  Person s1(20);
  // s1->setAge(10);
  cout << s1.getAge() << endl;
  s1.func();
  Person s2(30);
  s2.operator+(s1);
  cout << s2.getAge() << endl;
  return 0;
}
}  // namespace class_demo
