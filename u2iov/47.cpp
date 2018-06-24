#include <iostream>

using namespace std;

void actYourAge(int& age)
{
	age = 39;
}

int main()
{
  int myAge = 39;
  int& ageRef = myAge;
  
  actYourAge(ageRef);
  cout << "myAge : " << myAge << endl;

  return 0;
}
