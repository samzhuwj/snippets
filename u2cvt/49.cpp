#include <iostream>
#include <vector>

std::vector<int> GenerateRandVec(int numOfNums, int min, int max);

int main()
{
  std::vector<int> vecVals = GenerateRandVec(10, 5, 50);

  for(auto x: vecVals)
    std::cout << x << "\n";

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
