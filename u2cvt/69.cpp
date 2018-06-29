// abstract class, override
#include <iostream>
#include <cmath>

class Shape
{
public:
  virtual double Area() = 0;
};

class Rectangle : public Shape
{
protected:
  double height, width;

public:
  Rectangle(double h, double w){
    height = h;
    width = w;
  }

  double Area() override final{
    return height * width;
  }
};

class Circle : public Shape
{
protected:
  double width;

public:
  Circle(double w){
    width = w;
  }

  double Area() override{
    return 3.14159 * std::pow((width / 2), 2);
  }
};


class Square : public Rectangle
{
public:
  Square(double h, double w) : Rectangle(h,w){}
};

void ShowArea(Shape& shape)
{
  std::cout << "Area : " << shape.Area() << "\n";
}

int main()
{
  Rectangle rectangle(10,5);
  ShowArea(rectangle);
  Circle circle(10);
  ShowArea(circle);
  Square square(10,10);
  ShowArea(square);

  return 0;
}
