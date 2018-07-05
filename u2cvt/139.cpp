// back reference substitutions
// grab the URL and then provide the following output
#include <iostream>
#include <regex>

int main()
{
  std::string str4 = "https://www.youtube.com " "http://www.google.com";
  std::regex reg4 ("(https?://([\\w.]+))");
  std::string res4;
  std::regex_replace(std::back_inserter(res4), str4.begin(), str4.end(), reg4, "<a href='$1'>$2</a>\n");
  std::cout << res4 << "\n";

  return 0;
}
