//Jackson Shelby
//Daily Assignment 4.3

#include <iostream>
#include "CarClass.h"
#include "Truck.h"
#include "Motorcycle.h"
#include "Mover.h"

using namespace std;

int main() {
  // Create some Mover objects
  Mover moverCar(60.5);
  Mover moverTruck(45.0);
  Mover moverMotorcycle(80.2);

  // Create vehicles with movers
  Car car1("Toyota", "Camry", 2020, 5, &moverCar);
  Truck truck1("Ford", "F-150", 2018, 1200.0, &moverTruck);
  Motorcycle motorcycle1("Honda", "CBR600", 2021, 600.0, &moverMotorcycle);

  // Print info and how they move
  cout << car1 << std::endl;
  cout << truck1 << std::endl;
  cout << motorcycle1 << std::endl;

  // Call move() directly
  cout << "Car moves: " << car1.move() << std::endl;
  cout << "Truck moves: " << truck1.move() << std::endl;
  cout << "Motorcycle moves: " << motorcycle1.move() << std::endl;

  return 0;
}