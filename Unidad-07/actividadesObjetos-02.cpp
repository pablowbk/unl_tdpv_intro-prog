#include <iostream>
#include <string>
using namespace std;

class Armadura {
  int resistencia;

public:
  Armadura();
  void recibirDanio(int danio);
};

Armadura::Armadura() { resistencia = 100; }

void Armadura::recibirDanio(int danio) {}

int main(int argc, char const *argv[]) { return EXIT_SUCCESS; }