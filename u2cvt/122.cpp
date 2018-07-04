// match whitespace
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
  std::string str12 = "Toshio Muramatsu";
  std::regex reg12("\\w{2,20}\\s\\w{2,20}");
  PrintMatches2(str12, reg12);

  return 0;
}
