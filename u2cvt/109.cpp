// use priority queue
#include <iostream>
#include <queue>

int main()
{
  std::priority_queue<int> nums;
  nums.push(4);
  nums.push(8);
  nums.push(5);
  int size3 = nums.size();

  if(!nums.empty()){
    for(int i = 0; i < size3; i++){
      std::cout << nums.top() << "\n";
      nums.pop();
    }
  }

  return 0;
}
