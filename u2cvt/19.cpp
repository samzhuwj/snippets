#include <iostream>

int main()
{
  int age = 43;
  int* pAge = NULL;
  pAge = &age;

  std::cout << "Address : " << pAge << "\n";
  std::cout << "Value at Address : " << *pAge << "\n";

  return 0;
}
