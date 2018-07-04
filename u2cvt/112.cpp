// match (+) 1 or more of anything not a space
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
  std::string str2 = "I picked the pickle";
  std::regex reg2 ("(pick([^ ]+)?)");
  PrintMatches2(str2,reg2);

  return 0;
}
