#include <iostream>

using namespace std;

int main()
{
  int greetingOption = 1;

	switch(greetingOption){
	case 1 :
		cout << "bonjour" << endl;
		break;

	case 2 :
		cout << "Hola" << endl;
		break;

	case 3 :
		cout << "Hallo" << endl;
		break;

	default :
		cout << "Hello" << endl;
	}

  return 0;
}
