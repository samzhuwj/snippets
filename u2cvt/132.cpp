// grab everything from the start to the @
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
  std::string str8 = "Match everything up to @";
  std::regex reg8 ("(^.*[^@])");
  PrintMatches(str8, reg8);

  return 0;
}
