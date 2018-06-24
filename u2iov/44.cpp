#include <iostream>

using namespace std;

void makeMeYoung(int* age)
{
	cout << "I used to be " << *age << endl;
	*age = 21;
}

int main()
{
  int myAge = 39;
	makeMeYoung(&myAge);
  cout << "I'm " << myAge << " years old now" << endl;

  return 0;
}
