#include <iostream>
#include <vector>
#include <cmath>

void PrintHorzVector(std::vector<int>& theVec);

int main()
{
  std::vector<int> theVec = {10,8,2,5,9,11,6,14};
  PrintHorzVector(theVec);
  return 0;
}

void PrintHorzVector(std::vector<int>& theVec)
{
  int dashes = std::ceil(theVec.size() * 6);

  for(int n = 0; n < dashes; n++)
    std::cout << "-";
  std::cout << "\n";

  for(int n = 0; n < theVec.size(); n++)
    printf("| %2d  ", n);
  std::cout << "|\n";

  for(int n = 0; n < dashes; n++)
    std::cout << "-";
  std::cout << "\n";

  for(int n = 0; n < theVec.size(); n++)
    printf("| %2d  ", theVec[n]);
  std::cout << "|\n";

  for(int n = 0; n < dashes; n++)
    std::cout << "-";
  std::cout << "\n";
}
