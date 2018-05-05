#include <iostream>
using namespace std;
long long phi(long long n)
{
  long long result = n;

  for (long long p = 2; p * p <= n; ++p)
    if (n % p == 0)
    {
      while (n % p == 0)
        n /= p;
      result -= result / p;
    }

  if (n > 1)
    result -= result / n;
  return result;
}

int main()
{
  long long n;
  cout << "Enter the value of N\n";
  cin >> n;
  for (long long i = 1; i <= n; i++)
    printf("phi(%lld) = %lld\n", i, phi(i));
  return 0;
}
