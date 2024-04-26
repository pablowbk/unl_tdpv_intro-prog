#include<iostream>
using namespace std;
int main (int argc, char *argv[]) {
	string nombre, apellido;
	cout << "Ingrese su nombre: ";
	cin >> nombre;
	cout << endl;
	cout << "Ingrese su apellido: ";
	cin >> apellido;
	
	cout << endl;
	cout << "Su nombre completo es: " << nombre << " " << apellido << endl;
	return 0;
}
