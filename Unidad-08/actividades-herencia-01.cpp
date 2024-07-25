#include <iostream>

using namespace std;

class Flor {
public:
  int petalos;
  Flor(int petalosConstructor) { petalos = petalosConstructor; };
};

class Margarita : public Flor {
public:
  Margarita(int petalosMargarita) : Flor(petalosMargarita){};
};

int main(int argc, char *argv[]) {
  Margarita miMargarita(4);
  cout << miMargarita.petalos;
  return 0;
}