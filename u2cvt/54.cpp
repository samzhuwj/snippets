#include <iostream>
#include <cmath>

double Area(double radius);
double Area(double height, double width);

int main()
{
  std::cout << "Area Circle (c) or Rectangle (r) : ";
  char areaType;
  std::cin >> areaType;

  switch(areaType){
    case 'c' :
      std::cout << "Enter Radius : ";
      double radius;
      std::cin >> radius;
      std::cout << "Area = " << Area(radius) << "\n";
      break;
    case 'r' :
      std::cout << "Enter Height : ";
      double height, width;
      std::cin >> height;
      std::cout << "Enter Width : ";
      std::cin >> width;
      std::cout << "Area = " << Area(height,width) << "\n";
      break;
    default : std::cout << "Please Enter c or r\n";
  }

  return 0;
}

double Area(double radius)
{
  return 3.14159 * std::pow(radius, 2);
}

double Area(double height, double width)
{
  return height * width;
}
