#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
	string userName;
	cout << "Please enter your name: ";
	cin >> userName;
	cout << endl << "Hello, " << userName << "... and goodbye!" << endl;
	return 0;
}
