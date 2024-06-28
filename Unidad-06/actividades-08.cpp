#include <iostream>

using namespace std;

// Ejercicio 8
// Hacer una función que sume todas las veces que aparece un número pasado
// por parámetro en un arreglo.
// Ej:
// entrada: {2,5,4,7,2,1,5,2}, y 2 (cortar +y cuantas números 2 hay
// salida : 6
// Ayuda. Pueden utilizar la función anterior como parte del proceso.

int sumarOcurrencias(int arreglo[], int arrSize, int numero);

int main(int argc, char *argv[]) {
  int arreglo[] = {2, 5, 4, 7, 2, 1, 5, 2};
  int numero = 2;
  int arrSize = sizeof(arreglo) / sizeof(arreglo[0]);

  cout << "Suma de ocurrencias de '" << numero
       << "' en el arreglo: " << sumarOcurrencias(arreglo, arrSize, numero)
       << endl;

  return 0;
}

int sumarOcurrencias(int arreglo[], int arrSize, int numero) {
  int contador = 0;

  for (int i = 0; i < arrSize; i++) {
    if (arreglo[i] == numero)
      contador++;
  }

  return contador * numero;
  // int sumaOcurrencias = 0;

  // for (int i = 0; i < arrSize; i++) {
  //   if (arreglo[i] == numero)
  //     sumaOcurrencias += arreglo[i];
  // }

  // return sumaOcurrencias;
}