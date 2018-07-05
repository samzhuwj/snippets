// look ahead
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
  std::string str5 = " one two three four ";
  std::regex reg5 ("(\\w+(?=\\b))");
  PrintMatches(str5,reg5);


  return 0;
}
