#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Bottom-up O(n^2) approach
int lis(int v[], int n)
{
  int dp[n], ans = 0;
  for (int i = 0; i < n; ++i)
  {
    dp[i] = 1;
    for (int j = 0; j < i; ++j)
      if (v[j] < v[i])
        dp[i] = max(dp[i], 1 + dp[j]);
    ans = max(ans, dp[i]);
  }
  return ans;
}

// Bottom-up O(n*log(n)) approach
int lis2(int v[], int n)
{
  vector<int> tail;
  for (int i = 0; i < n; ++i)
  {
    vector<int>::iterator it = lower_bound(tail.begin(), tail.end(), v[i]);
    if (it == tail.end())
      tail.push_back(v[i]);
    else
      *it = v[i];
  }
  return tail.size();
}

int main()
{
  int v[9] = {13, 25, 12, 36, 24, 53, 44, 63, 83};
  cout << lis(v, 9) << ", " << lis2(v, 9) << '\n';
  return 0;
}
