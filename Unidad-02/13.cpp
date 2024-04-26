#include<iostream>
using namespace std;
int main (int argc, char *argv[]) {
	int x, y, z;
	cout << "Ingrese un numero X: ";
	cin >> x;
	cout << "Ingrese un numero Y: ";
	cin >> y;
	cout << "Ingrese un numero Z: ";
	cin >> z;
	cout << endl;
	
	int resultado = ((x + 2*y) + 3*z) / 6;
	cout << "El resultado de ((x + 2*y)+3*z)/6 es: " << resultado << endl;
	
	return 0;
}
