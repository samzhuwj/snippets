#include <iostream>

int main()
{
  int val = 8;

  if((val % 2) == 0){
      std::cout << val << " is Even\n";
  }
  else {
      std::cout << val << " is Odd\n";
  }

  return 0;
}
