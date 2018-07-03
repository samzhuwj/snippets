// use queue
#include <iostream>
#include <queue>

int main()
{
  std::queue<std::string> cast;
  cast.push("Zoidberg");
  cast.push("Bender");
  cast.push("Leela");
  int size2 = cast.size();

  if(!cast.empty()){
    for(int i = 0; i < size2; i++){
      std::cout << cast.front() << "\n";
      cast.pop();
    }
  }

  return 0;
}
