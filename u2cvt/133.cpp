// grab everything from @ to the end of the line
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
  std::string str9 = "@ Get this string";
  std::regex reg9 ("([^@\\s].*$)");
  PrintMatches(str9, reg9);

  return 0;
}
