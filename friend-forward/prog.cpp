//
//       https://stackoverflow.com/questions/57164169/class-with-friend-rather-than-forward-declaration-which-compiler-is-correct
//
#include <iostream>

struct obj {
  friend int f(int);

  void m(int x) { std::cout << "f(" << x << ") = " << f(x) << std::endl; }
};

int main() {
  obj o;
  o.m(21);
}


int f(int x) {
  return 2*x;
}
