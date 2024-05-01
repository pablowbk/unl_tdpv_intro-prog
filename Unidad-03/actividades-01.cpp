#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int num;
	cout << "Ingrese un numero: ";
	cin >> num;
	
	bool esPositivo = num >= 0;
	
	if (esPositivo) {
		cout << "Su numero es positivo" << endl;
	} else {
		cout << "Su numero es negativo" << endl;
	}
	
	return 0;
}

