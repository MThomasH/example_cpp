#include "Resolver.h"
#include <iostream>

bool Resolver::is(char c, std::vector<char> options) {
  for (const char item : options) {
    if (c == item) {
      return true;
    }
  }

  return false;
}

std::string Resolver::replace(std::string sIn, int i) {
  std::string test{""};
  unsigned short j{0};
  while (j < 3) {
    test += sIn.at(i + j);
    j++;
  }

  if ((test == "foo") or (test == "FOO")) {
    test = "3";
  }
  if ((test == "bar") or (test == "BAR")) {
    test = "5";
  }

  return test;
}

void Resolver::resolve(std::string sSen) {
  std::string sIn = sSen;
  std::string sOut{""};

  for (size_t i{0}; i < sIn.length(); ++i) {
    if (is(sIn.at(i), options)) {
      sOut += replace(sIn, i);
      i += 2;
    } else {
      sOut += sIn.at(i);
    }
  }

  std::cout << sIn << " : input" << std::endl;
  std::cout << "hellomyles5memy3orelse35"
            << " : expected result" << std::endl;
  std::cout << sOut << " : my result" << std::endl;
}
