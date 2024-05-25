#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

// Genera aleatoriamente 10 valores (o lee 10 valores que ingrese el usuario)
// del 1 a 10 y luego informa si se encuentra el valor 5. Utiliza arreglos.
// Informalo en pantalla. Ejemplo: 4, 1, 2, 4, 5, 6, 4, 4, 7, 8 -> Salida: Se
// encuentra el 5.

int main(int argc, char *argv[]) {
  srand(time(NULL));

  int valores[10];
  bool contieneCinco = false;

  cout << "Valores generados: ";

  for (int i = 0; i < 10; i++) {
    valores[i] = rand() % 10 + 1;
    cout << valores[i] << " ";
    if (valores[i] == 5) {
      contieneCinco = true;
    }
  }

  cout << endl;

  if (contieneCinco) {
    cout << "Se encuentra el 5." << endl;
  } else {
    cout << "No se encuentra el 5." << endl;
  }

  return 0;
}
