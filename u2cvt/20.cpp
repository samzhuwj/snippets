#include <iostream>

int main()
{
  int intArray[] = {1,2,3,4};
  int* pIntArray = intArray;

  std::cout << "1st " << *pIntArray << " Address " << pIntArray << "\n";
  pIntArray++;
  std::cout << "2nd " << *pIntArray << " Address " << pIntArray << "\n";
  pIntArray--;
  std::cout << "1st " << *pIntArray << " Address " << pIntArray << "\n";

  return 0;
}
