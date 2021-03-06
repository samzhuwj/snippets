#include <iostream>
#include <vector>

std::vector<int> Range(int start, int max, int step);
bool IsPrime(int num);

int main()
{
  int num = 0;
  std::cout << "Number to Check: ";
  std::cin >> num;
  std::cout.setf(std::ios::boolalpha);
  std::cout << "Is " << num << " Prime? " << IsPrime(num) << "\n";

  return 0;
}

std::vector<int> Range(int start, int max, int step)
{
  int i = start;
  std::vector<int> range;

  while(i <= max){
    range.push_back(i);
    i += step;
  }

  return range;
}

bool IsPrime(int num)
{
  for(auto n: Range(2, num - 1, 1)){
    if((num % n) == 0)
      return false;
  }

  return true;
}
