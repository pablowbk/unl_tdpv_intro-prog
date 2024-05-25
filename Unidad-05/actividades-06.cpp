#include <iostream>

using namespace std;

// Ejercicio 6
// Ingresa un nombre e informa cuántas vocales de cada tipo tiene. Repasa la
// guia de Strings

int main(int argc, char *argv[]) {
  string nombre;

  char vocales[5] = {'a', 'e', 'i', 'o', 'u'};
  int contador[5] = {0, 0, 0, 0, 0};
  int vocalesSize = sizeof(vocales) / sizeof(vocales[0]);

  cout << "Ingrese una NOMBRE: ";

  cin >> nombre;

  if (nombre.length() == 0) {
    cout << "No ingresaste ninguna nombre" << endl;
    return 0;
  }

  for (int i = 0; i < nombre.size(); i++) {
    for (int j = 0; j < vocalesSize; j++) {
      if (nombre[i] == vocales[j]) {
        contador[j]++;
      }
    }
  }

  cout << "Contador de vocales en \"" << nombre << "\"" << endl;
  for (int i = 0; i < vocalesSize; i++) {
    cout << "[" << vocales[i] << "] => " << contador[i] << endl;
  }

  cout << endl;

  return 0;
}
