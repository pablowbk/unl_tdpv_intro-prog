#include <iostream>
#include <ctime>
#include <conio.h>
#include <windows.h>

using namespace std;


int main(int argc, char *argv[]) {
	
	cout << "Bienvenidos al campo minado" << endl;
	cout << endl;
	
	cout << "Ingrese cualquier tecla del teclado para ir avanzando" << endl;
	cout << "¡Ojo con las minas!" << endl;
	
	while(true){		
		if(kbhit()) { 
			int tecla = getch();
			
			switch(tecla) {
			case 75:
				cout<<"izquierda"<<endl;
				break;
			case 77:
				cout<<"derecha"<<endl;
				break;
			case 72:
				cout<<"arriba"<<endl;
				break;
			case 80:
				cout<<"abajo"<<endl;
				break;
			case 'Q':
			case 'q':
				cout << "BOOM!! Perdiste..." << endl;
				return 1;
			default:
				cout << (char)tecla << " - Uf! zafamos..." << endl;
			}
		}
	}
	
	return 0;
}
