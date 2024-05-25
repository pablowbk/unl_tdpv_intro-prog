#include <iostream>

using namespace std;

// Ejercicio 3
// Genera un arreglo de 100 elementos con valores que vayan progresivamente del
// 1 al 100 (1, 2, 3, 4, … 100). Almacena en otro arreglo solo aquellos valores
// pares y en otro solo aquellos impares. Al final deben quedar dos arreglos de
// 50 valores cada uno. Informa el contenido de ambos arreglos.

int main(int argc, char *argv[]) {
  int valores[100];
  int pares[50];
  int impares[50];

  cout << "Valores generados: ";

  for (int i = 0; i < 100; i++) {
    valores[i] = i + 1;
    cout << valores[i] << " ";
    if (valores[i] % 2 == 0) {
      pares[i / 2] = valores[i];
    } else {
      impares[i / 2] = valores[i];
    }
  }

  cout << endl;
  cout << endl;

  cout << "Valores PARES: ";
  for (int i = 0; i < 50; i++) {
    cout << pares[i] << " ";
  }

  cout << endl;
  cout << endl;

  cout << "Valores IMPARES: ";
  for (int i = 0; i < 50; i++) {
    cout << impares[i] << " ";
  }

  cout << endl;

  return 0;
}
