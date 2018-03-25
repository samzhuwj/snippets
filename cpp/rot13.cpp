#include <string>
#include <iostream>
#include <cctype>

std::string rot13(const std::string &text)
{
  std::string output;

  for (auto c : text)
  {
    if (isalpha(c))
    {
      char sub = (c >= 65 && c <= 90) ? 'A' : 'a';
      c -= sub;
      c += 13;
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
  std::cout << rot13("TOKEN CLASSIFICATION FRAMEWORK") << "\n";  // Outputs "GBXRA PYNFFVSVPNGVBA SENZRJBEX"
  return 0;
}
