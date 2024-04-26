#include<iostream>
using namespace std;
int main (int argc, char *argv[]) {
	int numero;
	cout << "Ingrese un numero entero: ";
	cin >> numero;
	cout << "Su numero es mayor a 100?: " << (numero > 100) << endl;
	
	return 0;
}
