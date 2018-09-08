// add two numbers without using addition operator
// repeated addtion/subtraction using -/++ operator
#include <iostream>
using namespace std;

int add(int a, int b)
{
	while (a>0)
  {
		b++;
		a--;
	}

	while (a<0)
  {
		b--;
		a++;
	}

	return b;
}

int main()
{
	cout << add(5, 8) << " ";
	cout << add(5, -8) << " ";
	cout << add(-5, 8) << " ";
	return 0;
}
