// match a followed by 1 or more characters
#include <iostream>
#include <regex>

void PrintMatches2(std::string str, std::regex reg)
{
  std::sregex_iterator currentMatch(str.begin(), str.end(), reg);
  std::sregex_iterator lastMatch;

  while(currentMatch != lastMatch){
    std::smatch match = *currentMatch;
    std::cout << match.str() << "\n";
    currentMatch++;
  }

  std::cout << std::endl;
}

int main()
{
  std::string str13 = "a as ape bug";
  std::regex reg13("a[a-z]+");
  PrintMatches2(str13, reg13);

  return 0;
}
