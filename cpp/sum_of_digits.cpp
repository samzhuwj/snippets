#include <iostream>
using namespace std;

long long int sum_of_digits(long long int n)
{
  long long int sum = 0;
  while (n != 0)
  {
    sum += n % 10;
    n /= 10;
  }
  return sum;
}

int main()
{
  long long int n;
  cin >> n;
  cout << sum_of_digits(n) <<endl;

  return 0;
}
