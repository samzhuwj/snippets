#include <iostream>

using namespace std;

int main()
{
  int myAge = 39;
  int* agePtr = &myAge;

  cout << "Address of pointer " << agePtr << endl;
  cout << "Data at memory address " << *agePtr << endl;

  return 0;
}
