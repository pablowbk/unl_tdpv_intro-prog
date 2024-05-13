#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;


int main(int argc, char *argv[]) {
	
	cout << "Ingrese su nombre y presione ENTER:" << endl;
	
	string nombre;
	int contador = 0;
	int tecla;

	while(true){		
		if(kbhit()) { 
			tecla = getch();			
			if (tecla ==13) {
				cout << "Su nombre es: " << nombre << "(" << contador << ")" << endl;
				cout << "Adios!";
				return 0;
			}
			
			nombre += (char)tecla; // casteamos el tipo para que se muestre la letra y no el valor ascii
			contador++;
		}
	}
	
	return 0;
}
