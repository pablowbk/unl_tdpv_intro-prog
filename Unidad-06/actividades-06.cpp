#include <iostream>

using namespace std;

// Ejercicio 6
// Hacer una función que diga si un valor es múltiplo de N (dónde N se pasa por
// parámetro). Ej: entrada 40 y 5 salida : si

bool esMultiplo(int numero, int multiplo);

int main(int argc, char *argv[]) {
  int numero, multiplo;
  cout << "Ingrese un numero: ";
  cin >> numero;

  cout << endl << "Ingrese un multiplo para verificar el numero anterior: ";
  cin >> multiplo;

  cout << endl
       << endl
       << "Es " << numero << " multiplo de " << multiplo << ": ";

  if (esMultiplo(numero, multiplo)) {
    cout << "Si" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}

bool esMultiplo(int numero, int multiplo) { return numero % multiplo == 0; }