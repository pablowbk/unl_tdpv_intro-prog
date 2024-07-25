#include <iostream>
using namespace std;

class Vehiculo {

public:
  int ruedas;
  Vehiculo(int r) { ruedas = r; };
};

class Auto : public Vehiculo {

public:
  Auto(int rd)
      : Vehiculo(rd){

        };
};

int main(int argc, char *argv[]) {

  Auto A1(10);
  return 0;
}
