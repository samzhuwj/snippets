//Check if a number is a power of 2.
#include <iostream>
using namespace std;
typedef long long ll;

bool isPowerOf2(ll n)
{
  return n && (!(n & (n - 1)));
}

int main()
{
  ll n;
  cout << "Enter a number\n";
  cin >> n;
  if (isPowerOf2(n))
    cout << "is a power of 2" << endl;
  else
    cout << "isn't a power of 2" << endl;
  return 0;
}
