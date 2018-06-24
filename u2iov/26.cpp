#include <iostream>

using namespace std;

int main()
{
  string yourName;
  cout << "What is your name? ";
  getline(cin, yourName);

  yourName.erase(7,8);
	cout << yourName << endl;

  return 0;
}
