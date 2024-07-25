#include <conio.h>
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <stdlib.h>

using namespace std;

/***********************************/
/* CLASE CARTA */
/*
 @nro numero de la carta
 @palo palo de la carta
 @cod_palo 1,2,3,4 cod del palo de la carta

*/
/*********************************/

class Carta {

  int nro;
  string palo;
  int cod_palo;
  bool vacio;
  int color;

public:
  Carta(int _nro, int cod_palo);
  Carta(void){}; // Siempre es bueno tener un constructor vacio por defecto
  int getNro() { return nro; }
  void setVacio() { vacio = true; }
  void cancelVacio() { vacio = false; }
  bool isVacio() { return vacio; }
  string getPalo() { return palo; }
  void mostrarCarta();
};

/***********************************/
/* DEFINICION DE METODOS */
/*********************************/

// CONSTRUCTOR

Carta::Carta(int _nro, int _codPalo) {
  vacio = false;
  nro = _nro;
  cod_palo = _codPalo;
  vacio = false;

  // definicion del palo
  switch (cod_palo) {
  case 1:
    palo = "oro";
    color = 14;
    break;
  case 2:
    palo = "copa";
    color = 12;
    break;
  case 3:
    palo = "espada";
    color = 9;
    break;
  case 4:
    palo = "basto";
    color = 10;
    break;
  }
}

void Carta::mostrarCarta() {
  if (!isVacio()) {
    textcolor(color);
    cout << nro;
    textcolor(15);
  } else {
    cout << -1;
  }
}
/***********************************/
/* CLASE MAZO */
/*
@nro numero de la carta
@palo palo de la carta
@cod_palo 1,2,3,4 cod del palo de la carta

*/
/*********************************/

class Mazo {
  // mazo original con todas las cartas
  // cant cartas
  int cantCartas;
  int filas;
  int columnas;
  Carta mazoGrande[48];

public:
  Mazo(){}; // Siempre es bueno tener un constructor vacio por defecto
  Mazo(int cantidad, int f, int c);
  void mostrar();
  void mezclar();
  void barajar(int c);
  void getCarta(int c);
};

/**
Constructor mazo
*/

Mazo::Mazo(int cantidad, int f, int c) {
  // genero el mazo aleatoriamente
  for (int i = 0; i < 12; i++) {
    Carta c1(i + 1, 1);
    Carta c2(i + 1, 2);
    Carta c3(i + 1, 3);
    Carta c4(i + 1, 4);

    mazoGrande[i] = c1;
    mazoGrande[i + 12] = c2;
    mazoGrande[i + 24] = c3;
    mazoGrande[i + 36] = c4;
  }

  cantCartas = 48;

  mezclar();

  cantCartas = cantidad;
  filas = f;
  columnas = c;
}

/**
Muestra el mazo disponiendo las columnas y filas
*/

void Mazo::mostrar() {
  cout << setw(3);
  for (int i = 0; i < filas; i++) {
    for (int j = 0; j < columnas; j++) {
      mazoGrande[(columnas * i) + j].mostrarCarta();
      cout << setw(3);
    }
    cout << endl;
  }
}

/**
 Mezcla el mazo
*/

void Mazo::mezclar() {

  Carta aux[48];

  for (int i = 0; i < cantCartas; i++) {
    aux[i] = mazoGrande[i];
    mazoGrande[i].setVacio();
  }

  for (int i = 0; i < cantCartas; i++) {
    // aux[i] = mazoGrande[i];
    int ran;
    do {
      ran = rand() % cantCartas;
    } while (!mazoGrande[ran].isVacio());
    mazoGrande[ran] = aux[i];
  }
}

/**
Baraja para dejar la columna elegida en el medio
*/

