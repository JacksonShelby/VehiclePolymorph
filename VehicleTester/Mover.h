#ifndef MOVER
#define MOVER
#include <iostream>
#include <string>
using namespace std;

class Mover
{
  private:
    double mph;

  public:
    Mover();
    Mover(double mph);
    virtual string move();
    double getMPH();
    void setMPH(double mph);
};

#endif