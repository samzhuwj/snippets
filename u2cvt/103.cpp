// get iterator to value
#include <iostream>
#include <map>

int main()
{
  std::map<int, std::string> map1;
  map1.insert(std::pair <int, std::string> (1, "Bart"));
  map1.insert(std::pair <int, std::string> (2, "Lisa"));
  map1.insert(std::pair <int, std::string> (3, "Marge"));
  map1.insert(std::pair <int, std::string> (4, "Homer"));
  auto bart = map1.lower_bound(1);
  std::cout << "LB: " << bart->second << "\n";

  return 0;
}
