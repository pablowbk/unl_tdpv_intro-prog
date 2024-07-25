#include <iostream>

using namespace std;

class Flor {
public:
  int petalos;
  Flor(int petalosConstructor) { petalos = petalosConstructor; };

protected:
  void regar();
};

void Flor::regar() { cout << "Regando la flor." << endl; }

class Margarita : public Flor {
public:
  Margarita(int petalosMargarita) : Flor(petalosMargarita){};
};

class Rosa : public Flor {
public:
  Rosa(int petalosRosa) : Flor(petalosRosa){};
  void regar();
};

void Rosa::regar() { cout << "Regando la ROSA" << endl; }

int main(int argc, char *argv[]) {
  Margarita miMargarita(4);
  Rosa miRosa(5);
  //   cout << miMargarita.petalos;
  miMargarita.regar();
  miRosa.regar();

  return 0;
}