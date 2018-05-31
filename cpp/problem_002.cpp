#include <iostream>

int main()
{
  int p2 = 0;
  int p1 = 0;
  int current = 1;
  int sum = 0;

  while (current <= 4000000)
  {
    sum += (current % 2 == 0) ? current : 0;

    p2 = p1;
    p1 = current;
    current = p2 + p1;
  }

  std::cout << sum << "\n";
}
