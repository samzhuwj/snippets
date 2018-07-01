// iterators
#include <iostream>
#include <vector>

int main()
{
  std::vector<int> nums2 = {1,2,3,4};
  std::vector<int>::iterator itr;

  for(itr = nums2.begin(); itr < nums2.end(); itr++)
    std::cout << *itr << "\n";

  std::vector<int>::iterator itr2 = nums2.begin();
  advance(itr2, 2);
  std::cout << *itr2 << "\n";
  auto itr3 = next(itr2, 1);
  std::cout << *itr3 << "\n";
  auto itr4 = prev(itr2, 1);
  std::cout << *itr4 << "\n";
  std::vector<int> nums3 = {1,4,5,6};
  std::vector<int> nums4 = {2,3};
  auto itr5 = nums3.begin();
  advance(itr5, 1);
  copy(nums4.begin(), nums4.end(), inserter(nums3, itr5));

  for(int &i: nums3)
    std::cout << i << "\n";

  return 0;
}
