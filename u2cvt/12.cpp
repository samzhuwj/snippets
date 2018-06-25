#include <iostream>
#include <vector>
#include <numeric>

int main()
{
  std::vector<int> myVec(10);
  std::iota(std::begin(myVec), std::end(myVec), 0);

  for(auto y: myVec) std::cout << y << "\n";

  return 0;
}
