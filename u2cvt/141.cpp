// conditional
#include <iostream>
#include <regex>

void PrintMatches(std::string str, std::regex reg)
{
  std::smatch matches;

  while(std::regex_search(str, matches, reg)){
    std::cout << matches.str(1) << "\n";
    str = matches.suffix().str();
  }

  std::cout << "\n";
}


int main()
{
  std::string str6 = "1. Dog 2. Cat 3. Turtle";
  std::regex reg6 ("\\d\\.\\s(Dog|Cat)");
  PrintMatches(str6,reg6);

  return 0;
}
