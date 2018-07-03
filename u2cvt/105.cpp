// print elements with an iterator
#include <iostream>
#include <map>

int main()
{
  std::map<int, std::string> map1;
  map1.insert(std::pair <int, std::string> (1, "Bart"));
  map1.insert(std::pair <int, std::string> (2, "Lisa"));
  map1.insert(std::pair <int, std::string> (3, "Marge"));
  map1.insert(std::pair <int, std::string> (4, "Homer"));
  std::map<int, std::string>::iterator it2;
  for(it2 = map1.begin(); it2 != map1.end(); ++it2){
    std::cout << "Key: " << it2->first << "\n";
    std::cout << "Value: " << it2->second << "\n";
  }

  return 0;
}
