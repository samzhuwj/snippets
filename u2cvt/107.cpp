// use stack
#include <iostream>
#include <stack>

int main()
{
  std::stack<std::string> custs;
  custs.push("George");
  custs.push("Louise");
  custs.push("Florence");
  int size = custs.size();

  if(!custs.empty()){
    for(int i = 0; i < size; i++){
      std::cout << custs.top() << "\n";
      custs.pop();
    }
  }

  return 0;
}
