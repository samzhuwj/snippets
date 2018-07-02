// add multiple values
#include <iostream>
#include <set>

int main()
{
  std::set<int> set1 {5,4,3,2,1,1};
  int arr[] = {6,7,8,9};
  set1.insert(arr,arr+4);
  if(!set1.empty()){
    for(int i : set1)
      std::cout << i << "\n";
  }

  return 0;
}
