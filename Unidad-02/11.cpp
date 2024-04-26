#include<iostream>
using namespace std;
int main (int argc, char *argv[]) {
	string nombre, apellido;
	int edad;
	cout << "Ingrese su nombre... ";
	cin >> nombre;
	
	cout << "Ingrese su apellido... ";
	cin >> apellido;
	
	cout << "Ingrese su edad... ";
	cin >> edad;
	
	cout << "Su nombre: " << nombre << endl;
	cout << "Su apellido: " << apellido << endl;
	cout << "Su edad: " << edad << endl;
	return 0;
}
