// generate dynamic vector of fibs
#include <iostream>
#include <vector>

std::vector<int> GenerateFibList(int maxNums);

int main()
{
  std::vector<int> listOfFibs = GenerateFibList(10);

  for(auto val: listOfFibs)
    std::cout << val << "\n";

  return 0;
}

std::vector<int> GenerateFibList(int maxNums)
{
  std::vector<int> listOfFibs;
  int i = 0;
  std::function<int(int)> Fib = [&Fib](int n) {return n < 2 ? n : Fib(n-1) + Fib(n-2);};

  while(i < maxNums){
    listOfFibs.push_back(Fib(i));
    i++;
  }

  return listOfFibs;
}
