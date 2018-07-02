// multiset stores duplicate values in sorted order
#include <iostream>
#include <set>

int main()
{
  std::multiset<int> mset1 {1,1,2,3,4};
  mset1.insert(4);
  mset1.insert(0);
  if(!mset1.empty()){
    for(int i : mset1)
    std::cout << i << "\n";
  }

  return 0;
}
