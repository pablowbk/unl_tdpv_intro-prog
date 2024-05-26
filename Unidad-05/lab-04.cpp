#include <climits>
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  // ingresar 10 numeros, luego mostrar el menor y el mayot
  int numeros[10];
  int menor = INT_MAX;
  int mayor = INT_MIN;

  cin >> numeros[0] >> numeros[1] >> numeros[2] >> numeros[3] >> numeros[4] >>
      numeros[5] >> numeros[6] >> numeros[7] >> numeros[8] >> numeros[9];

  for (int i = 0; i < 10; i++) {
    if (numeros[i] < menor)
      menor = numeros[i];
    if (numeros[i] > mayor)
      mayor = numeros[i];
  }

  cout << menor << " " << mayor << endl;

  return 0;
}
