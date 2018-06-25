#include <iostream>

int AssignAge2(int age);

int main()
{
  int age = 43;
  age = AssignAge2(age);
  std::cout << "New Age " << age << "\n";

  return 0;
}

int AssignAge2(int age)
{
  age = 24;
  return age;
}
