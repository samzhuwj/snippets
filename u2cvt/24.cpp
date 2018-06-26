#include <iostream>

int main()
{
  int i = 1;

  while (i<=20){
    if((i%2)==0){
      i += 1;
      continue;
    }

    if(i==15) break;
    std::cout << i << "\n";
    i += 1;
  }

  return 0;
}
