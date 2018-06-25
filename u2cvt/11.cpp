#include <iostream>
#include <vector>
#include <numeric>

int main()
{
  std::vector<int> myVec(10);
  std::iota(std::begin(myVec), std::end(myVec), 0);

  for(int i = 0; i < myVec.size(); ++i){
      std::cout << myVec[i] << "\n";
  }

  return 0;
}
