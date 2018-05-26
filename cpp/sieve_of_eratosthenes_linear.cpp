#include <iostream>
#include <vector>

std::vector<int> sieve_linear(int n)
{
  std::vector<int> min_divider(n + 1);
  std::vector<int> primes;

  for (int i = 2; i <= n; i++)
  {
    if (!min_divider[i])
    {
      min_divider[i] = i;
      primes.push_back(i);
    }

    for (int p : primes)
    {
      if (p > n / i)
        break;
      min_divider[p * i] = p;
    }
  }

  return primes;
}

int main()
{
  std::cout << "Enter the number:" << std::endl;
  int n;
  std::cin >> n;
  std::cout << "List of prime numbers less or equal than " << n << ":\n";
  for (int num : sieve_linear(n))
    std::cout << num << "\n";
  return 0;
}
