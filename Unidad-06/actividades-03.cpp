#include <iostream>

using namespace std;

// Ejercicio 3
// Hacer una función que “salude“ a un nombre pasado por parámetro: Ej:
// entrada: “Juan”
// salida: “Hola Juan”

string saludar(string nombre);
void saludarNoReturn(string nombre);

int main(int argc, char *argv[]) {
  string nombre;

  cout << "Ingrese su nombre de pila: ";
  cin >> nombre;

  cout << saludar(nombre) << endl;

  saludarNoReturn(nombre);

  return 0;
}

string saludar(string nombre) {
  string saludo = "Hola " + nombre;
  return saludo;
}

void saludarNoReturn(string nombre) { cout << "Hola " << nombre << endl; }
