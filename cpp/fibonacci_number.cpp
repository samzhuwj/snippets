#include <iostream>
#include <vector>

unsigned long long bottom_up_fibonacci(unsigned short n)
{
  std::vector<unsigned long long> f(n + 1);
  f[0] = 0;
  f[1] = 1;

  for (int i = 2; i <= n; ++i)
    f[i] = f[i - 1] + f[i - 2];

  return f[n];
}

unsigned long long recursive_fibonacci(unsigned short n)
{
  if (n == 0)
    return 0;
  if (n == 1)
    return 1;
  return recursive_fibonacci(n - 1) + recursive_fibonacci(n - 2);
}

int main()
{
  unsigned short n = 45;
  std::cout << "Calculating fib(" << n << ") using bottom-up method: ";
  std::cout << bottom_up_fibonacci(n) << std::endl;
  std::cout << "Calculating fib(" << n << ") using recursive method: ";
  std::cout << recursive_fibonacci(n) << std::endl;
}
