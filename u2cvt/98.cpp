// get iterator to value
#include <iostream>
#include <set>

int main()
{
  std::set<int> set1 {5,4,3,2,1,1};
  int arr[] = {6,7,8,9};
  set1.insert(arr,arr+4);
  auto eight = set1.lower_bound(8);
  std::cout << "Get 8: " << *eight << "\n";

  return 0;
}
