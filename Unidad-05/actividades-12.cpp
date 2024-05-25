#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

// Ejercicio 12
// Genere dos arreglos con 20 valores al azar entre 1 y 10. Genere un tercer
// arreglo que sea el resultado de la suma de ambos arreglos. La suma de
// vectores es elemento a elemento, ejemplo:
// [5, 8, 4, 2] y [3, 4, 2, 9] → [5+3, 8+4, 4+2, 2+9] → [8, 12, 6, 11]

int main(int argc, char *argv[]) {
  srand(time(NULL));

  int arreglo1[20];
  int arreglo2[20];

  // asignamos valores random entre 1 y 10 a los arreglos
  for (int i = 0; i < 20; i++) {
    arreglo1[i] = rand() % 10 + 1;
    arreglo2[i] = rand() % 10 + 1;
  }

  cout << "Arreglo #1: ";
  for (int i = 0; i < 20; i++) {
    cout << arreglo1[i] << " ";
  }

  cout << endl;

  cout << "Arreglo #2: ";
  for (int i = 0; i < 20; i++) {
    cout << arreglo2[i] << " ";
  }

  cout << endl;

  cout << "Arreglo SUMA: ";
  for (int i = 0; i < 20; i++) {
    cout << arreglo1[i] + arreglo2[i] << " ";
  }

  cout << endl;

  return 0;
}
