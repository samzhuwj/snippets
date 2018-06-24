#include <iostream>

using namespace std;

int main()
{
  int myAge = 39;
	char myGrade = 'A';

	cout << "Size of int " << sizeof(myAge) << endl;
	cout << "Size of char " << sizeof(myGrade) << endl;
  cout << "myAge is located at " << &myAge << endl;

  return 0;
}
