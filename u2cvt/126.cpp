// matches zero or more of what proceeds it
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
  std::string str2 = "doctor doctors doctor's";
  std::regex reg2 ("([doctor]+['s]{0,2})");
  PrintMatches(str2, reg2);

  return 0;
}
