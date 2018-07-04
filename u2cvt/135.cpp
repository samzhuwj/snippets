// get both numbers that follow 412 separately
#include <iostream>
#include <regex>

int main()
{
  std::string str11 = "My number is 904-285-3700";
  std::regex reg11 ("(.{3})-(.*)-(.*)");
  std::smatch matches;
  
  if(std::regex_search(str11,matches,reg11)){
    for(int i = 1; i < matches.size(); i++){
      std::cout << matches[i] << "\n";
    }
  }

  return 0;
}
