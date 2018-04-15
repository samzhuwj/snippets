#include <iostream>
#include <string>
#include <vector>

int longestRepeatingSubsequence(std::string s)
{
  int n = s.size();
  std::vector<std::vector<int>>dp(n + 1, std::vector<int>(n + 1, 0));

  for (int x = 1; x <= n; ++x)
    for (int y = 1; y <= n; ++y)
    {
      if (s[x - 1] == s[y - 1] && x != y)
        dp[x][y] = 1 + dp[x - 1][y - 1];
      else
        dp[x][y] = std::max(dp[x - 1][y], dp[x][y - 1]);
    }

  return dp[n][n];
}

int main()
{
  std::string s = "hacktoberfestsefrisawesome";
  std::cout << "Length of longest repeating substring is " << longestRepeatingSubsequence(s)
            << std::endl;
  return 0;
}
