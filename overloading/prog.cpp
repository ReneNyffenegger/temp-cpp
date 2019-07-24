#include <iostream>
#include <windows.h>

struct obj {

    void call(DWORD         dw ) { std::cout << "call(DWORD        ): " << dw  << std::endl; }
    void call(int           i  ) { std::cout << "call(int          ): " << i   << std::endl; }
    void call(long          l  ) { std::cout << "call(long         ): " << l   << std::endl; }
    void call(unsigned int  ui ) { std::cout << "call(unsigned int ): " << ui  << std::endl; }
//  void call(long long int lli) { std::cout << "call(long long int): " << lli << std::endl; }
    void call(__int64       i64) { std::cout << "call(__int64      ): " << i64 << std::endl; }

};

int main() {

   obj o;

   o.call(42);

   LONG lng =33;
   o.call(lng);

}
