// template classes
#include <iostream>

template <typename T, typename U>
class Person
{
public:
  T height;
  U weight;
  static int numOfPeople;

  Person(T h, U w){
    height = h, weight = w;
    numOfPeople++;
  }

  void GetData(){
    std::cout << "Height: " << height << " and Weight : " << weight << "\n";
  }
};

template<typename T, typename U> int Person<T, U>::numOfPeople;

int main()
{
  Person<double, int> mikeTyson (5.83, 216);
  mikeTyson.GetData();
  std::cout << "Number of people: " << mikeTyson.numOfPeople << "\n";

  return 0;
}
