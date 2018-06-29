// operator overloading
#include <iostream>
#include <sstream>

class Box
{
public:
  double length, width, breadth;
  std::string boxString;

  Box(){
    length = 1, width = 1, breadth = 1;
  }

  Box(double l, double w, double b){
    length = l, width = w, breadth = b;
  }

  Box& operator ++ (){
    length++;
    width++;
    breadth++;
    return *this;
  }

  operator const char*() {
    std::ostringstream boxStream;
    boxStream << "Box : " << length << ", " << width << ", " << breadth;
    boxString = boxStream.str();
    return boxString.c_str();
  }

  Box operator + (const Box& box2){
    Box boxSum;
    boxSum.length = length + box2.length;
    boxSum.width = width + box2.width;
    boxSum.breadth = breadth + box2.breadth;
    return boxSum;
  }

  double operator [] (int x){
    if(x == 0){
      return length;
    } else if(x == 1){
      return width;
    } else if(x == 2){
      return breadth;
    } else {
      return 0;
    }
  }

  bool operator == (const Box& box2){
    return ((length==box2.length) && (width==box2.width) && (breadth==box2.breadth));
  }

  bool operator < (const Box& box2){
    double thisSize = length + width + breadth;
    double box2Size = box2.length + box2.width + box2.breadth;

    if (thisSize < box2Size){
      return true;
    } else {
      return false;
    }
  }

  bool operator > (const Box& box2){
    double thisSize = length + width + breadth;
    double box2Size = box2.length + box2.width + box2.breadth;

    if (thisSize > box2Size){
      return true;
    } else {
      return false;
    }
  }

  void operator = (const Box& boxToCopy){
    length = boxToCopy.length;
    width = boxToCopy.width;
    breadth = boxToCopy.breadth;
  }
};

int main()
{
  Box box(10,10,10);
  ++box;
  std::cout << box << "\n";
  Box box2(5,5,5);
  std::cout << "Box1 + Box2 = " << box + box2 << "\n";
  std::cout << "Box Length : " << box[0] << "\n";
  std::cout << std::boolalpha;
  std::cout << "Are boxes equal : " << (box == box2) << "\n";
  std::cout << "Is box < box2 : " << (box < box2) << "\n";
  std::cout << "Is box < box2 : " << (box > box2) << "\n";
  box = box2;
  std::cout << box << "\n";

  return 0;
}
