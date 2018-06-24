#include <iostream>

using namespace std;

int addNumbers(int firstNum, int secondNum = 0)
{
	int combinedValue = firstNum + secondNum;
	return combinedValue;
}

int main()
{
  cout << addNumbers(17) << endl;

  return 0;
}
