#include <iostream>

int main()
{
  try {
    std::cout << "Throwing exception\n";
    throw std::runtime_error("Error Occurred");
    std::cout << "Can you print me?\n";
  }

  catch(std::exception &exp){
    std::cout << "Handled Exception: " << exp.what() << "\n";
  }

  catch(...){
    std::cout << "Default exception catch\n";
  }

  return 0;
}
