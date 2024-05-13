#include <iostream>
#include <conio.h>
#include <ctime>
#include <cstdlib>

using namespace std;


int main(int argc, char* argv[]) {
	//Generar un número al azar entre 1 y 20, y proponer al jugador adivinarlo, se le dan 5 intentos, se le 
	//debe informar si es mayor o menor que el número al azar obtenido por la computadora.
	
	cout << "==========================================" << endl;
	cout << "******      Adivina a Divinador     ******" << endl;
	cout << "==========================================" << endl;
	cout << endl;
	
	cout << "Instrucciones:" << endl;
	cout << " - Deberas adivinar el numero elegido por el Divinador." << endl;
	cout << " - El numero sera entre 1 y 20." << endl;
	cout << " - Divinador te ayudara solo indicando si tu intento es mayor o menor que su numero." << endl;
	cout << " - Tienes solo 5 intentos." << endl;
	
	srand(time(NULL));
	int numeroMagico = rand() % 20 + 1;
	
	int intento;
	int vidas = 5;
	
	while(vidas > 0 ) {
		cout << "¿Que numero pensas que es? => ";
		cin >> intento;
		
		if (intento == numeroMagico) {
			cout << endl << "Acertaste!!";
			if (vidas == 5) cout << " Tu intuicion es de otro planeta!";
			if (vidas < 5 && vidas > 2) cout << " Tu intuicion es genial!";
			if (vidas <= 2) cout << " Bien hecho!";
			cout << endl;
			break;
		} else {
			bool esMayor = intento > numeroMagico;
			string pista = esMayor ? "menor" : "mayor";
			if (vidas > 1) cout << "Casi casi... intenta un numero " << pista << endl;
			vidas--;
		}
	}
	
	if (vidas < 1) {
		cout << endl << "Te quedaste sin intentos! El numero era: " << numeroMagico << endl;
		cout << "Mejor suerte la proxima!"<< endl;	
	}	
	
//	cout << endl << "presione una tecla para cerrar esta ventana..."; // este bloque es solo para cuando lo quiero abrir desde el ejecutable, asi no se cierra la ventana automaticamente al terminar
//	cin.ignore();
//	cin.get(); 

	return 0;
}
