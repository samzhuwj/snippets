// friend class
#include <iostream>

class Customer
{
private:
  friend class GetCustomerData;
  std::string name;

public:
  Customer(std::string name){
    this->name = name;
  }
};

class GetCustomerData
{
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
