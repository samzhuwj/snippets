#include <iostream>

using namespace std;

int main()
{
  int age;
	int ageAtLastExam = 16;
	bool isNotIntoxicated = true;
  cin >> age;

	if((age >= 0) && (age < 16)){
		cout << "You can't drive" << endl;
	}
  else if(!isNotIntoxicated){
		cout << "You can't drive" << endl;
	}
  else if(age >= 80 && ((age > 100) || ((age - ageAtLastExam) > 5))){
		cout << "You can't drive" << endl;
	}
  else {
		cout << "You can drive" << endl;
	}

  return 0;
}
