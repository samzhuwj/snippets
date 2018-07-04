// match any character in [] plus what follows
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
  std::regex reg3 ("([crmfp]at)");
  PrintMatches2(str3,reg3);

  return 0;
}
