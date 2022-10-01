#ifndef EXAMPLE_RESOLVER_H
#define EXAMPLE_RESOLVER_H

#include <string>
#include <vector>

class Resolver {

private:
  std::vector<char> options = {'f', 'F', 'b', 'B'};
  std::string replace(std::string sIn, int i);

public:
  bool is(char c, std::vector<char> options);
  void resolve(std::string sSen);
};

#endif
