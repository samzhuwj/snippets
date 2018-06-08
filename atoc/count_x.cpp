#include <iostream>
#include <limits>

using namespace std;

int count_x1(char* p, char x) // count the number of occurrences of x in p[]
{
	if (p == nullptr) return 0; // p is to point to a zero-terminated array of char (or to nothing)

  int count = 0;
  for (; *p != 0; ++p)
    if (*p == x) ++count;

	return count;
}

int count_x2(char* p, char x) // count the number of occurrences of x in p[]
{
  if (p == nullptr) return 0; // p is to point to a zero terminated array of char (or to nothing)

  int count = 0;
  while (*p) {
		if (*p == x) ++count;
		++p;
	}
	return count;
}

int main(){
  auto n1 = count_x1("zero to one", 'a');
  cout << "Number of 'a' : " << n1 << endl;

  auto n2 = count_x2("zero to one", 'a');
  cout << "Number of 'a' : " << n1 << endl;

	cout << "Press ENTER to quit : ";
	cin.ignore((numeric_limits<streamsize>::max)(), '\n');
}
