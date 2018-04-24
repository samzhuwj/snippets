#include <iostream>
#include <map>
using namespace std;
#define ll long long

map<ll, ll> m;

void twoSum(ll a[], ll sum, int n)
{
  for (int i = 0; i < n; i++)
    if (m[sum - a[i]])
    {
      cout << "The two numbers are ";
      cout << a[i] << " " << sum - a[i] << endl;
      return;
    }
}

int main()
{
  ll a[] = {2, 3, 5, 7, 11};
  int n = sizeof(a) / sizeof(ll);
  ll sum = 8;
  for (int i = 0; i < n; i++)
    m[a[i]] = 1;
  twoSum(a, sum, n);
  return 0;
}
