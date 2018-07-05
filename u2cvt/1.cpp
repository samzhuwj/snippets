// input multiple arguments
#include <iostream>

int main(int argc, char* argv[])
{
  std::cout << "Hello World" << std::endl;

  if(argc != 1){ //./a.out input argc I Love C++, the default value is 1
    std::cout << "You entered " << argc << " arguments\n";

    for(int i=0; i<argc; ++i){
      std::cout << argv[i] << "\n";
    }
  }

  return 0;
}
