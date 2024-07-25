#include <iostream>
#include <string>
using namespace std;

// Clases
// Armadura
class Armadura {
private:
  int resistencia;

public:
  Armadura();
  void recibirDanio(int danio);
  int verEstado();
};

// Jugador
class Jugador {
private:
  string nombre;
  int vida;
  Armadura armaduraJugador;

public:
  Jugador(string nombreConstructor);
  string mostrarNombre();
  void modificarNombre(string nuevoNombre);
  int mostrarVida();
  int mostrarResistencia();
  void mostrarVidaYResistencia();
  void recibirDanio(int danio);
};

// Armadura Constructor
Armadura::Armadura() { resistencia = 100; }
// Armadura Metodos
void Armadura::recibirDanio(int danio) { resistencia -= danio; }
int Armadura::verEstado() { return resistencia; }

// Jugador Constructor
Jugador::Jugador(string nombreConstructor) {
  nombre = nombreConstructor;
  vida = 1000;
}
// Jugador Metodos
string Jugador::mostrarNombre() { return nombre; }
void Jugador::modificarNombre(string nuevoNombre) { nombre = nuevoNombre; }
int Jugador::mostrarVida() { return vida; }
int Jugador::mostrarResistencia() { return armaduraJugador.verEstado(); }
void Jugador::mostrarVidaYResistencia() {
  cout << "Armadura: " << Jugador::mostrarResistencia();
  cout << " - ";
  cout << "Vida: " << Jugador::mostrarVida();
  cout << endl << endl;
}
void Jugador::recibirDanio(int danio) {
  if (vida < 0) {
    cout << "RIP" << endl;
    return;
  }

  cout << mostrarNombre() << " recibe " << danio << " pts de danio." << endl;

  // Primero resto el danio a la armadura si esta es mayor a cero
  if (armaduraJugador.verEstado() > 0) {
    if (armaduraJugador.verEstado() >= danio) {
      armaduraJugador.recibirDanio(danio);
    } else {
      int diferencia = danio - armaduraJugador.verEstado();
      armaduraJugador.recibirDanio(armaduraJugador.verEstado());
      vida -= diferencia;
    }
  } else {
    vida -= danio;
  }

  // Si la armadura quedó en cero, entonces paso el danio restante a la vida del
  // jugador

  mostrarVidaYResistencia();

  if (vida < 0) {
    cout << "RIP" << endl;
    return;
  }
}

int main(int argc, char const *argv[]) {
  Jugador jugador1("Pepito");
  cout << "Jugador " << jugador1.mostrarNombre() << " inicia el juego." << endl
       << endl;

  jugador1.mostrarVidaYResistencia();

  cout << endl;

  jugador1.recibirDanio(76);
  jugador1.recibirDanio(190);
  jugador1.recibirDanio(340);
  jugador1.recibirDanio(590);

  return EXIT_SUCCESS;
}