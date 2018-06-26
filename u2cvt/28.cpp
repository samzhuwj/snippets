#include <iostream>

int main()
{
  int secretNum = std::rand() % 11;
  int guess = 0;

  while(true){
    std::cout << "Guess the number : ";
    std::cin >> guess;

    if(guess > secretNum) std::cout << "To Big\n";
    if(guess < secretNum) std::cout << "To Small\n";

    if(guess == secretNum) break;
  }

  std::cout << "You guessed it\n";

  return 0;
}
