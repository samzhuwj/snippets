#include <iostream>
#include <vector>
#include <sstream>

int main(int argc, char* argv[])
{
  double dbNum1 = 0, dbNum2 = 0;
  std::string sCalc = "";
  std::vector<std::string> vecsCalc;

  std::cout << "Enter calculation (ex. 5 + 6): ";
  getline(std::cin, sCalc);

  std::stringstream ss(sCalc);
  std::string sIndivStr;
  char cSpace = ' ';

  while(getline(ss, sIndivStr, cSpace)){
    vecsCalc.push_back(sIndivStr);
  }

  dbNum1 = std::stoi(vecsCalc[0]);
  dbNum2 = std::stoi(vecsCalc[2]);
  std::string operation = vecsCalc[1];

  if (operation == "+"){
    printf("%.1f + %.1f = %.1f\n", dbNum1, dbNum2, (dbNum1 + dbNum2));
  }
  else if (operation == "-"){
    printf("%.1f - %.1f = %.1f\n", dbNum1, dbNum2, (dbNum1 - dbNum2));
  }
  else if (operation == "*"){
    printf("%.1f * %.1f = %.1f\n", dbNum1, dbNum2, (dbNum1 * dbNum2));
  }
  else if (operation == "/"){
    printf("%.1f / %.1f = %.1f\n", dbNum1, dbNum2, (dbNum1 / dbNum2));
  }
  else {
    std::cout << "Please enter only +, -, *, or /\n";
  }

  return 0;
}
