#include <iostream>

void AssignAge(int age);

int main()
{
  int age = 43;
  AssignAge(age);
  std::cout << "New Age " << age << "\n";

  return 0;
}

void AssignAge(int age)
{
  age = 24;
}
