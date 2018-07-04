// lazy matching, grab the smallest match bt <name> tags
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
  std::string str4 = "<name>Life On Mars</name>" "<name>Freaks and Geeks</name>";
  std::regex reg5 ("<name>(.*?)</name>");
  PrintMatches(str4, reg5);

  return 0;
}
