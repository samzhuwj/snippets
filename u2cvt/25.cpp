#include <iostream>
#include <vector>

std::vector<int> Range(int start, int max, int step);

int main()
{
  std::cout << "How tall is the tree : ";

  int treeHeight = 0, spaces = 0, hashes = 1, stumpSpaces = 0;

  std::cin >> treeHeight;

  spaces = treeHeight - 1;

  stumpSpaces = treeHeight - 1;

  while(treeHeight != 0){
    for(auto x: Range(1, spaces, 1))
      std::cout << " ";

    for(auto x: Range(1, hashes, 1))
      std::cout << "#";

    std::cout << "\n";

    spaces -= 1;
    hashes += 2;
    treeHeight -= 1;
  }

  for(auto x: Range(1, stumpSpaces, 1))
    std::cout << " ";
    std::cout << "#";

  return 0;
}

std::vector<int> Range(int start, int max, int step)
{
  int i = start;
  std::vector<int> range;

  while(i <= max){
    range.push_back(i);
    i += step;
  }

  return range;
}
