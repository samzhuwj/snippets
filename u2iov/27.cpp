#include <iostream>

using namespace std;

int main()
{
  string yourName;
  cout << "What is your name? ";
  getline(cin, yourName);

  yourName.replace(7,12,"Maximus");
	cout << yourName << endl;

  return 0;
}
