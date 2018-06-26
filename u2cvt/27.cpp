#include <iostream>
#include <ctime>

int main()
{
  srand(time(NULL));

  int secretNum = std::rand() % 11;
  int guess = 0;

  do{
    std::cout << "Guess the number : ";
    std::cin >> guess;

    if(guess > secretNum) std::cout << "To Big\n";
    if(guess < secretNum) std::cout << "To Small\n";
  } while(secretNum != guess);

  std::cout << "You guessed it\n";

  return 0;
}
