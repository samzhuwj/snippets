#include <iostream>
#include <limits>

int main(){
	std::cout << "Hello, World!\n";
	std::cout << "Hello, World!" << std::endl;

  std::cout << "Press ENTER to quit : ";
  std::cin.ignore((std::numeric_limits<std::streamsize>::max)(), '\n');
}