void Mazo::barajar(int col) {

  Carta filas[3][7]; // 0 3 6 9 12 15 18

  int f1;
  int f2;
  int f3;

  // si c = 1 f2,f1,f3
  // si c = 2 f1,f2,f3
  // si c = 3 f1,f3,f2

  if (col == 1) {
    f2 = 0;
    f1 = 1;
    f3 = 2;
  }
  if (col == 2) {
    f1 = 0;
    f2 = 1;
    f3 = 2;
  }
  if (col == 3) {
    f1 = 0;
    f3 = 1;
    f2 = 2;
  }

  for (int i = 0; i < 7; i++) {
    filas[f1][i] = mazoGrande[i * 3];
    filas[f2][i] = mazoGrande[(i * 3) + 1];
    filas[f3][i] = mazoGrande[(i * 3) + 2];
  }

  for (int i = 0; i < 7; i++) {
    mazoGrande[i] = filas[0][i];
    mazoGrande[7 + i] = filas[1][i];
    mazoGrande[14 + i] = filas[2][i];
  }
}

/**
Devuelve una carta
*/

void Mazo::getCarta(int c) { mazoGrande[c].mostrarCarta(); }

/***********************************/
/* CLASE JUEGO */
/*
Gestiona la mecanica del juego

*/
/*********************************/

class Juego {
  Mazo mazo;

public:
  Juego();
  int ingresar();
  void play();
  void magia();
};

Juego::Juego() {
  Mazo aux(21, 7, 3);
  mazo = aux;
}

/***********************************/
/*
        m�todo: ingresar
        Pide la columna del espectador
*/
/*********************************/

int Juego::ingresar() {

  int col = 0;
  bool vale = false;

  while (!vale) {

    cout << endl
         << "Ingrese el nro de columna en el cual esta su numero escogido "
            "(1-3): ";
    cin >> col;

    if (col > 0 && col < 4)
      vale = true;
  }

  return col;
}

/***********************************/
/*
m�todo: play
Lleva el hilo del juego
*/
/*********************************/

void Juego::magia() {
  cout << endl << "La carta que usted eligio es: ";
  mazo.getCarta(10);
  cout << endl << "Tadaaaaan!:";
}

/***********************************/
/*
m�todo: play
Lleva el hilo del juego
*/
/*********************************/

void Juego::play() {

  int c = 0;
  // primer turno
  mazo.mostrar();
  c = ingresar();
  mazo.barajar(c);

  // segundo turno

  mazo.mostrar();
  c = ingresar();
  mazo.barajar(c);

  // tercer turno

  mazo.mostrar();
  c = ingresar();
  mazo.barajar(c);

  magia();
}

int main(int argc, char *argv[]) {
  srand(time(NULL));
  Juego J;
  J.play();
  //    magia M;
  //    M.start();
  //
  //
  //    system("PAUSE");
  return EXIT_SUCCESS;
}

