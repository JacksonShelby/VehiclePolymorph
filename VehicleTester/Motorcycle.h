#ifndef MOTORCYCLE_H
#define MOTORCYCLE_H

#include <iostream>
#include <string>
#include "Vehicle.h"
class Motorcycle : public Vehicle {
private:
  std::string make;
  std::string model;
  int year;
  double engineCC;

public:
  // Constructors
  Motorcycle();
  Motorcycle(std::string make, std::string model, int year, double engineCC, Mover* mover);
  Motorcycle(const Motorcycle& otherMotorcycle);

  // Getter and Setter
  double getEngineCC() const;
  void setEngineCC(double engineCC);

  // Assignment operator
  Motorcycle& operator=(const Motorcycle& otherMotorcycle);

  string move() override;

  // Friend function for output operator
  friend std::ostream& operator<<(std::ostream& strm, Motorcycle& motorcycle);
};

#endif // MOTORCYCLE_H 