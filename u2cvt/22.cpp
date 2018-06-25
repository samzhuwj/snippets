#include <iostream>
#include <vector>

std::vector<int> Range(int start, int max, int step);

int main()
{
  std::vector<int> range = Range(1, 10, 2);

  for(auto y: range){
    std::cout << y << "\n";
  }

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
