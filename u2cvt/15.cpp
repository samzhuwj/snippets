#include <iostream>

double AddNumbers(double num1, double num2);

int main()
{
  double num1, num2;

  std::cout << "Enter Num 1 : ";
  std::cin >> num1;
  std::cout << "Enter Num 2 : ";
  std::cin >> num2;

  printf("%.1f + %.1f = %.1f\n", num1, num2, AddNumbers(num1, num2));

  return 0;
}

double AddNumbers(double num1 = 0, double num2 = 0){
  return num1 + num2;
}
