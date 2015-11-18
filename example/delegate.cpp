#include <iostream>
#include "delegate.hpp"

struct Val {
  int x;
};

class A {
public:
  void foo() {
    std::cout << "foo()";
  }

  void set(Val& val) {
    val.x++;
  }
};

class B {
  A a;

public:
  DELEGATE(a, foo);
  DELEGATE(a, set);
};

int main()
{
  Val v{5};
  B b;
  b.foo(); // prints "foo"
  b.set(v);
  std::cout << v.x; // prints 6
}
