#include <iostream>

using namespace std;

int main()
{
  char myName[5][5] = {{'D','e','r','e','k'},{'B','a','n','a','s'}};
  myName[0][2] = 'e';

	cout << "New Value " << myName[0][2] << endl;

  return 0;
}
