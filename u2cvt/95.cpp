// erase last 2 values
#include <iostream>
#include <set>

int main()
{
  std::set<int> set1 {5,4,3,2,1,1};
  std::set<int>::iterator it = set1.begin();
  it = set1.end();
  std::advance(it, -2);
  set1.erase(it, set1.end());
  if(!set1.empty()){
    for(int i : set1)
      std::cout << i << "\n";
  }

  return 0;
}
