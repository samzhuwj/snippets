#include <iostream>
using namespace std;

string caesarcipher(string text, int s)
{
  string result = "";

  for (size_t i = 0; i < text.length(); i++)
  {
    if (int(text[i]) == 32)
    {
      result += char(32);
      continue;
    }

    if (isupper(text[i]))
      result += char(int(text[i] + s - 65) % 26 + 65);

    else
      result += char(int(text[i] + s - 97) % 26 + 97);
  }

  return result;
}

int main()
{
  string text;
  cout << "\nEnter string to encrypt\n";
  getline(cin, text);
  int s;
  cout << "\nEnter no of shifts:\n";
  cin >> s;
  cout << "\nText : " << text;
  cout << "\nShift: " << s;
  text = caesarcipher(text, s);
  cout << "\nEncrypted: " << text;
  cout << "\nDecrypted: " << caesarcipher(text, 26 - s) << endl;
  return 0;
}
