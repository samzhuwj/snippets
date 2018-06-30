// pass a function into a function
#include <iostream>

double MultBy2(double num);
double DoMath(std::function<double(double)> func, double num);

int main()
{
  auto times2 = MultBy2;
  std::cout << "6 * 2 = " << DoMath(times2, 6) << "\n";

  return 0;
}

double MultBy2(double num)
{
  return num * 2;
}

double DoMath(std::function<double(double)> func, double num)
{
  return func(num);
}
