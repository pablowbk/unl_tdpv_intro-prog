#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int imparesMostrados = 0;
	
	while(imparesMostrados < 5) {
		int numero;
		cout << "Ingrese un numero: " << flush;
		cin >> numero;
		
		if (numero % 2 != 0) {
			imparesMostrados++;
		}
	}
	
	cout << endl;
	
	cout << "Se han ingreado 5 numeros impares." << endl;
	cout << "Adios!!" << endl;
	
	return 0;
}

