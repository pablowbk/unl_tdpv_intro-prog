#include <iostream>

using namespace std;

// Ejercicio 11
// Genere un arreglo con 20 valores todos en 0 (cero). Pida por consola 4
// valores y 4 posiciones. Inserte los valores en sus respectivas posiciones
// (tener en cuenta que estén dentro del rango)

int main(int argc, char *argv[]) {
  int arreglo[20];

  for (int i = 0; i < 20; i++) {
    arreglo[i] = 0;
  }

  int valores[4], posiciones[4];

  for (int i = 0; i < 4; i++) {
    // pedimos valor y posicion
    cout << "Ingrese un valor: ";
    cin >> valores[i];
    cout << "Ingrese una posicion (entre 0 y 19): ";
    cin >> posiciones[i];

    if (posiciones[i] < 0 || posiciones[i] > 19) {
      cout << "La posicion debe estar entre 0 y 19" << endl;
      i--;
    } else {
      // asignamos el valor a la posicion en "arreglo"
      arreglo[posiciones[i]] = valores[i];
    }
  }

  cout << "[";
  for (int i = 0; i < 20; i++) {
    cout << arreglo[i];
    if (i < 19)
      cout << " ";
  }
  cout << "]" << endl;

  cout << endl;

  return 0;
}
