#include <iostream>
using namespace std;

class Vehiculo {

private:
  int velocidad;

protected:
  int aumentarVelocidad() {
    if (velocidad < 100) {
      velocidad++;
    }
  }

public:
  bool verVelocidad() { cout << "velocidad:" << velocidad << endl; };
  Vehiculo() { velocidad = 0; };
};

class Auto : public Vehiculo {

public:
  void avanzar() { aumentarVelocidad(); };
  Auto(){};
};

int main(int argc, char *argv[]) {
  Auto A1;
  A1.avanzar();
  A1.verVelocidad();

  return 0;
}