//Jackson Shelby
//Daily Assignment 4.3

#include <iostream>
#include "CarClass.h"
#include "Truck.h"
#include "Motorcycle.h"
#include "Mover.h"

using namespace std;

int main() {

  Mover moverCar(60.5);
  Mover moverTruck(45.0);
  Mover moverMotorcycle(80.2);

  Car car1("Toyota", "Camry", 2020, 5, &moverCar);
  Truck truck1("Toyota", "Tacoma", 2018, 1200.0, &moverTruck);
  Motorcycle motorcycle1("Honda", "CBR600", 2021, 600.0, &moverMotorcycle);


  cout << car1 << endl;
  cout << truck1 << endl;
  cout << motorcycle1 << endl;


  cout << "Car moves: " << car1.move() << endl;
  cout << "Truck moves: " << truck1.move() << endl;
  cout << "Motorcycle moves: " << motorcycle1.move() << endl;

  return 0;
}