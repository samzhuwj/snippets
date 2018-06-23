#include <iostream>

using namespace std;

int main()
{
  const double PI = 3.1415926535;
  char myGrade = 'A';
  bool isHappy = true;
  int myAge = 39;
  float favNum = 3.141592;
  double otherFavNum = 1.6180339887;

  cout << "Favorite Number " << favNum << endl;
	cout << "Size of char " << sizeof(myGrade) << endl;
	cout << "Size of bool " << sizeof(isHappy) << endl;
  cout << "Size of int " << sizeof(myAge) << endl;
	cout << "Size of float " << sizeof(favNum) << endl;
	cout << "Size of double " << sizeof(otherFavNum) << endl;

  return 0;
}
