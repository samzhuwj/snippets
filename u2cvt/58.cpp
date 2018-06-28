#include <iostream>
#include <vector>

std::vector<int> GenerateRandVec(int numOfNums, int min, int max);

int main()
{
  std::vector<int> vecVals = GenerateRandVec(10, 1, 50);
  int divisor;
  std::vector<int> vecVals2;
  std::cout << "List of values divisable by : ";
  std::cin >> divisor;
  std::copy_if(vecVals.begin(), vecVals.end(), std::back_inserter(vecVals2), [divisor](int x){ return (x % divisor) == 0; });

  for(auto val: vecVals2)
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
