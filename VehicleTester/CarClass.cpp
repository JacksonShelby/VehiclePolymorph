#include "CarClass.h"




Car::Car() : Vehicle(){
	passengerCapacity = 0;

}

Car::Car(string make, string model, int year, int passengerCapacity, Mover* mover) :
	Vehicle( make,  model, year), passengerCapacity(passengerCapacity) {
	
}

Car::Car(Car& otherCar) : Vehicle(otherCar), passengerCapacity(otherCar.passengerCapacity)  {
	
}

int Car::getPassengerCapacity() {
	return passengerCapacity;
}

void Car::setPassengerCapacity(int passengerCapacity) {
	this->passengerCapacity = passengerCapacity;
}


Car& Car::operator=(Car& otherCar) {
	if (this != &otherCar) {
		this->passengerCapacity = otherCar.passengerCapacity;
	}
	return *this;
}

string Car::move()
{
	if (getMover()) return getMover()->move();
	return "No mover.";
}

ostream& operator<<(ostream& strm, Car& car) {
	strm << "A " << car.getYear() << " "
		<< car.getMake() << " "
		<< car.getModel() << " " << car.getPassengerCapacity();

	if (car.getMover()) {
		strm << " " << car.move();
	}
	else {
		strm << " No mover";
	}
	return strm;
}