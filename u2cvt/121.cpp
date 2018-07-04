// match any single letter or number
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
  std::string str11 = "412-555-1212";
  std::regex reg11("\\w{3}-\\w{3}-\\w{4}");
  PrintMatches2(str11, reg11);

  return 0;
}
