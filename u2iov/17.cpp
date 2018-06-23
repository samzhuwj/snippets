#include <iostream>

using namespace std;

int main()
{
  char happyArray[6] = {'H', 'a', 'p', 'p', 'y', '\0'};
	// The C++ way of making a string
	string birthdayString = " Birthday";

	cout << happyArray + birthdayString << endl;

  return 0;
}
