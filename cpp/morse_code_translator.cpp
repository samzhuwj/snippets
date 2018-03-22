#include <map>
#include <iostream>
using std::string;
using std::cin;
using std::cout;
using std::endl;

std::map<std::string,string> dictionary =
{ {"A", ".-"}, { "B", "-..."}, { "C", "-.-."}, { "D", "-.."}, { "E", "."}, { "F", "..-."},
  { "G", "--."}, { "H", "...."}, { "I", ".."}, { "J", ".---"}, { "K", "-.-"}, { "L", ".-.."},
  { "M", "--"}, { "N", "-."}, { "O", "---"}, { "P", ".--."}, { "Q", "--.-"}, { "R", ".-."},
  { "S", "..."}, { "T", "-"}, { "U", "..-"}, { "V", "...-"}, { "W", ".--"}, { "X", "-..-"},
  { "Y", "-.--"}, { "Z", "--.."}, { "1", ".----"}, { "2", "..---"}, { "3", "...--"},
  { "4", "....-"}, { "5", "....."}, { "6", "-...."}, { "7", "--..."}, { "8", "---.."},
  { "9", "----."}, { "0", "-----"}, { "}, {", "--..--"}, { ".", ".-.-.-"}, { "?", "..--.."},
  { "/", "-..-."}, { "-", "-....-"}, { "(", "-.--."}, { ")", "-.--.-"}};

string encrytp(string message)
{
  string encrypted = "";
  string to_string;

  for (char c : message)
  {
    if (c != ' ')
    {
      to_string = toupper(c);
      encrypted += dictionary.find(string(to_string))->second;
      encrypted += " ";
    }
    else
      encrypted += " ";
  }

  return encrypted;
}

string decrypt (string message)
{
  string morse_letter = "";
  string decrypted = "";

  for (char i : message)
  {
    if (i == ' ')
    {

      if (morse_letter.length() != 0)
      {
        for (auto o : dictionary)
          if (o.second == morse_letter)
          {
            decrypted += o.first;
            break;
          }
        morse_letter = "";
      }
      else
        decrypted += " ";
    }
    else
      morse_letter += i;
  }
  return decrypted;
}

int main()
{
  string msg = "TOKEN  CLASSIFICATION  FRAMEWORK";
  string morse_msg = "- --- -.- . -.   -.-. .-.. .- ... ... .. ..-. .. -.-. .- - .. --- -.   ..-. .-. .- -- . .-- --- .-. -.- ";
  cout << encrytp(msg) << endl << decrypt(morse_msg) << endl;
  return 0;
}
