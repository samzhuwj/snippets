// use ^ to denote any character except for those in brackets
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
  std::string str3 = "Cat rat mat fat pat";
  std::regex reg5("[^Cr]at");
  PrintMatches2(str3,reg5);

  return 0;
}
