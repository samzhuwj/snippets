// . matches any character, but if we want to search for a . we escape it with '\'
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
  std::string str7 = "F.B.I. I.R.S. CIA";
  std::regex reg7("([^ ]\..\..\.)");
  PrintMatches2(str7,reg7);

  return 0;
}
