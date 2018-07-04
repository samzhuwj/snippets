// grab each of the lines in a string
#include <iostream>
#include <regex>

int main()
{
  std::string str3 = "Just some words\n" "and some more\r\n" "and more\n";
  std::regex reg3 ("[\r]?\n");
  std::string line = std::regex_replace(str3, reg3, " ");
  std::cout << line << "\n";

  return 0;
}
