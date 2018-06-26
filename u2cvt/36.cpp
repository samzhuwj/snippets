#include <iostream>

int main()
{
  std::string normalStr, secretStr = "";
  std::cout << "Enter your secret string: ";
  std::cin >> secretStr;

  for(int i = 0; i < secretStr.length(); i += 2){
    std::string sCharCode = "";
    sCharCode += secretStr[i];
    sCharCode += secretStr[i+1];

    int nCharCode = std::stoi(sCharCode);
    char chCharCode = nCharCode;
    normalStr += chCharCode;
  }

  std::cout << "Original : " << normalStr << "\n";  

  return 0;
}
