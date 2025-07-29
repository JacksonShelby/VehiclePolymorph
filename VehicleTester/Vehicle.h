#pragma once
#include <iostream>
#include "Mover.h"
using namespace std;
class Vehicle

	/*
	* Vehicle
make: string
model: string
year: int

Vehicle()
Vehicle(make: string, model: string, year:int)
Vehicle(otherVehicle: Vehicle&)

getMake():string
getModel():string
getYear():string
setMake(make: string): void
setModel(model:string):void
setYear(year:int):void

operator=(otherVehicle Vehicle&): Vehicle&
friend operator<<(strm: ostream&, vehicle: Vehicle&): ostream&

	*/


{
private:
	string make;
	string model;
	int year;
	Mover* mover;

public:
	// constructors
	Vehicle();
	Vehicle(string make, string model, int year);
	Vehicle(Vehicle& otherVehicle);
	Vehicle(Mover* mover);

	string getMake();
	string getModel();
	int getYear();
	void setMake(string make);
	void setModel(string model);
	void setYear(int year);

	Mover* getMover() const;
	void setMover(Mover* mover);

	virtual string move() = 0;

	Vehicle& operator=(Vehicle& otherVehicle);
	friend ostream& operator<<(ostream& strm, Vehicle& vehicle);

};
