#include <iostream>

using namespace std;

// Ejercicio 4
// Ingresa un nombre e informa cuántas “a” tiene. Repasa la guia de Strings.

int main(int argc, char *argv[]) {
  string palabra;
  int contador = 0;

  cout << "Ingrese una palabra: ";

  cin >> palabra;

  if (palabra.length() == 0) {
    cout << "No ingresaste ninguna palabra" << endl;
    return 0;
  }

  for (int i = 0; i < palabra.size(); i++) {
    if (palabra[i] == 'a') {
      contador++;
    }
  }

  cout << endl;

  cout << "La letra 'a' aparece " << contador << " veces en la palabra "
       << palabra << endl;

  return 0;
}
