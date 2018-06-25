#include <iostream>

int main(int argc, char* argv[])
{
  std::string sAge = "0";
  std::cout << "Enter your age: ";
  getline(std::cin, sAge);
  int nAge = std::stoi(sAge);

  if((nAge>=1) && (nAge<=18)){
    std::cout << "Important Birthday\n";
  } else if((nAge==21) || (nAge==60)){
    std::cout << "Important Birthday\n";
  } else if(nAge>=70){
    std::cout << "Important Birthday\n";
  } else {
    std::cout << "Not an Important Birthday\n";
  }

  return 0;
}
