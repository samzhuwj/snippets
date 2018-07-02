// get iterator to value after
#include <iostream>
#include <set>

int main()
{
  std::set<int> set1 {5,4,3,2,1,1};
  int arr[] = {6,7,8,9};
  set1.insert(arr,arr+4);
  auto nine = set1.upper_bound(8);
  std::cout << "Get value after 8: " << *nine << "\n";

  return 0;
}
