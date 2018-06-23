#include <iostream>

using namespace std;

int main()
{
  char myName[5][5] = {{'D','e','r','e','k'},{'B','a','n','a','s'}};

  for(int j = 0; j < 2; j++){
		for(int k = 0; k < 5; k++){
			cout << myName[j][k];
		}
    cout << endl;
	}

  return 0;
}
