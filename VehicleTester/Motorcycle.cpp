#include "Motorcycle.h"

// Default constructor
Motorcycle::Motorcycle() : make(""), model(""), year(0), engineCC(0.0) {}

// Parameterized constructor
Motorcycle::Motorcycle(std::string make, std::string model, int year, double engineCC, Mover* mover)
  : make(make), model(model), year(year), engineCC(engineCC) {
}

// Copy constructor
Motorcycle::Motorcycle(const Motorcycle& otherMotorcycle) {
  make = otherMotorcycle.make;
  model = otherMotorcycle.model;
  year = otherMotorcycle.year;
  engineCC = otherMotorcycle.engineCC;
}

// Getter for engineCC
double Motorcycle::getEngineCC() const {
  return engineCC;
}

// Setter for engineCC
void Motorcycle::setEngineCC(double engineCC) {
  this->engineCC = engineCC;
}

// Assignment operator
Motorcycle& Motorcycle::operator=(const Motorcycle& otherMotorcycle) {
  if (this != &otherMotorcycle) {
    make = otherMotorcycle.make;
    model = otherMotorcycle.model;
    year = otherMotorcycle.year;
    engineCC = otherMotorcycle.engineCC;
  }
  return *this;
}

string Motorcycle::move()
{
  if (getMover()) return getMover()->move();
  return "No mover.";
}

// Output operator
std::ostream& operator<<(std::ostream& strm, Motorcycle& motorcycle) {
  strm << " A " << motorcycle.getMake() << " " << motorcycle.getModel() << " "
    << motorcycle.getYear() << " " << motorcycle.getEngineCC();

  if (motorcycle.getMover()) {
    strm << " " << motorcycle.move();
  }
  else {
    strm << " No mover";
  }
  return strm;
}