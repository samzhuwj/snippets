// list
#include <iostream>
#include <list>

bool isEven(const int& val){
  return (val % 2) == 0;
}

int main()
{
  int arr[5] = {1,2,3,4,5};
  std::list<int> list1;
  list1.insert(list1.begin(), arr, arr+5);

  std::cout << "list inserting" << "\n";
  for(int i : list1) std::cout << i << "\n";

  list1.assign({10,20,30});
  std::cout << "add values with assign" << "\n";
  for(int i : list1) std::cout << i << "\n";

  list1.push_back(5);
  list1.push_front(1);
  std::cout << "add to end and front" << "\n";
  for(int i : list1) std::cout << i << "\n";

  std::cout << "get the size" << "\n";
  std::cout << "Size: " << list1.size() << "\n";

  std::list<int>::iterator it2 = list1.begin();
  std::advance(it2, 1);
  std::cout << "access the index with an iterator" << "\n";
  std::cout << "2nd Index: " << *it2 << "\n";

  it2 = list1.begin();
  list1.insert(it2, 8);
  std::cout << "Insert at an index" << "\n";
  for(int i : list1) std::cout << i << "\n";

  list1.erase(list1.begin());
  std::cout << "Erase at an index" << "\n";
  for(int i : list1) std::cout << i << "\n";

  it2 = list1.begin();
  std::list<int>::iterator it3 = list1.begin();
  std::advance(it3, 2);
  list1.erase(it2, it3);
  std::cout << "Erase 1st 2 elements" << "\n";
  for(int i : list1) std::cout << i << "\n";

  list1.pop_front();
  std::cout << "Pop first value" << "\n";
  for(int i : list1) std::cout << i << "\n";

  list1.pop_back();
  std::cout << "Pop last" << "\n";
  for(int i : list1) std::cout << i << "\n";

  int arr2[6] = {10,9,8,7,6,6};
  std::list<int> list2;
  list2.insert(list2.begin(), arr2, arr2+5);
  std::cout << "Create another list" << "\n";
  for(int i : list2) std::cout << i << "\n";

  list2.sort();
  std::cout << "Sort the list" << "\n";
  for(int i : list2) std::cout << i << "\n";

  list2.reverse();
  std::cout << "Reverse the list" << "\n";
  for(int i : list2) std::cout << i << "\n";

  list2.unique();
  std::cout << "Remove duplicates" << "\n";
  for(int i : list2) std::cout << i << "\n";

  list2.remove(6);
  std::cout << "Remove a value" << "\n";
  for(int i : list2) std::cout << i << "\n";

  list2.remove_if (isEven);
  std::cout << "Remove if a condition is true" << "\n";
  for(int i : list2) std::cout << i << "\n";

  list1.merge(list2);
  std::cout << "Merge lists" << "\n";
  for(int i : list2) std::cout << i << "\n";

  return 0;
}
