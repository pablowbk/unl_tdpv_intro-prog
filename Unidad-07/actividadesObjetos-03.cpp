#include <iostream>
#include <string>
using namespace std;

class Armadura {
  int resistencia;

public:
  Armadura();
  void recibirDanio(int danio);
  void mostrarResistencia();
};

Armadura::Armadura() { resistencia = 100; }
void Armadura::recibirDanio(int danio) { resistencia -= danio; }
void Armadura::mostrarResistencia() {
  cout << "La resistencia actual es: " << resistencia << endl;
}

class Jugador {
  string nombre;

public:
  Armadura armadura;
  Jugador(string nombreConstructor);
  void mostrarNombre();
  void modificarNombre(string nuevoNombre);
};

Jugador::Jugador(string nombreConstructor) { nombre = nombreConstructor; }
void Jugador::mostrarNombre() { cout << "Esta jugando: " << nombre << endl; }
void Jugador::modificarNombre(string nuevoNombre) { nombre = nuevoNombre; }

int main(int argc, char const *argv[]) {
  Jugador jugador1("Jugador 1");
  jugador1.mostrarNombre();

  jugador1.armadura.mostrarResistencia();
  jugador1.armadura.recibirDanio(25);
  jugador1.armadura.mostrarResistencia();

  return EXIT_SUCCESS;
}