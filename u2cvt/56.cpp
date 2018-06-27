#include <iostream>
#include <vector>

std::vector<int> GenerateRandVec(int numOfNums, int min, int max);

int main()
{
  std::vector<int> vecVals = GenerateRandVec(10, 1, 50);
  std::sort(vecVals.begin(), vecVals.end(), [](int x, int y){ return x < y; });
  std::vector<int> evenVecVals;
  std::copy_if(vecVals.begin(), vecVals.end(), std::back_inserter(evenVecVals), [](int x){ return (x % 2) == 0; });

  for(auto val: evenVecVals)
    std::cout << val << "\n";

  return 0;
}

std::vector<int> GenerateRandVec(int numOfNums, int min, int max)
{
  std::vector<int> vecValues;
  srand(time(NULL));
  int i = 0, randVal = 0;

  while(i < numOfNums){
    randVal = min + std::rand() % ((max + 1) - min);
    vecValues.push_back(randVal);
    i++;
  }

  return vecValues;
}
