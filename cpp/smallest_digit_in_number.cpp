#include <iostream>
using namespace std;

int smallest_digit(int n)
{
  int min = n % 10;
  n /= 10;
  while (n != 0)
  {
    if (min > n % 10)
      min = n % 10;
    n /= 10;
  }
  return min;
}

int main()
{
  int n;
  cin >> n;
  cout << smallest_digit(n) << endl;
  return 0;
}
