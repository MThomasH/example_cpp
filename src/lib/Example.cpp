#include "Example.h"
#include <iostream>

Example::Example(int x) : x(x) {}

void Example::exec() {
  std::cout << "Hello, World from Example!" << std::endl;
  std::cout << x << std::endl;
}
