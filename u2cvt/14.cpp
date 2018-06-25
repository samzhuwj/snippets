#include <iostream>
#include <vector>
#include <numeric>

int main()
{
  std::vector<int> myVec2(10);
  std::iota(std::begin(myVec2), std::end(myVec2), 1);

  for(auto y: myVec2){
    if((y % 2) == 0)
      std::cout << y << "\n";
  }

  return 0;
}
