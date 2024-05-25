#include <iostream>

using namespace std;

// Ejercicio 8
// Realiza un arreglo que al recorrerlo por fila y columna muestre en pantalla
// la siguiente grilla. Deben usarse sólo los índices de la estructura para
// llenar el arreglo

int main(int argc, char *argv[]) {
  const int dimensionX = 6; // const??
  const int dimensionY = 6;

  int arreglo[dimensionY][dimensionX];

  for (int i = 0; i < dimensionY; i++) {
    for (int j = 0; j < dimensionX; j++) {
      cout << j << " ";
    }
    cout << endl;
  }

  return 0;
}
