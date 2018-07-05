// back reference substitutions
// surround all phone number area codes with ()
#include <iostream>
#include <regex>

int main()
{
  std::string str3 = "412-555-1212";
  std::regex reg3 ("([\\d]{3})-([\\d]{3}-[\\d]{4})");
  std::string res3;
  std::regex_replace(std::back_inserter(res3), str3.begin(), str3.end(), reg3, "($1)$2");
  std::cout << res3 << "\n";

  return 0;
}
