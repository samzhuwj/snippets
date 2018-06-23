#include <iostream>

using namespace std;

int main()
{
  double eulersConstant = .57721;
	string eulerGuess;
	double eulerGuessDouble;
	cout << "What is Euler's Constant? ";
	getline (cin,eulerGuess);

	// Converts a string into a double
	// stof() for floats
	eulerGuessDouble = stod(eulerGuess);

	if(eulerGuessDouble == eulersConstant){
		cout << "You are right" << endl;
	}
  else {
		cout << "You are wrong" << endl;
	}

  return 0;
}
