#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

// Ejercicio 2
// Genera aleatoriamente 20 valores (o lee 20 valores que ingrese el usuario)
// del 1 a 100 y luego informa cual es el valor más alto. Si se repite, sólo
// informalo una vez. Ejemplo: 11, 31, 22, 24, 55, 56, 41, 43, 71, 18,91, 11,
// 58, 65, 19, 57, 90, 91, 84, 47, 24 -> Salida: El más alto es el 91.

int main(int argc, char *argv[]) {
  srand(time(NULL));
  int valores[20];
  int masAlto = 0;

  cout << "Valores generados: ";

  for (int i = 0; i < 20; i++) {
    valores[i] = rand() % 100 + 1;
    cout << valores[i] << " ";
    if (valores[i] > masAlto) {
      masAlto = valores[i];
    }
  }

  cout << endl;

  cout << "El mas alto es el " << masAlto << "." << endl;

  return 0;
}
