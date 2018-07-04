// match any whitespace character
#include <iostream>
#include <regex>

int main()
{
  std::string str8 = "This is a\n multiline string\n"
    "that has many lines";
  std::regex reg8("\n");
  std::string noLBStr = std::regex_replace(str8,reg8," ");
  std::cout << noLBStr << "\n";

  return 0;
}
