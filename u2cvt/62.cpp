// use recursive lambda to calculate Fibonacci numbers
#include <iostream>

int main()
{
  std::function<int(int)> Fib = [&Fib](int n) {return n < 2 ? n : Fib(n-1) + Fib(n-2);};
  int num;
  std::cout << "Get a number: ";
  std::cin >> num;
  std::cout << "Fib " << num << ": " << Fib(num) << "\n";

  return 0;
}
