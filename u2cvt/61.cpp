// use ternary operator
#include <iostream>

int main()
{
  int age;
  std::cout << "Get age: ";
  std::cin >> age;
  bool canHeVote = (age >= 18) ? true : false;
  std::cout.setf(std::ios::boolalpha);
  std::cout << "Can he vote? " << canHeVote << "\n";

  return 0;
}
