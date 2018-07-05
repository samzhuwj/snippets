// back reference
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
  std::string str1 = "The cat cat fell out the window";
  std::regex reg1 ("(\\b\\w+)\\s+\\1");
  PrintMatches(str1,reg1);

  return 0;
}
