#include <iostream>

using namespace std;

// Ejercicio 5
// Ingresa un nombre e informa cuántas vocales tiene. Repasa la guia de Strings

int main(int argc, char *argv[]) {
  string palabra;
  int contadorVocales = 0;
  char vocales[5] = {'a', 'e', 'i', 'o', 'u'};

  cout << "Ingrese una palabra: ";

  cin >> palabra;

  if (palabra.length() == 0) {
    cout << "No ingresaste ninguna palabra" << endl;
    return 0;
  }

  for (int i = 0; i < palabra.size(); i++) {
    for (int j = 0; j < sizeof(vocales) / sizeof(vocales[0]); j++) {
      if (palabra[i] == vocales[j]) {
        contadorVocales++;
      }
    }
    cout << endl;
  }

  cout << "La palabra " << palabra << " tiene " << contadorVocales
       << " vocales." << endl;

  return 0;
}
