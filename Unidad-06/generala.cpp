#include <conio.h>
#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

// EJERCICIO a realizar
// Hacer una tirada del juego de Generala (mano a mano) y mostrar quien ganó
// la mano.
// Pueden implementar cada uno de los juegos como funciones y a partir de la
// tirada realizada, retornar los puntos obtenidos, aquel puntaje más alto será
// el juego con el que nos quedaremos para sumar puntos para la mano.

void presentacion();

void tirarDados(bool &esTurnoJugador, int &puntajeJugador,
                int &puntajeComputadora);

void ordenarTirada(int tirada[]);

int validarTirada(int tirada[]);

int validarPuntaje(int tirada[], char juego);

void declararGanador(int puntajeJugador, int puntajeComputadora);

void finalizarJuego(int &puntajeJugador, int &puntajeComputadora);

int main(int argc, char *argv[]) {
  srand(time(NULL));

  presentacion();

  bool esTurnoJugador = true;

  int puntajeJugador = 0;
  int puntajeComputadora = 0;

  while (true) {
    if (_kbhit()) {
      char ch = _getch();

      if (ch == ' ') {
        cout << "Tirada " << (esTurnoJugador ? "Jugador: " : "Computadora: ");
        tirarDados(esTurnoJugador, puntajeJugador, puntajeComputadora);
        cout << endl;
      } else {
        finalizarJuego(puntajeJugador, puntajeComputadora);
        return 0;
      }
    }
  }

  return 0;
}

void tirarDados(bool &esTurnoJugador, int &puntajeJugador,
                int &puntajeComputadora) {
  int tirada[5] = {};
  for (int i = 0; i < 5; i++) {
    int dado = rand() % 6 + 1;
    tirada[i] = dado;
  }

  // muestro tirada original
  for (int i = 0; i < 5; i++) {
    cout << tirada[i] << " ";
  }
  cout << "=> ";

  ordenarTirada(tirada);

  // muestro tirada ordenada
  for (int i = 0; i < 5; i++) {
    cout << tirada[i] << " ";
  }

  if (esTurnoJugador) {

    puntajeJugador += validarTirada(tirada);
  } else {
    puntajeComputadora += validarTirada(tirada);
  }

  cout << "...presione ESPACIO para que juegue "
       << (esTurnoJugador ? "la COMPUTADORA" : "el JUGADOR") << "..." << endl;

  // alternar turno
  esTurnoJugador = !esTurnoJugador;
}

void ordenarTirada(int tirada[]) {
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 4; j++) {
      if (tirada[j] > tirada[j + 1]) {
        int mayor = tirada[j];
        tirada[j] = tirada[j + 1];
        tirada[j + 1] = mayor;
      }
    }
  }
}

int validarTirada(int tirada[]) {
  int puntajesTirada[10][2] = {{'1', 0}, {'2', 0}, {'3', 0}, {'4', 0},
                               {'5', 0}, {'6', 0}, {'e', 0}, {'f', 0},
                               {'p', 0}, {'g', 0}};
  int puntajeMasAlto = 0;
  for (int i = 0; i < 10; i++) {
    puntajesTirada[i][1] = validarPuntaje(tirada, puntajesTirada[i][0]);
  }

  cout << endl;
  cout << "----------------" << endl;
  cout << "Todo al 1: " << validarPuntaje(tirada, '1') << endl;
  cout << "Todo al 2: " << validarPuntaje(tirada, '2') << endl;
  cout << "Todo al 3: " << validarPuntaje(tirada, '3') << endl;
  cout << "Todo al 4: " << validarPuntaje(tirada, '4') << endl;
  cout << "Todo al 5: " << validarPuntaje(tirada, '5') << endl;
  cout << "Todo al 6: " << validarPuntaje(tirada, '6') << endl;
  cout << "Escalera: " << validarPuntaje(tirada, 'e') << endl;
  cout << "Full: " << validarPuntaje(tirada, 'f') << endl;
  cout << "Poker: " << validarPuntaje(tirada, 'p') << endl;
  cout << "Generala: " << validarPuntaje(tirada, 'g') << endl;
  cout << "----------------" << endl;

  for (int i = 0; i < 10; i++) {
    if (puntajesTirada[i][1] > puntajeMasAlto)
      puntajeMasAlto = puntajesTirada[i][1];
  }

  return puntajeMasAlto;
}

