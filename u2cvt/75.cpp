// receive a list and generate a list of odd values from that list
#include <iostream>
#include <vector>

bool IsItOdd(int num);
std::vector<int> ChangeList(std::vector<int>, std::function<bool(int)>);

int main()
{
  std::vector<int> listOfNums {1,2,3,4,5};
  std::vector<int> oddList = ChangeList(listOfNums, IsItOdd);
  std::cout << "List of Odds\n";

  for(auto i: oddList){
    std::cout << i << "\n";
  }

  return 0;
}

bool IsItOdd(int num)
{
  if(num % 2 == 0){
    return false;
  } else {
    return true;
  }
}

std::vector<int> ChangeList(std::vector<int> list, std::function<bool(int)> func)
{
  std::vector<int> oddList;

  for(auto i: list){
    if(func(i)){
      oddList.push_back(i);
    }
  }
  
  return oddList;
}
