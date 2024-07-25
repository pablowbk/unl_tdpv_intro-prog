#include <iostream>
#include <string>
using namespace std;

class Jugador {
public:
  string nombre;
  Jugador(string nombreConstructor);
  void mostrar();
};

// constructor
Jugador::Jugador(string nombreConstructor) { nombre = nombreConstructor; }
// métodos
void Jugador::mostrar() { cout << "Nombre: " << nombre << endl; }

int main(int argc, char const *argv[]) {
  Jugador Jugador1("Juan");
  Jugador1.mostrar();
  return EXIT_SUCCESS;
}