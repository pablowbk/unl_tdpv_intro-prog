#include <iostream>

using namespace std;

// Ejercicio 9
// Hacer una función que a partir de una palabra pasada por parámetro, indique
// cuantas vocales hay individualmente y retorne los valores.
// Ej:
// entrada: “amarillo”,
// salida : a:2, e:0, i:1, o:1, u:0

void contarVocales(string palabra);

int main(int argc, char *argv[]) {
  string palabra;
  cout << "Ingrese una palabra para contar sus vocales: ";
  cin >> palabra;

  contarVocales(palabra);

  return 0;
}

void contarVocales(string palabra) {
  int contador[5][2] = {{'a', 0}, {'e', 0}, {'i', 0}, {'o', 0}, {'u', 0}};
  int size = palabra.size();

  for (int i = 0; i < size; i++) {
    for (int j = 0; j < 5; j++) {
      if (palabra[i] == contador[j][0])
        contador[j][1] += 1;
    }
  }

  for (int j = 0; j < 5; j++) {
    cout << (char)contador[j][0] << ":" << contador[j][1];
    if (j < 4)
      cout << ", ";
  }
}