#include <iostream>

int main()
{
  char letterZ = 'z';
  char num3 = '3';
  char aSpace = ' ';

  std::cout << "Is z a letter or number " << isalnum(letterZ) << "\n";
  std::cout << "Is z a letter " << isalpha(letterZ) << "\n";
  std::cout << "Is z uppercase " << isupper(letterZ) << "\n";
  std::cout << "Is z lowercase " << islower(letterZ) << "\n";
  std::cout << "Is 3 a number " << isdigit(num3) << "\n";
  std::cout << "Is space a space " << isspace(aSpace) << "\n";

  return 0;
}
