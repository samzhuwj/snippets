#include <iostream>

using namespace std;

int main()
{
  string yourName;
  cout << "What is your name? ";
  getline(cin, yourName);

  yourName.insert(4, "Justin");
	cout << yourName << endl;

  return 0;
}
