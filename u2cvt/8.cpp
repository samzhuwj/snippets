#include <iostream>
#include <vector>

int main(int argc, char* argv[])
{
  std::vector<int> vecnRandNums(2);
  vecnRandNums[0] = 10;
  vecnRandNums[1] = 20;
  vecnRandNums.push_back(30);

  std::cout << "Vector Size: " << vecnRandNums.size() << "\n";
  std::cout << "Last Index: " << vecnRandNums[vecnRandNums.size()-1] << "\n";

  return 0;
}
