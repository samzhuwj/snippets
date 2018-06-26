#include <iostream>
#include <vector>

int main()
{
  char cString[] = {'A', ' ', 'S', 't', 'r', 'i', 'n', 'g', '\0'};
  std::cout << cString << "\n";
  std::cout << "Array Size " << sizeof(cString) << "\n";

  std::vector<std::string> strVec(10);
  std::string str("I'm a string");
  strVec[0] = str;
  std::cout << str[0] << "\n";
  std::cout << str.at(0) << "\n";
  std::cout << str.front() << " " << str.back() << "\n";
  std::cout << "Length : " << str.length() << "\n";

  return 0;
}
