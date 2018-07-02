// insert value to a set
#include <iostream>
#include <set>

int main()
{
  std::set<int> set1 {5,4,3,2,1,1};
  set1.insert(0);
  if(!set1.empty()){
    for(int i : set1)
      std::cout << i << "\n";
  }

  return 0;
}
