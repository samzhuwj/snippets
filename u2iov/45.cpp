#include <iostream>

using namespace std;

int main()
{
  int myAge = 39;
  int& ageRef = myAge;
	cout << "ageRef : " << ageRef << endl;

  return 0;
}
