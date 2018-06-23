#include <iostream>

using namespace std;

int main()
{
	string eulerGuess;

  cout << "What is Euler's Constant? ";
	getline (cin,eulerGuess);
	cout << "Size of string " << eulerGuess.size() << endl;
	cout << "Is string empty " << eulerGuess.empty() << endl;
	cout << eulerGuess.append(" was your guess") << endl;      

  return 0;
}
