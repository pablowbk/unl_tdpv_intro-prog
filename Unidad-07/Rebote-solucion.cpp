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

// ===== FIXES para que ande el código de la cursada =====
void gotoxy(int x, int y) {
  COORD coord;
  coord.X = x;
  coord.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void textcolor(int color) {
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

// const int YELLOW = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY;
// const int WHITE = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
const int GREEN =
    FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_INTENSITY;
// ===== FIXES para que ande el código de la cursada =====

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
  void colisionBorde();
  void borrar();
  void dibujar();
  void actualizarPosicionCursor();

public:
  Pelota(int colorP, int velocidadP);
  void mover();
};

// Contructor Pelota
Pelota::Pelota(int colorP, int velocidadP) {
  paso = CLOCKS_PER_SEC / velocidadP;
  tempo = clock();
  velocidad = velocidadP;
  color = colorP;
  x = rand() % xMax;
  y = rand() % yMax;
  dx = 1;
  dy = 1;
  rebotando = true;
}

// Metodos Pelota
void Pelota::dibujar() {
  gotoxy(x, y);
  textcolor(color);
  cout << "0";
}

void Pelota::borrar() {
  gotoxy(x, y);
  cout << " ";
}

void Pelota::colisionBorde() {
  if (x > xMax)
    dx = -1;
  if (x <= xMin)
    dx = 1;

  if (y > yMax)
    dy = -1;
  if (y <= yMin)
    dy = 1;
}

void Pelota::actualizarPosicionCursor() {
  x += dx;
  y += dy;
}

void Pelota::mover() {
  if (tempo + paso < clock()) {
    borrar(); // borramos lo que haya en la posición anterior;
    colisionBorde();
    actualizarPosicionCursor();
    dibujar();
    tempo = clock();
  }
}

int main(int argc, char *argv[]) {
  srand(time(NULL));

  Pelota pelota1(GREEN, 3);

  while (true) {
    pelota1.mover();
  }

  return 0;
}
