#include <iostream>

int main()
{
  std::string str("I'm a string");
  std::string str2(str);

  transform(str2.begin(), str2.end(), str2.begin(), ::toupper);
  std::cout << "Upper " << str2 << "\n";
  transform(str2.begin(), str2.end(), str2.begin(), ::tolower);
  std::cout << "Lower " << str2 << "\n";  

  return 0;
}
