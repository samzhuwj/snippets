#include <iostream>
#include <string>
#include <cctype>

using namespace std;

std::string rotN(const std::string &text, int n)
{
  std::string output;

  for (auto c : text)
  {
    if (isalpha(c))
    {
      char sub = (c >= 65 && c <= 90) ? 'A' : 'a';
      c -= sub;
      c += n;
      c %= 26;
      output += (c + sub);
    }
    else
      output += c;
  }

  return output;
}

int main()
{
  cout << rotN("TOKEN CLASSIFICATION FRAMEWORK", 13) << endl; // Outputs "GBXRA PYNFFVSVPNGVBA SENZRJBEX"
  return 0;
}
