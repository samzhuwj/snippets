#include <iostream>

int Factorial(int number);

int main()
{
  std::cout << "Input a number to get its factorial: ";
  int canNumber;
  std::cin >> canNumber;
  std::cout << "Factorial of " << canNumber << " = " << Factorial(canNumber) << "\n";

  return 0;
}

int Factorial(int number)
{
  if(number == 1){
    return 1;
  }
  else {
    int result = number * Factorial(number - 1);
    return result;
  }
}