int validarPuntaje(int tirada[], char juego) {
  int puntaje = 0;
  bool esEscalera = false;
  bool esFull = false;
  bool esPoker = false;
  bool esGenerala = false;
  int PUNTOS_ESCALERA = 20;
  int PUNTOS_FULL = 30;
  int PUNTOS_POKER = 40;
  int PUNTOS_GENERALA = 50;

  switch (juego) {
  case '1':                // Todo al n
  case '2':                // Todo al 2
  case '3':                // Todo al 3
  case '4':                // Todo al 4
  case '5':                // Todo al 5
  case '6': {              // Todo al 6
    int num = juego - '0'; // parseamos juego a int
    for (int i = 0; i < 5; i++) {
      if (tirada[i] == num)
        puntaje += num;
    }
    break;
  }
  case 'e': { // Escalera
    int temp = 1;
    for (int i = 0; i < 4; i++) {
      if (tirada[i] + 1 == tirada[i + 1])
        temp++;
    }
    if (temp == 5)
      esEscalera = true;
    puntaje = esEscalera ? PUNTOS_ESCALERA : 0;
    return puntaje;
  }
  case 'f': { // Full
    if ((tirada[0] == tirada[1] && tirada[1] == tirada[2] &&
         tirada[3] == tirada[4]) ||
        (tirada[0] == tirada[1] && tirada[2] == tirada[3] &&
         tirada[3] == tirada[4])) {
      esFull = true;
    }
    puntaje = esFull ? PUNTOS_FULL : 0;
    return puntaje;
  }
  case 'p': { // Poker
    if ((tirada[0] == tirada[1] && tirada[1] == tirada[2] &&
         tirada[2] == tirada[3]) ||
        (tirada[1] == tirada[2] && tirada[2] == tirada[3] &&
         tirada[3] == tirada[4])) {
      esPoker = true;
    }
    puntaje = esPoker ? PUNTOS_POKER : 0;
    return puntaje;
  }
  case 'g': { // Generala
    int dado = tirada[0];
    esGenerala = true;
    for (int i = 1; i < 5; i++) {
      if (tirada[i] != dado)
        esGenerala = false;
    }
    puntaje = esGenerala ? PUNTOS_GENERALA : 0;
    return puntaje;
  }
  default:
    puntaje = 0;
    break;
  }
  return puntaje;
}

void presentacion() {
  cout << "==========================" << endl;
  cout << "         GENERALA         " << endl;
  cout << "==========================" << endl;
  cout << endl;

  cout << "Presione ESPACIO para hacer una tirada." << endl;
  cout << "Cualquier otra tecla para abandonar." << endl;
}

void finalizarJuego(int &puntajeJugador, int &puntajeComputadora) {
  cout << endl << "===== PUNTAJE FINAL =====" << endl;
  cout << "Puntos JUGADOR => " << puntajeJugador << endl;
  cout << "Puntos COMPUTADORA => " << puntajeComputadora << endl;

  declararGanador(puntajeJugador, puntajeComputadora);
  cout << endl << "===== FIN DEL JUEGO =====" << endl;
}

void declararGanador(int puntajeJugador, int puntajeComputadora) {
  if (puntajeJugador > puntajeComputadora) {
    cout << endl << "Gana el JUGADOR!!" << endl;
  } else if (puntajeComputadora > puntajeJugador) {
    cout << endl << "Gana la COMPUTADORA!!" << endl;
  } else {
    cout << endl << "Es un EMPATE!!" << endl;
  }
}