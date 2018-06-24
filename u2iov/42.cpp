#include <iostream>

using namespace std;

int main()
{
  int badNums[5] = {4, 13, 14, 24, 34};
	int* numArrayPtr = badNums;
  numArrayPtr++;
	cout << "Address " << numArrayPtr << " Value " << *numArrayPtr << endl;

  return 0;
}
