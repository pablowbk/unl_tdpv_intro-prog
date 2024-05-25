#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {

  // Inicializo el rand
  srand(time(NULL));
  // Arreglo de puntajes
  int puntajes[7];
  // Cargo puntajes con random de 1 a 100
  for (int i = 0; i < 7; i++) {
    puntajes[i] = rand() % 100 + 1;
    cout << "puntaje de nivel " << i + 1 << ": " << puntajes[i] << endl;
  }
  // Matriz de puntajes Minimos, Maximos y Cant Estrellas
  int puntajesEstrellas[4][3] = {
      {0, 30, 0}, {31, 50, 1}, {51, 75, 2}, {76, 100, 3}};
  // Cantidad de estrellas por Nivel (Arreglo a llenar)
  int estrellasNivel[7];

  // For Cada puntaje - los puntajes
  for (int j = 0; j < 7; j++) {
    // Por cada nivel de estrella
    for (int i = 0; i < 4; i++) {
      if (puntajes[j] >= puntajesEstrellas[i][0] &&
          puntajes[j] <= puntajesEstrellas[i][1]) {
        estrellasNivel[j] = puntajesEstrellas[i][2];
      }
    }
  }

  cout << endl;
  // Muestro
  for (int i = 0; i < 7; i++) {
    cout << "Estrellas por nivel " << i + 1 << ": " << estrellasNivel[i]
         << endl;
  }

  return 0;
}
