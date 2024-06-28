#include <conio.h>
#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

// Ejercicio 2
// Hacer una función que permita tirar un dado de N caras. Ej:
// int dado ( int cantCaras)

int tirarDado(int caras = 6);

int main(int argc, char *argv[]) {
  srand(time(NULL));
  int tiradas = 0;
  int tecla;
  int carasUsuario = 0;

  cout << "Realice una tirada de dado presionando ENTER" << endl;
  cout << "ESC para abandonar." << endl << endl;

  while (carasUsuario < 1) {
    cout << "Ingrese numero de caras del dado (mayor a cero): ";
    cin >> carasUsuario;
  }

  cout << "Esperando tirada #" << tiradas + 1 << "..." << endl;

  while (true) {
    if (kbhit()) {
      tecla = getch();

      if (tecla == 13) {
        // realizar tirada
        cout << "salio el: " << tirarDado(carasUsuario) << endl;
        tiradas++;
        if (tiradas <= 9)
          cout << "Esperando tirada #" << tiradas + 1 << "..." << endl;
      }
      if (tecla == 27) {
        cout << "Gracias por jugar. Adios!" << endl;
        return 0;
      }
    }
  }

  return 0;
}

int tirarDado(int caras) { return rand() % caras + 1; }
