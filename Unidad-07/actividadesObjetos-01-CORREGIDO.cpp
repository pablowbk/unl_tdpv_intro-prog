#include <iostream>
#include <string>
using namespace std;

class Jugador {
  string nombre;

public:
  Jugador(string nombreConstructor);
  void mostrarNombre();
  void modificarNombre(string nuevoNombre);
};

Jugador::Jugador(string nombreConstructor) { nombre = nombreConstructor; }
void Jugador::mostrarNombre() { cout << "Nombre Jugador: " << nombre << endl; }
void Jugador::modificarNombre(string nuevoNombre) { nombre = nuevoNombre; }

int main(int argc, char const *argv[]) {
  Jugador jugador1("Juan");
  jugador1.mostrarNombre();

  cout << "Elija nuevo nombre: ";
  string nuevoNombre;
  cin >> nuevoNombre;
  jugador1.modificarNombre(nuevoNombre);
  jugador1.mostrarNombre();

  return EXIT_SUCCESS;
}