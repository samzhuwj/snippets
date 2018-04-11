#include <string>
#include <iostream>
#include <cstring>
using namespace std;

int longestCommonSubString(string s1, string s2)
{
  int T[600][600];
  memset(T, 0, sizeof(T));
  int maximum = 0;

  for (int i = 1; i <= (int)s1.length(); i++)
  {
    for (int j = 1; j <= (int)s2.length(); j++)
      if (s1[i - 1] == s2[j - 1])
      {
        T[i][j] = T[i - 1][j - 1] + 1;
        if (maximum < T[i][j])
          maximum = T[i][j];
      }
  }
  return maximum;
}

int main()
{
  string s1, s2;
  //standard input stream, cin >> s1 >> s2;
  s1 = "abcdedwwop";
  s2 = "abeeedcedwcdedop";
  int maximum = longestCommonSubString(s1, s2);
  cout << "Length of longest substring = ";
  cout << maximum << "\n"; // "cded" -- length = 4
}
