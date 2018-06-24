#include <iostream>

using namespace std;


class Animal
{
public:
	void getFamily() { cout << "We are Animals" << endl; }

	virtual void getClass() { cout << "I'm an Animal" << endl; }
};


class Dog : public Animal
{
public:
	void getClass() { cout << "I'm a Dog" << endl; }
};


int main()
{
	Animal *animal = new Animal;
	Animal *dog = new Dog;

	animal->getClass();
	dog->getClass();

	return 0;
}
