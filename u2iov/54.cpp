#include <iostream>

using namespace std;


class Car
{
	public :
		virtual void getNumWheels() = 0;
		virtual void getNumDoors() = 0;
};

class StationWagon : public Car
{
	public :
		void getNumWheels() { cout << "Station Wagon has 4 Wheels" << endl; }
		void getNumDoors() { cout << "Station Wagon has 4 Doors" << endl; }
		StationWagon() { }
		~StationWagon();

};

int main()
{
	Car* stationWagon = new StationWagon();

	stationWagon -> getNumWheels();

	return 0;
}
