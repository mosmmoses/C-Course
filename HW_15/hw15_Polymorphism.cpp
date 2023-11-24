#include <iostream>
using namespace std;

class A {
public:

virtual const char* printClassName() {
  return "Class A";
}

};

class B : public A {
public:

virtual const char* printClassName() { return "Class B";}

};

class C : public B {
public:

virtual const char* printClassName() {return "Class C";}

};

void DemoPolymorphism(A &obj) {
  std::cout << obj.printClassName() << "\n";
}


int main() {
  A a;
  B b;
  C c;

  DemoPolymorphism(a);
  DemoPolymorphism(b);
  DemoPolymorphism(c);

  return 0;
}