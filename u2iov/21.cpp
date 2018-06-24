#include <iostream>

using namespace std;

int main()
{
  string dogString = "dog";
	string catString = "cat";

	// Compare returns a 0 for a match, 1 if less than, -1 if greater than
	cout << dogString.compare(catString) << endl; // returns 1
	cout << dogString.compare(dogString) << endl; // returns 0
	cout << catString.compare(dogString) << endl; // returns -1

  return 0;
}
