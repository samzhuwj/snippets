// back reference substitutions
#include <iostream>
#include <regex>

int main()
{
  std::string str2 = "<a href='#'><b>The Link</b></a>";
  std::regex reg2 ("<b>(.*?)</b>");
  std::string result;
  std::regex_replace(std::back_inserter(result), str2.begin(), str2.end(), reg2, "$1");
  std::cout << result << "\n";

  return 0;
}
