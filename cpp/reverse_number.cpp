#include <iostream>
using namespace std;

int reverse_number(int n)
{
  int ans = 0;
  while (n != 0)
  {
    ans *= 10;
    ans += n % 10;
    n /= 10;
  }
  return ans;
}

int main()
{
  int n;
  cin >> n;
  cout << reverse_number(n) <<endl;

  return 0;
}
