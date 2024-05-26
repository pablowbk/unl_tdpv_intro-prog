#include <conio.h>
#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {

  srand(time(NULL));

  bool turnoJugador = true;
  bool turnoBanca = true;
  int mazo[4][10];
  bool salioCarta[4][10];
  float puntajeCarta[4][10];
  float sumatoria = 0;
  float sumatoriaBanca = 0;
  bool juegoActivo = true;

  while (juegoActivo) {

    for (int j = 0; j < 4; j++) {
      for (int i = 0; i < 10; i++) {
        if (i > 6) {
          mazo[j][i] = i + 3;
          puntajeCarta[j][i] = 0.5;
        } else {
          mazo[j][i] = i + 1;
          puntajeCarta[j][i] = i + 1;
        }
        salioCarta[j][i] = false;
      }
    }

    cout << "Elija sacar una carta s/n" << endl;

    while (turnoJugador) {

      if (kbhit()) {
        char tecla = getch();
        switch (tecla) {
        case 's': {

          int palo = 0;
          int nro = 0;

          do {
            palo = rand() % 4;
            nro = rand() % 10;

          } while (salioCarta[palo][nro]);

          int carta = 0;
          carta = mazo[palo][nro];
          cout << "ud saco la carta: " << carta << endl;
          sumatoria += puntajeCarta[palo][nro];
          cout << "Acumula: " << sumatoria << endl;
          salioCarta[palo][nro] = true;

          if (sumatoria < 7.6) {
            cout << "Desea sacar otra carta? (s/n)" << endl;
          } else {
            cout << "Te pasaste" << endl;
            turnoJugador = false;
          }
        } break;
        case 'n': // continuar
          cout << "salir" << endl;
          turnoJugador = false;
          break;
        }
      }
    }

    cout << "El jugador acumula " << sumatoria << " de puntos" << endl;

    if (sumatoria < 7.6) {
      cout << "Turno banca: " << endl;
    }

    while (turnoBanca && sumatoria < 7.6) {

      int palo = 0;
      int nro = 0;

      do {
        palo = rand() % 4;
        nro = rand() % 10;

      } while (salioCarta[palo][nro]);

      int carta = 0;
      carta = mazo[palo][nro];
      cout << "salio la carta: " << carta << endl;
      sumatoriaBanca += puntajeCarta[palo][nro];
      cout << "Banca acumula: " << sumatoriaBanca << endl;
      salioCarta[palo][nro] = true;

      if (sumatoriaBanca > sumatoria + .1) {
        turnoBanca = false;
      }
    }

    if (sumatoriaBanca < 7.6 || sumatoria > 7.6) {
      // banca gana
      cout << "gana la banca!" << endl;
    } else {
      cout << "ganaste!" << endl;
    }

    cout << "Seguir jugando? (s/n)" << endl << endl;
    bool volverAJugar = true;

    while (volverAJugar) {

      if (kbhit()) {
        char tecla = getch();
        switch (tecla) {
        case 's': {
          sumatoria = 0;
          sumatoriaBanca = 0;
          volverAJugar = false;
          turnoJugador = true;
          turnoBanca = true;
        } break;
        case 'n': {
          cout << "Gracias por jugar!" << endl;
          juegoActivo = false;
        }
        }
      }
    }
  }

  return 0;
}
