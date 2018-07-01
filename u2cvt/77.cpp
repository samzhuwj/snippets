// use header file
#include <iostream>
#include "animal.h"

int main()
{
  Animal spot = Animal();
  spot.name = "Spot";
  std::cout << "The Animal is named " << spot.name << "\n";

  return 0;
}
