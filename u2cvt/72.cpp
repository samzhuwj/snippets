// created to store as a variable and to pass into other functions
#include <iostream>

double MultBy2(double num);

int main()
{
  auto times2 = MultBy2;
  std::cout << "5 * 2 = " << times2(5) << "\n";

  return 0;
}

double MultBy2(double num)
{
  return num * 2;
}
