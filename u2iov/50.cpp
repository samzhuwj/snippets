#include <iostream>

using namespace std;

class Animal
{
private:
	int height;
	int weight;
	string name;

	static int numOfAnimals;

public:
	int getHeight(){return height;}
	int getWeight(){return weight;}
	string getName(){return name;}
	void setHeight(int cm){ height = cm; }
	void setWeight(int kg){ weight = kg; }
	void setName(string dogName){ name = dogName; }

	void setAll(int, int, string);

	Animal(int, int, string);

	~Animal();

	Animal();

	static int getNumOfAnimals() { return numOfAnimals; }

	void toString();
};

int Animal::numOfAnimals = 0;

void Animal::setAll(int height, int weight, string name)
{
	this -> height = height;
	this -> weight = weight;
	this -> name = name;
	Animal::numOfAnimals++;
}

Animal::Animal(int height, int weight, string name)
{
	this -> height = height;
	this -> weight = weight;
	this -> name = name;
}

Animal::~Animal()
{
	cout << "Animal " << this -> name << " destroyed" << endl;
}

Animal::Animal()
{
	numOfAnimals++;
}

void Animal::toString()
{
	cout << this -> name << " is " << this -> height << " cms tall and "
  << this -> weight << " kgs in weight" << endl;
}

int main()
{
	Animal tom(36, 15, "Tom");

	cout << tom.getName() << " is " << tom.getHeight() << " cms tall and "
		<< tom.getWeight() << " kgs in weight" << endl;

  return 0;
}
