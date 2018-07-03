// map stores data using key value pairs
#include <iostream>
#include <map>

int main()
{
  std::map<int, std::string> map1;
  map1.insert(std::pair <int, std::string> (1, "Bart"));
  map1.insert(std::pair <int, std::string> (2, "Lisa"));
  map1.insert(std::pair <int, std::string> (3, "Marge"));
  map1.insert(std::pair <int, std::string> (4, "Homer"));
  auto match = map1.find(1);
  std::cout << match->second << "\n"; // find element by key

  return 0;
}
