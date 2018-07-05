// match for 5 digit zip codes or zip codes with 5 digits a dash and then 4 digits
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
  std::string str7 = "12345 12345-1234 1234 12346-333";
  std::regex reg7 ("(\\d{5}-\\d{4}|\\d{5}\\s)");
  PrintMatches(str7,reg7);

  return 0;
}
