#include <iostream>

int main(int argc, char* argv[])
{
  std::string sMiles;
  double dMiles, dKilometers;

  std::cout << "Enter Miles : ";
  getline(std::cin, sMiles);

  dMiles = std::stod(sMiles);
  dKilometers = dMiles * 1.60934;

  printf("%.1f miles equals %.4f kilometers\n", dMiles, dKilometers);

  return 0;
}
