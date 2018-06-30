// store and load functions in a vector
#include <iostream>
#include <vector>

double MultBy2(double num);
double MultBy3(double num);

int main()
{
  std::vector<std::function<double(double)>> funcs (2);
  funcs[0] = MultBy2;
  funcs[1] = MultBy3;
  std::cout << "2 * 10 = " << funcs[0](10) << "\n";
  std::cout << "3 * 17 = " << funcs[1](17) << "\n";

  return 0;
}

double MultBy2(double num)
{
  return num * 2;
}

double MultBy3(double num)
{
  return num * 3;
}
