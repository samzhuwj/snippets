// ---------- STRUCT EXAMPLE ----------

#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <numeric>
#include <cmath>

// Classes have default private fields and methods
// while structs have public
// Structs are used to model new data types, while
// classes model more complex real world objects
struct Shape{
  // Variables are public by default
  double length, width;

  // Constructors are public by default
  Shape(double l = 1, double w = 1){
    length = l;
    width = w;
  }

  // Structs can contain functions
  double Area(){
    return length * width;
  }

  // Structs can contain private members
private:
  int id;
};

// You can inherit from a struct
struct Circle : Shape{
  // Override the constructor
  // You also use this with structs
  Circle(double width){
    this->width = width;
  }

  // Override Area()
  double Area(){
    return 3.14159 * std::pow((width / 2), 2);
  }
};

int main()
{
  // Create a struct
  Shape shape(10, 10);

  // Call a Struct function
  std::cout << "Square Area : " << shape.Area() << "\n";

  // Create a struct
  Circle circle(10);

  // Call a Struct function
  std::cout << "Circle Area : " << circle.Area() << "\n";

  // You can initialize a struct or class using
  // an aggregate
  Shape rectangle{10,15};
  std::cout << "Rectangle Area : " << rectangle.Area() << "\n";

  return 0;
}

// ---------- END STRUCT EXAMPLE ----------

// ---------- FRIEND CLASS EXAMPLE ----------

#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <numeric>
#include <cmath>

// Private members of a class are not accessable
// to outside code unless a class is marked as
// a friend
class Customer{
private:
  friend class GetCustomerData;
  std::string name;
public:
  Customer(std::string name){
    this->name = name;
  }
};

class GetCustomerData{
public:
  static std::string GetName(Customer& customer){
    return customer.name;
  }
};


int main()
{
  Customer tom("Tom");
  GetCustomerData getName;
  std::cout << "Name : " << getName.GetName(tom) << "\n";

  return 0;
}

// ---------- END FRIEND CLASS EXAMPLE ----------

// ---------- POLYMORPHISM EXAMPLE ----------

// Polymorphism is a feature in which similar
// objects can be treated the same, but also
// utilize their differences automatically
// for any methods marked as virtual

class Shape{
protected:
  double height;
  double width;
public:
  // Assume that if only 1 value is passed
  // that height and width are equal
  Shape(double length){
    height = length;
    width = length;
  }
  Shape(double h, double w){
    height = h;
    width = w;
  }
  virtual double Area(){
    return height * width;
  }
};

class Circle : public Shape{
public:
  Circle(double w) :
  Shape(w){

  }

  // Override Area()
  double Area(){
    return 3.14159 * std::pow((width / 2), 2);
  }
};

// This function receives Shapes but uses the
// correct Area() automatically
void ShowArea(Shape& shape){
  std::cout << "Area : " << shape.Area() << "\n";
}

int main()
{
  Shape square(10,5);
  Circle circle(10);
  ShowArea(square);
  ShowArea(circle);

  return 0;
}

// ---------- END POLYMORPHISM EXAMPLE ----------

// ---------- ABSTRACT CLASS / OVERRIDE EXAMPLE ----------

// Shape here has no purpose except for
// being able to to group similar objects
// so it should be instead an Abstract
// Class

class Shape{
public:
  virtual double Area() = 0;
};

class Circle : public Shape{
protected:
  double width;
public:
  Circle(double w){
    width = w;
  }

  // Override Area()
  // You should use override to force the
  // compiler to check if the base class
  // virtual fucntion is the same as
  // the subclass
  double Area() override{
    return 3.14159 * std::pow((width / 2), 2);
  }
};

class Rectangle : public Shape{
protected:
  double height, width;
public:
  Rectangle(double h, double w){
    height = h;
    width = w;
  }
  // Override Area()
  // Marking a method as final means
  // that subclasses that inherit from
  // Rectangle can't override Area()
  double Area() override final{
    return height * width;
  }
};

class Square : public Rectangle{
public:
  Square(double h, double w) :
  Rectangle(h,w){

  }

  /* This would trigger an error
  double Area() override{
      return height * 2;
  }
  */
};

// This function receives Shapes but uses the
// correct Area() automatically
void ShowArea(Shape& shape){
  std::cout << "Area : " << shape.Area() << "\n";
}

int main()
{
  Rectangle rectangle(10,5);
  Circle circle(10);
  ShowArea(rectangle);
  ShowArea(circle);

  Square square(10,10);
  ShowArea(square);

  return 0;
}

// ---------- END ABSTRACT CLASS / OVERRIDE EXAMPLE ----------
