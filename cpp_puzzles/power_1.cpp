// implement power function without using multiplication and division operators
// use recursion
#include <iostream>
using namespace std;

int pow(int a, int b)
{
	if(b==0) return 1;

	int res = 0;
	int power = pow(a, b-1);

	for(int i=0; i<a; i++) res += power;

	return res;
}

int main()
{
	cout << pow(7, 3);
	return 0;
}
