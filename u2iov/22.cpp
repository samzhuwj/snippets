#include <iostream>

using namespace std;

int main()
{
  string yourName;
  cout << "What is your name? ";
  getline(cin, yourName);

  string wholeName = yourName.assign(yourName);
	cout << wholeName << endl;

  return 0;
}
