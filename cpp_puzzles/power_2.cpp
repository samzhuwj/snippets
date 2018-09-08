// implement power function without using multiplication and division operators
// use mathematics
#include<cmath>
using namespace std;

int pow(int a, int b)
{
	float logx = 0;

  for (int i = 0; i < b; i++) logx += log(a);

  return exp(logx);
}

int main()
{
	cout << pow(2, 10);
	return 0;
}
