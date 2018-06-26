#include <iostream>
#include <vector>
#include <sstream>

void SolveForX(std::string equation);
std::vector<std::string> StringToVector(std::string theString, char separator);

int main()
{
  std::cout << "Enter an equation to solve ";
  std::string equation = "";
  getline(std::cin, equation);
  SolveForX(equation);

  return 0;
}

void SolveForX(std::string equation)
{
  std::vector<std::string> vecEquation = StringToVector(equation, ' ');
  int num1 = std::stoi(vecEquation[2]);
  int num2 = std::stoi(vecEquation[4]);
  int xVal = num2 - num1;

  std::cout << "x = " << xVal << "\n";
}

std::vector<std::string> StringToVector(std::string theString, char separator)
{
  std::vector<std::string> vecsWords;
  std::stringstream ss(theString);
  std::string sIndivStr;

  while(getline(ss, sIndivStr, separator)){
    vecsWords.push_back(sIndivStr);
  }

  return vecsWords;
}