//
//
//
// class magia{
//
//      /* Elementos privados */
//
//      private:
//              // atributos
//
//              carta mesa[7][3];  // presentacion de la mesa
//              carta mazo[21];    // el macito de 21 cartas
//
//             // metodos
//
//              void armar();    //arma por primera vez las columnas haciendo un
//              random void mostrar();  //muestra la mesa int ingresar(int
//              veces);      //es el ingreso de la columna, tambien se encarga
//              de mostrar la carta elegida void mezclar(int col); //mezcla cada
//              vez que se elige una columna void repartir(); //reparte el
//              macito en la mesa, no muestra void mostrar_carta_elegida(int g);
//              //muestra la carta elegida
//
//      /* Elementospublicos */
//
//      public:
//
//             magia();        //constructor, llama a "armar"
//             void start();   //el unico metodo publico, es el que arranca el
//             juego y organiza las manos ~magia();       // destructor, vacio
//
//
//};
//
//        /***********************************/
//        /* El constructor llama a armar, no lleva par�metro*/
//        /*********************************/
//
//        magia::magia(){
//           armar();
//        }
//
//        /***********************************/
//        /*
//        m�todo: armar
//        Arma la matriz de forma aleatoria
//        primero pone los 21 valores ordenados y luego los cambia con alguna
//        coordenada de forma aleatoria
//        */
//        /*********************************/
//
//       void magia::armar(){
//
//           int c=1;
//
//           for (int i=0;i<7;i++){
//               for(int j=0;j<3;j++){
//                  mesa[i][j]=c++;
//               }
//           }
//
//           for (int i=0;i<7;i++){
//               for(int j=0;j<3;j++){
//
//                  int filaux=rand()%7;
//                  int colaux=rand()%3;
//                  int aux=mesa[i][j];
//
//                  mesa[i][j]=mesa[filaux][colaux];
//                  mesa[filaux][colaux]=aux;
//               }
//           }
//
//       }
//
//       /***********************************/
//        /*
//        m�todo: mostrar
//        Arma un peque�o entorno grafico para mostrar la mesa
//        */
//        /*********************************/
//
//       void magia::mostrar(){
//
//           cout<<endl<<endl;
//
//           for (int i=0;i<7;i++){
//               cout<<"|";
//               for(int j=0;j<3;j++){
//                  cout<<setw(5)<<mesa[i][j]<<" | ";
//               }
//               cout<<endl;
//           }
//       cout<<endl<<setw(7)<<"col 1"<<setw(8)<<"col 2"<<setw(8)<<"col 3"<<endl;
//       cout<<endl;
//
//       }
//
//        /***********************************/
//        /*
//        m�todo: ingresar
//        Pide la columna del espectador, recibe como parametro el nro de mano
//        Devuelve la columna elegida
//        */
//        /*********************************/
//
//
//       int magia::ingresar(int veces){
//
//            int col=0;
//            bool vale=false;
//
//            while (!vale){
//
//                  cout<<endl<<"Ingrese el nro de columna en el cual esta su
//                  numero escogido (1-3): "; cin>>col;
//
//                  if(col>0 && col<4)
//                           vale=true;
//            }
//
//            if (2-veces)
//               cout<<endl<<"quedan "<<2-veces<<" elecciones"<<endl;
//
//            else {
//                 mostrar_carta_elegida(col-1);
//                 return -1;
//            }
//            return col;
//
//       }
//
//        /***********************************/
//        /*
//        m�todo: mezclar
//        se encarga de mezclar poniendo la columna elegida en el medio
//        */
//        /*********************************/
//
//
//       void magia::mezclar(int col){
//            int fil=0;
//            int col_selec[3];
//
//            switch(col){
//                        case 1:
//                             col_selec[0]=1;
//                             col_selec[1]=0;
//                             col_selec[2]=2;
//                             break;
//
//                        case 2:
//                             col_selec[0]=0;
//                             col_selec[1]=1;
//                             col_selec[2]=2;
//                             break;
//
//                        case 3:
//                             col_selec[0]=0;
//                             col_selec[1]=2;
//                             col_selec[2]=1;
//                             break;
//            }
//
//
//            for(int j=0;j<3;j++){
//                    for (int i=0;i<7;i++){
//                        mazo[fil]=mesa[i][col_selec[j]];
//                        fil++;
//                    }
//            }
//       }
//
//
//         /***********************************/
//        /*
//        m�todo: repartir
//        Acomoda el mazo en la mesa
//        */
//        /*********************************/
//
//       void magia::repartir(){
//
//            int fil=20;
//
//            for(int i=0;i<7;i++){
//                    for(int j=0;j<3;j++){
//
//                         mesa[i][j]=mazo[fil];
//                         fil--;
//
//                    }
//            }
//
//
//       }
//
//      /*****************************/
//
//
//      void magia::mostrar_carta_elegida(int g){
//
//
//
//           cout<<endl<<"Ud eligio el: "<<mesa[3][g]<<endl<<endl;
//
//           }
//
//
//      /****************************/
//
//      void magia::start(){
//
//
//
//           for (int juego=0;juego < 3;juego++){
//               mostrar();
//               int c=ingresar(juego);
//               if (c>0){
//                  mezclar(c);
//                  repartir();
//               }
//           }
//      }
//
//
//
//
//      // Declaracion del destructor
//
//      magia::~magia(){
//
//
//
//        }
//
