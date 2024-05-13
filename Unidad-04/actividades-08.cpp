#include <iostream>

using namespace std;


int main(int argc, char* argv[]) {
	cout << "==========================================" << endl;
	cout << "A continuacion ingrese numeros por teclado" << endl;
	cout << "==========================================" << endl;
	cout << endl;
	
	int ocurrencias = 1;
	int numeroPrevio;
	int numero;

	do {
		numeroPrevio = numero;
		cout << "Ingrese un numero: ";
		cin >> numero;
		if (numeroPrevio == numero) {
			ocurrencias++;
		} else {
			ocurrencias = 1;
		}
		cout << "Ocurrencias => " << ocurrencias << endl;
	} while(ocurrencias < 3 );
	
	cout << "=======================================" << endl;
	cout << "                Final                  "<< endl;
	cout << "=======================================" << endl;
	cout << "Has logrado 3 ocurrencias consecutivas!"<< endl;

	return 0;
}
