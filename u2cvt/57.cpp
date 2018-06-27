#include <iostream>
#include <vector>

std::vector<int> GenerateRandVec(int numOfNums, int min, int max);

int main()
{
  std::vector<int> vecVals = GenerateRandVec(10, 1, 50);
  std::sort(vecVals.begin(), vecVals.end(), [](int x, int y){ return x < y; });
  int sum = 0;
  std::for_each(vecVals.begin(), vecVals.end(), [&] (int x) {sum += x; });
  std::cout << "SUM : " << sum << "\n";

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
