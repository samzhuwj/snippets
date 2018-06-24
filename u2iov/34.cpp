#include <iostream>

using namespace std;

int getFactorial(int number)
{
	int sum;
	if(number == 1) sum = 1;
	else sum = (getFactorial(number - 1) * number);
	return sum;

	// getFactorial(2) [Returns 2] * 3
	// getFactorial(1) [Returns 1] * 2 <This value goes above>
	// 2 * 3 = 6
}

int main()
{
  cout << "The factorial of 5 is " << getFactorial(5) << endl;

  return 0;
}
