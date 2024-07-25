#include <conio.h>
#include <cstdio>
#include <ctime>
#include <iostream>
#include <windows.h>

using namespace std;

const int xMax = 100;
const int xMin = 1;
const int yMax = 20;
const int yMin = 1;

void checkBorde(int x, int y, int &dx, int &dy) {
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

void borrar(int x, int y) {
  gotoxy(x, y);
  cout << " ";
}

void dibujar(int x, int y) {
  gotoxy(x, y);
  cout << "0";
}

void mover(int &x, int &y, int dx, int dy) {
  x += dx;
  y += dy;
}

int main(int argc, char *argv[]) {
	
  clock_t tempo;
  clock_t paso;
  int velocidad = 50;
  int color;
  int x = 10;
  int y = 10;
	  
  paso = CLOCKS_PER_SEC / velocidad;
  tempo = clock();
  textcolor(YELLOW);
  bool rebotando = true;
  dibujar(x, y);
  int dx = 1;
  int dy = 1;
	
  while (rebotando) {
    if (tempo + paso < clock()) {
      borrar(x, y);
      checkBorde(x, y, dx, dy);
      mover(x, y, dx, dy);
      dibujar(x, y);
      tempo = clock();
    }		  
  }
  return 0;
}
