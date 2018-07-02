// forward list
#include <iostream>
#include <forward_list>

bool isEven(const int& val)
{
  return (val % 2) == 0;
}

int main()
{
  std::forward_list<int> fl1;
  fl1.assign({1,2,3,4});
  std::cout << "Assign values" << "\n";
  for(int i : fl1) std::cout << i << "\n";

  fl1.push_front(0);
  std::cout << "Push front" << "\n";
  for(int i : fl1) std::cout << i << "\n";

  fl1.pop_front();
  std::cout << "Pop front" << "\n";
  for(int i : fl1) std::cout << i << "\n";

  std::cout << "Get 1st" << "\n";
  std::cout << "Front: " << fl1.front() << "\n";;

  std::forward_list<int>::iterator it4 = fl1.begin();
  std::cout << "Get iterator for 1st element" << "\n";
  for(int i : fl1) std::cout << i << "\n";

  it4 = fl1.insert_after(it4, 5);
  std::cout << "Insert after 1st element" << "\n";
  for(int i : fl1) std::cout << i << "\n";

  it4 = fl1.erase_after(fl1.begin());
  std::cout << "Delete just entered 5" << "\n";
  for(int i : fl1) std::cout << i << "\n";

  fl1.emplace_front(6);
  std::cout << "Place in 1st position" << "\n";
  for(int i : fl1) std::cout << i << "\n";

  fl1.remove(6);
  std::cout << "Remove a value" << "\n";
  for(int i : fl1) std::cout << i << "\n";

  fl1.remove_if (isEven);
  std::cout << "Remove if a condition is true" << "\n";
  for(int i : fl1) std::cout << i << "\n";

  std::forward_list<int> fl2;
  fl2.assign({9,8,7,6,6});
  std::cout << "Assign values to fl2" << "\n";
  for(int i : fl2) std::cout << i << "\n";

  fl2.unique();
  std::cout << "Remove duplicates" << "\n";
  for(int i : fl2) std::cout << i << "\n";

  fl2.sort();
  std::cout << "Sort" << "\n";
  for(int i : fl2) std::cout << i << "\n";

  fl2.reverse();
  std::cout << "Reverse" << "\n";
  for(int i : fl2) std::cout << i << "\n";

  fl1.merge(fl2);
  std::cout << "Merge lists fl1 and fl2" << "\n";
  for(int i : fl1) std::cout << i << "\n";

  fl1.clear();
  std::cout << "Clear fl1" << "\n";
  for(int i : fl1) std::cout << i << "\n";

  return 0;
}
