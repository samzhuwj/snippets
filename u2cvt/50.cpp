#include <iostream>
#include <vector>

std::vector<int> GenerateRandVec(int numOfNums, int min, int max);
void BubbleSort(std::vector<int>& theVec);

int main()
{
  std::vector<int> vecVals = GenerateRandVec(10, 1, 50);
  BubbleSort(vecVals);

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

void BubbleSort(std::vector<int>& theVec)
{
  int i = theVec.size() - 1;

  while(i >= 1){
    int j = 0;

    while(j < i){
      printf("\nIs %d > %d\n", theVec[j], theVec[j + 1]);

      if(theVec[j] >= theVec[j+1]){
        std::cout << "Switch\n";
        int temp = theVec[j];
        theVec[j] = theVec[j+1];
        theVec[j+1] = temp;
      } else {
        std::cout << "Don't Switch\n";
      }

      j += 1;

      for(auto k: theVec){
        std::cout << k << ", ";
      }
    }
    
    std::cout << "\nEnd of Round\n";
    i -= 1;
  }
}
