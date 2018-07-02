// find a value
#include <iostream>
#include <set>

int main()
{
  std::set<int> set1 {5,4,3,2,1,1};
  int arr[] = {6,7,8,9};
  set1.insert(arr,arr+4);
  auto val = set1.find(6);
  std::cout << "Found a value: " << *val << "\n";

  return 0;
}
