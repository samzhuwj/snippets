#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

 // In mathematics an automorphic no. (sometimes referred to as a circular no.)
 // is a no. whose square "ends" in the same digits as the no. itself.
int main()
{
  long long int number;
  cout << "Enter a number: ";
  cin >> number;

  unsigned long long int numberSquared = number * number;

  string numberString = to_string(number);
  string numberSquaredString = to_string(numberSquared);

  bool isAutomorphic = std::equal(numberString.rbegin(),
                                  numberString.rend(), numberSquaredString.rbegin());                        // Checks if the number is at the end of the number squared

  cout << number << " is " << (isAutomorphic ? "" : "not ") << "an automorphic number." << endl;
}
