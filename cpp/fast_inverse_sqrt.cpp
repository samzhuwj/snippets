#include <iostream>

double fastInverseSqrt(double x)
{
  float xhalf = 0.5f * x;
  int i = *(int*)&x;
  i = 0x5f375a86 - (i >> 1);
  x = *(float*)&i;
  x = x * (1.5f - xhalf * x * x);
  return x;
}

int main()
{
  double input;
  std::cin >> input;
  std::cout << fastInverseSqrt(input) << std::endl;
  return 0;
}
