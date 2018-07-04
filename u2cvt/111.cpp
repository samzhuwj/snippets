// print matches
#include <iostream>
#include <regex>

void PrintMatches(std::string str, std::regex reg)
{
  std::smatch matches;
  std::cout << std::boolalpha;

  while(std::regex_search(str, matches, reg)){
    std::cout << "Checked for Results : " << matches.ready() << "\n";
    std::cout << "Are there no matches : " << matches.empty() << "\n";
    std::cout << "Number of matches : " << matches.size() << "\n";
    std::cout << matches.str(1) << "\n";
    str = matches.suffix().str();
    std::cout << "\n";
  }
}

int main()
{
  std::string str = "The ape was at the apex";
  std::regex reg ("(ape[^ ]?)");
  PrintMatches(str,reg);

  return 0;
}
