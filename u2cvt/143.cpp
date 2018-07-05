// find all the phone numbers
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
  std::string str8 = "14125551212 4125551212 "
    "(412)5551212 412 555 1212 412-555-1212 "
    "1-412-555-1212";
  std::regex reg8 ("((1?)(-| ?)(\\()?(\\d{3})(\\)|-| |\\)-|\\) )?(\\d{3})(-| )?(\\d{4}|\\d{4}))");
  PrintMatches(str8,reg8);

  return 0;
}
