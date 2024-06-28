#include <iostream>

using namespace std;

// Ejercicio 5
// Hacer una función que calcule el promedio de un conjunto de valores dentro de
// un arreglo. Pueden pasarse los parámetros necesarios. Ej: entrada
// {2,4,7,1,2,3,5,7} salida : 3.875 Ayuda, pueden agregar los parámetros de
// entrada que necesiten

float promediar(int arregloNumeros[], int cantidad);

int main(int argc, char *argv[]) {
  int numeros[8] = {2, 4, 7, 1, 2, 3, 5, 7};

  cout << "Promedio: " << promediar(numeros, 8) << endl;

  return 0;
}

float promediar(int arregloNumeros[], int cantidad) {
  float promedio;
  float total = 0.0;

  for (int i = 0; i < cantidad; i++) {
    total += arregloNumeros[i];
  }

  promedio = total / cantidad;

  return promedio;
}