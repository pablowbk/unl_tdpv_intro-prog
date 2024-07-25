#include <conio.h>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <windows.h>

using namespace std;

const int xMax = 100;
const int xMin = 1;
const int yMax = 20;
const int yMin = 1;

void gotoxy(int x, int y) {
  COORD coord;
  coord.X = x;
  coord.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void textcolor(int color) {
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

const int YELLOW = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY;
const int GREEN =
    FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_INTENSITY;
const int WHITE = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;

class Pelota {
private:
  clock_t tempo;
  clock_t paso;
  int velocidad;
  int color;
  int x;
  int y;
  int dx;
  int dy;
  bool rebotando;
  void dibujar();
  void checkBorde();
  void actualizarPosicion();
  void borrar();

public:
  Pelota(int col, int vel);
  void mover();
};

Pelota::Pelota(int col, int vel) {
  x = rand() % xMax;
  y = rand() % yMax;
  color = col;
  velocidad = vel;
  dx = 1;
  dy = 1;
  paso = CLOCKS_PER_SEC / velocidad;
  tempo = clock();
  rebotando = true;
}

void Pelota::dibujar() {
  gotoxy(x, y);

  textcolor(color);
  cout << "0";
}

void Pelota::borrar() {
  gotoxy(x, y);
  cout << " ";
}

void Pelota::checkBorde() {
  if (x > xMax) {
    dx = -1;
  }
  if (x <= xMin) {
    dx = 1;
  }
  if (y > yMax) {
    dy = -1;
  }
  if (y <= yMin) {
    dy = 1;
  }
}

void Pelota::actualizarPosicion() {
  x += dx;
  y += dy;
}

void Pelota::mover() {

  if (tempo + paso < clock()) {
    borrar();
    checkBorde();
    actualizarPosicion();
    dibujar();
    tempo = clock();
  }
}

// void checkBorde(int x, int y, int &dx, int &dy) {
//   if (x > xMax) {
//     dx = -1;
//   }
//   if (x <= xMin) {
//     dx = 1;
//   }
//   if (y > yMax) {
//     dy = -1;
//   }
//   if (y <= yMin) {
//     dy = 1;
//   }
// }

// void borrar(int x, int y) {
//   gotoxy(x, y);
//   cout << " ";
// }

// void dibujar(int x, int y) {
//   gotoxy(x, y);
//   cout << "0";
// }

// void mover(int &x, int &y, int dx, int dy) {
//   x += dx;
//   y += dy;
// }

int main(int argc, char *argv[]) {
  srand(time(NULL));

  Pelota P1(GREEN, 3);
  // Pelota P2(YELLOW, 10);
  // Pelota P3(WHITE, 6);

  while (true) {
    P1.mover();
    // P2.mover();
    // P3.mover();
  }
  return 0;
}
