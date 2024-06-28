#include <iostream>

using namespace std;

// Ejercicio 4
// Hacer una función que concatene (una) dos strings. Ej:
// entrada “hola” y “mundo”,
// salida : “holamundo”.

string concatenar(string str1, string str2);

int main(int argc, char *argv[]) {
  string nombre = "Pedro";
  string apellido = "Abalos";

  cout << concatenar(nombre, apellido) << endl;

  return 0;
}

string concatenar(string str1, string str2) { return str1 + str2; }
