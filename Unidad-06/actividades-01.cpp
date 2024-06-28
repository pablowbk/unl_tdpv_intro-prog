#include <climits>
#include <iostream>

using namespace std;

// Ejercicio 1
// Hacer una función que informe el máximo valor de un arreglo pasado por
// parámetro.
// Entrada: {2,5,4,9,2,9,5,0}, largo:8
// salida : 9

int mostrarMaximo(int arrayEntrada[], int tamanoArray) {
  int maximo = INT_MIN;
  for (int i = 0; i < tamanoArray; i++) {
    if (arrayEntrada[i] > maximo)
      maximo = arrayEntrada[i];
  }

  return maximo;
}

int main(int argc, char *argv[]) {
  int numeros[8] = {2, 5, 4, 9, 2, 9, 5, 0};
  cout << sizeof(numeros) / sizeof(numeros[0]) << endl;
  cout << mostrarMaximo(numeros, sizeof(numeros) / sizeof(numeros[0])) << endl;
  return 0;
}
