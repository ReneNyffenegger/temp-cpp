#include <iostream>

struct obj {
  int x;
  obj(int x_) :
  x(x_) {
    std::cout << "ctor obj, x = " << x << std::endl;
  }
};

void f(obj &o) {
  std::cout << "in f, o.x = " << o.x << std::endl;
  o.x=0;
}

int main() {
  f(obj(42));
}
