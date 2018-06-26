#include <iostream>

int main()
{
  std::string normalStr, secretStr = "";
  std::cout << "Enter your string in uppercase: ";
  std::cin >> normalStr;

  for(char c: normalStr)
    secretStr += std::to_string((int)c);

  std::cout << "Secret : " << secretStr << "\n";

  return 0;
}
