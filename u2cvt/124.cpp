// match email addresses from a list
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
  std::string str14 = "db@aol.com m@.com @apple.com db@.com";
  std::regex reg14("[\\w._%+-]{1,20}@[\\w.-]{2,20}.[A-Za-z]{2,3}");
  PrintMatches2(str14, reg14);

  return 0;
}
