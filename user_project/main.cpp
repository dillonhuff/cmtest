// Compile command: clang++ main.cpp -lsimple_lib

#include <iostream>
#include <test.h>

int main() {
  std::cout << simple_lib::return_num(4) << std::endl;
}
