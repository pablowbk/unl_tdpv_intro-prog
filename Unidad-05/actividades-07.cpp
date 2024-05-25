#include <iostream>

using namespace std;

// Ejercicio 7
// Realiza un arreglo que al recorrerlo por fila y columna muestre en pantalla
// la siguiente grilla:
// - - - - - - - - - -
// - - - - - - - - - -
// - - - - - - - - - -
// - - - - - - - - - -
// - - - - - - - - - -
// - - - - - - - - - -
// - - - - - - - - - -
// - - - - - - - - - -
// - - - - - - - - - -
// - - - - - - - - - -
// Si no se ve bien, son 10 guiones en 10 filas:

int main(int argc, char *argv[]) {
  const int dimensionX = 10; // const??
  const int dimensionY = 10;

  int arreglo[dimensionY][dimensionX];

  for (int i = 0; i < dimensionY; i++) {
    for (int j = 0; j < dimensionX; j++) {
      cout << " - ";
    }
    cout << endl;
  }

  return 0;
}
