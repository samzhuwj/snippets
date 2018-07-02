// get values with an iterator
#include <iostream>
#include <set>

int main()
{
  std::set<int> set1 {5,4,3,2,1,1};
  set1.insert(0);
  std::set<int>::iterator it = set1.begin();
  it++;
  std::cout << "The 2nd value: " << *it << "\n";

  return 0;
}
