#include <iostream>

using namespace std;

int main()
{
  string yourName;
	cout << "What is your name? ";
	getline (cin,yourName);

	cout << "Hello " << yourName << "!" << endl;

  return 0;
}
