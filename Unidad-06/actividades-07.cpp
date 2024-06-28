#include <iostream>

using namespace std;

// Ejercicio 7
// Hacer una función que cuente cuantas ocurrencias de un número (pasado por
// parámetro) hay en un arreglo.
// Ej:
// entrada: {2,5,4,7,2,1,5,2}, y 2 (cortar cuantas números 2 hay)
// salida : 3

int contarOcurrencias(int arreglo[], int arrSize, int numero);

int main(int argc, char *argv[]) {
  int arreglo[] = {2, 5, 4, 7, 2, 1, 5, 2};
  int numero = 2;
  int arrSize = sizeof(arreglo) / sizeof(arreglo[0]);

  cout << "Ocurrencias de '" << numero
       << "' en el arreglo: " << contarOcurrencias(arreglo, arrSize, numero)
       << endl;

  return 0;
}

int contarOcurrencias(int arreglo[], int arrSize, int numero) {
  int ocurrencias = 0;

  for (int i = 0; i < arrSize; i++) {
    if (arreglo[i] == numero)
      ocurrencias++;
  }

  return ocurrencias;
}