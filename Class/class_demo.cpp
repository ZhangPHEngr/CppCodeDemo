#include "class_demo.h"

#include <iostream>
/**

实例化对象的方法：
   1. 实例化对象变量： ClassA A;//无参
                    ClassA B(10);//有参
   2. 实例化对象指针： ClassA *C = new C;//无参
                    ClassA *D = new D(10);//有参
           注意进行delete[] *A;
   3. 区别
        对象指针传递只传递地址，4/8字节；
        对象变量传递要传全部数据，浪费时间空间；
        C = D 后，C和D指向同一地址；
        A.成员变量、成员函数
        C->成员变量、成员函数



 */

using namespace std;

namespace class_demo {

Person::Person() { cout << "create Person" << endl; }

Person::Person(int age) {
  this->age = age;
  cout << "create Person(param)" << endl;
}

Person::~Person() { cout << "destroy Person" << endl; }
void Person::setAge(int age) { this->age = age; }
int Person::getAge() { return this->age; }

void Person::func() { cout << "class func" << endl; }
void Person::operator+(const Person &p) { this->age += p.age; }


class Tom : public Person
{
public:
    Tom() {cout<<" create Tom"<<endl;};
    void func(){
        cout << "run subclass func" << endl;
    }
};


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

int testInherit(){

    //多态，父类对象指针指向子类，此时运行子类函数
    Person * p(new Tom());// 父类构造-->子类构造-->父类指针指向子类
    p->func();

}


}  // namespace class_demo
