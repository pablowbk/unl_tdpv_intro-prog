#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

// Ejercicio 10
// Genere un arreglo con 100 valores al azar (el rango del los valores es a
// gusto de cada uno). Muestrelo en pantalla y luego inviértalo y vuelta a
// informarlo. Ej: [5, 7, 10, 15, 8, 9] → [9, 8, 15, 10, 7, 5]

int main(int argc, char *argv[]) {
  srand(time(NULL));
  int arreglo[100];

  cout << "Al derecho..." << endl;

  for (int i = 0; i < 100; i++) {
    arreglo[i] = rand() % 100 + 1;
    cout << arreglo[i] << " ";
  }
  cout << endl;
  cout << endl;

  cout << "Al reves..." << endl;
  for (int i = 99; i >= 0; i--) {
    cout << arreglo[i] << " ";
  }

  cout << endl;

  return 0;
}
