#include <iostream>
typedef long long int ll;
using namespace std;

int a[1000005] = {0}; ll b[1000005] = {0};

void sieve(int n)
{
  ll s = 0;

  int i;
  for (i = 2; i * i <= n; i++)
  {
    if (a[i] == 0)
    {
      s += i;
      for (int j = 2 * i; j <= n; j += i)
        a[j] = 1;
    }
    b[i] = s;
  }

  int j;
  for (j = i; j <= n; j++)
  {
    if (a[j] == 0)
      s += j;
    b[j] = s;
  }
}

int main()
{
  sieve(1000000);
  int t;
  cin >> t;
  
  while (t--)
  {
    int n;
    cin >> n;
    cout << b[n] << endl;
  }
}
