#include <iostream>

using namespace std;

class Flor {
protected:
  int petalosFlor;

public:
  Flor(int petalosConstructor) { petalosFlor = petalosConstructor; };
};

class Margarita : public Flor {
public:
  int petalos;
  Margarita(int petalosMargarita) : Flor(petalosMargarita) {
    petalos = petalosMargarita;
  };
};

int main(int argc, char *argv[]) {
  Margarita miMargarita(4);
  cout << miMargarita.petalos;
  return 0;
}