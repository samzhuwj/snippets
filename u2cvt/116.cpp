// replace matches with Owl in the output
#include <iostream>
#include <regex>

int main()
{
  std::string str6 = "Cat rat mat fat pat";
  std::regex reg6("[Cr]at");
  std::string owlFood = std::regex_replace(str6,reg6,"Owl");
  std::cout << owlFood << "\n";

  return 0;
}
