#include <climits>
#include <iostream>

using namespace std;

// Laboratorio 05
// Generar un código que permita ingresar 5 valores y los retorne ordenados de
// menor a mayor. Ejemplo: Ingreso: 4 12 3 56 1 Resultado: 1 3 4 12 56 Como
// venimos trabajando, no mostrar en pantalla ningún otro mensaje salvo el
// resultado. Los números deben ser separados por un espacio " ", no importa si
// el último número tiene un espacio atrás. AYUDA: Utilicen los recursos que ya
// están brindados en el aula.

void ordenarValores(int valores[], int valoresSize);

int main(int argc, char *argv[]) {
  int valoresSize = 5;
  int valores[5] = {};
  for (int i = 0; i < valoresSize; i++) {
    cin >> valores[i];
  }

  ordenarValores(valores, valoresSize);
  return 0;
}

void ordenarValores(int valores[], int valoresSize) {
  // 1. primer loop para recorrer arreglo de valores
  for (int i = 0; i < valoresSize; i++) {

    // 2. loop interno para comparar el valor actual [j] con el siguiente [j+1]
    for (int j = 0; j < valoresSize - 1; j++) {
      // 3. si el actual es mayor al siguiente
      if (valores[j] > valores[j + 1]) {
        // 4. guardo el valor actual en una variable auxiliar
        int mayor = valores[j];
        // 5. movemos el valor siguiente a la posicion actual
        valores[j] = valores[j + 1];
        // 6. guardamos la variable auxiliar (mayor) en la posicion siguiente
        valores[j + 1] = mayor;
      }
    }
  }

  for (int i = 0; i < valoresSize; i++) {
    cout << valores[i] << " ";
  }
}
