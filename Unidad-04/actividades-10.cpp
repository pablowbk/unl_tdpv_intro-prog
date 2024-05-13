#include <iostream>
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
	cout << " - Divinador te ayudara con algunas pistas." << endl;
	
	srand(time(NULL));
	int numeroMagico = rand() % 20 + 1;
	
	int numero = 0;
	int intentos = 1;
	int diferencia = 0;
	int diferenciaAnterior = 0;
	
//	cout << "*** => " << numeroMagico << endl; // debug
	
	while(numero != numeroMagico) {
		cout << endl << "¿Que numero pensas que es? => ";
		cin >> numero;		
		
		if (numero == numeroMagico)  break;
		
		string pista = numero > numeroMagico ? "menor" : "mayor";
		diferencia = abs(numero - numeroMagico); //abs me va a devolver siempre un numero positivo.
		bool seAleja = diferencia > diferenciaAnterior;
		
//		cout << "Diferencia: " << diferencia << " - DiferenciaAnterior: " << diferenciaAnterior << endl; // debug
		
		if (intentos == 1) {
			cout << "Fallaste... intenta con un numero " << pista << endl;
		} else {
//			crear pista frio/caliente			
			string pistaDos = seAleja ? "Frio, frio..." : "Caliente, caliente...";
			cout << pistaDos << endl;
		}
		intentos++;
		diferenciaAnterior = diferencia;
	}
	
	cout << endl;
	cout << "=================================" << endl;
	cout << "          ¡¡GANASTE!!            " << endl;
	cout << "=================================" << endl;
//	Bonus intuicion
	if (intentos == 1) cout << "Tu intuicion es de otro planeta!";
	if (intentos > 1 && intentos < 4) cout <<" Tu intuicion es genial!";
	if (intentos >= 4) cout << " Bien hecho!";
	cout << endl;
	cout << endl << "Intentos utilizados: " << intentos << endl;
	
	
//	cout << endl << "presione una tecla para cerrar esta ventana..."; // este bloque es solo para cuando lo quiero abrir desde el ejecutable, asi no se cierra la ventana automaticamente al terminar
//	cin.ignore();
//	cin.get(); 

	return 0;
}
