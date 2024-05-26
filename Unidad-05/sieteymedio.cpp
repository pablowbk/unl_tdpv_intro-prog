#include <conio.h>
#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  srand(time(NULL));

  int mazo[40][3] = {{0, 1, 1}, {0, 2, 1}, {0, 3, 1},  {0, 4, 1},  {0, 5, 1},
                     {0, 6, 1}, {0, 7, 1}, {0, 10, 1}, {0, 11, 1}, {0, 12, 1},

                     {1, 1, 1}, {1, 2, 1}, {1, 3, 1},  {1, 4, 1},  {1, 5, 1},
                     {1, 6, 1}, {1, 7, 1}, {1, 10, 1}, {1, 11, 1}, {1, 12, 1},

                     {2, 1, 1}, {2, 2, 1}, {2, 3, 1},  {2, 4, 1},  {2, 5, 1},
                     {2, 6, 1}, {2, 7, 1}, {2, 10, 1}, {2, 11, 1}, {2, 12, 1},

                     {3, 1, 1}, {3, 2, 1}, {3, 3, 1},  {3, 4, 1},  {3, 5, 1},
                     {3, 6, 1}, {3, 7, 1}, {3, 10, 1}, {3, 11, 1}, {3, 12, 1}};

  cout << "==========================" << endl;
  cout << "       SIETE Y MEDIO      " << endl;
  cout << "==========================" << endl;
  cout << endl << endl;

  bool esTurnoJugador1 = true;

  int puntajeJugador1 = 0;
  int puntajeJugador2 = 0;
  int sieteYMedio = 750;
  char accionJugador;
  int cartasJugadas = 0;
  bool gameOver = cartasJugadas == 40;

  while (!gameOver) {
    if (esTurnoJugador1) {
      cout << "#### Turno JUGADOR #1 ####  ";
    } else {
      cout << "<<<< Turno JUGADOR #2 >>>>  ";
    }

    accionJugador = '_';

    // repartir una carta:
    while (accionJugador != 'x' && accionJugador != 'c') {
      cout << "'c' para pedir carta, 'x' para plantarse: ";
      cin >> accionJugador;
    }

    if (accionJugador == 'c') {
      // pedir carta
      int indiceMazoRandom, cartaRandom, puntajeCarta;
      indiceMazoRandom = rand() % 40;

      while (mazo[indiceMazoRandom][2] == 0) {
        // cout << "Carta ya jugada, buscando otra..." << endl;
        indiceMazoRandom = rand() % 40;
      }

      cartaRandom = mazo[indiceMazoRandom][1];

      switch (cartaRandom) {
      case 10:
      case 11:
      case 12:
        puntajeCarta = 50;
        break;
      default:
        puntajeCarta = cartaRandom * 100;
        break;
      }

      // sumar puntaje al jugador
      if (esTurnoJugador1) {
        puntajeJugador1 += puntajeCarta;
      } else {
        puntajeJugador2 += puntajeCarta;
      }

      cout << "Carta al azar: " << cartaRandom;
      cout << " - Puntaje total: "
           << (esTurnoJugador1 ? puntajeJugador1 : puntajeJugador2);
      cout << endl;

      // quitar carta del mazo
      mazo[indiceMazoRandom][2] = 0;

      // sumar cartas jugadas
      cartasJugadas++;

      // revisar puntaje del jugador
      if (esTurnoJugador1 && puntajeJugador1 > 750) {
        cout << "-------------------------------------------------" << endl;
        cout << "JUGADOR 1 se ha pasado de 7 y medio!! PERDISTEEEE" << endl;
        cout << "-------------------------------------------------" << endl;
        gameOver = true;

      } else if (puntajeJugador2 > 750) {
        cout << "-------------------------------------------------" << endl;
        cout << "JUGADOR 2 se ha pasado de 7 y medio!! PERDISTEEEE" << endl;
        cout << "-------------------------------------------------" << endl;
        gameOver = true;
      }
    } else {
      // plantarse
      cout << "Jugador " << (esTurnoJugador1 ? "1" : "2")
           << " se ha planta con: "
           << (esTurnoJugador1 ? puntajeJugador1 : puntajeJugador2);
      cout << endl;

      // cambiar de turno
      if (esTurnoJugador1) {
        esTurnoJugador1 = false;
      } else {
        if (puntajeJugador2 >= puntajeJugador1) {
          cout << "===========================" << endl;
          cout << "<<<< GANADOR JUGADOR 2 >>>>" << endl;
          cout << "===========================" << endl;
        }
        gameOver = true;
      }
    }

    cout << endl << endl;

    // revisar si quedan cartas
    if (cartasJugadas == 40) {
      gameOver = true;
      cout << "No hay mas cartas por jugar!!" << endl;
    }
  }

  return 0;
}