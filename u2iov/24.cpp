#include <iostream>

using namespace std;

int main()
{
  string yourName;
  cout << "What is your name? ";
  getline(cin, yourName);

  int lastNameIndex = yourName.find("zhuwj", 0);
	cout << "Index for last name " << lastNameIndex << endl;

  return 0;
}
