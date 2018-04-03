#include <iostream>
#include <vector>

const int MAX = 100;

int coinWays(int amt, std::vector<int>& coins)
{
  std::vector<int> dp(MAX, 0);
  int n = coins.size();
  dp[0] = 1;
  for (int j = 0; j < n; ++j)
    for (int i = 1; i <= amt; ++i)
      if (i - coins[j] >= 0)
        dp[i] += dp[i - coins[j]];

  return dp[amt];
}

int main()
{
  std::vector<int> coins = {1, 2, 5};
  int amount = 6;
  std::cout << coinWays(amount, coins) << "\n";
  return 0;
}
