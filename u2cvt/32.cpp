#include <iostream>

int main()
{
  std::string str("I'm a string");

  if(str.find("string") != std::string::npos)
    std::cout << "1st not " << str.find("string") << "\n";

  std::cout << "Substr " << str.substr(6,6) << "\n";

  reverse (str.begin(), str.end());
  std::cout << "Reverse " << str << "\n";  

  return 0;
}
