#include <iostream>

int Fib(int index);

int main() {
  int index;
  std::cout << "Get Fibonacci Index : ";
  std::cin >> index;
  printf("fib(%d) = %d\n", index, Fib(index));

  return 0;
}

int Fib(int index){
  if (index < 2){
    return index;
  }
  else {
    return Fib(index - 1) + Fib(index - 2);
  }
}
