// perform operations using multiple vectors
#include <iostream>
#include <vector>

int main()
{
  std::vector<int> vec1 = {1,2,3,4,5};
  std::vector<int> vec2 = {1,2,3,4,5};
  std::vector<int> vec3(5);
  transform(vec1.begin(), vec1.end(),
          vec2.begin(), vec3.begin(),
          [](int x, int y) {return x + y;});

  for(auto val: vec3)
    std::cout << "vec3 " << val << "\n";

  return 0;
}
