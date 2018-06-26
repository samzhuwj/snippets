#include <iostream>

int main()
{
  std::cout << "a Code " << (int)'a' << "\n";
  std::cout << "z Code " << (int)'z' << "\n";
  std::cout << "A Code " << (int)'A' << "\n";
  std::cout << "Z Code " << (int)'Z' << "\n";

  std::string strNum = std::to_string(1+2);
  std::cout << "String " << strNum << "\n";

  return 0;
}
