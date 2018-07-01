// double ended queue
#include <iostream>
#include <deque>

int main()
{
  std::deque<int> nums = {1,2,3,4};
  nums.push_front(0);
  nums.push_back(5);

  for(int x: nums)
    std::cout << x << "\n";

  std::cout << nums[0] << "\n";

  return 0;
}
