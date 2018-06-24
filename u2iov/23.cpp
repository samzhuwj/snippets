#include <iostream>

using namespace std;

int main()
{
  string yourName;
  cout << "What is your name? ";
  getline(cin, yourName);

  string wholeName = yourName.assign(yourName);
  string firstName = wholeName.assign(wholeName, 0, 5);
	cout << firstName << endl;

  return 0;
}
