// get just the numbers minus the area codes from the string
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
  std::string str10 = "206-709-3100 202-456-1111 212-832-2000";
  std::regex reg10 (".{3}-(.{8})");
  PrintMatches(str10, reg10);

  return 0;
}
