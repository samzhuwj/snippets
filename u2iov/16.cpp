#include <iostream>

using namespace std;

int main()
{
  string numberGuessed;
	int intNumberGuessed = 0;

	do {
	    cout << "Guess between 1 and 10: ";

	    getline (cin,numberGuessed);

	    intNumberGuessed = stoi(numberGuessed);
	    cout << intNumberGuessed << endl;
	} while (intNumberGuessed != 4);

	cout << "You Win" << endl;

  return 0;
}
