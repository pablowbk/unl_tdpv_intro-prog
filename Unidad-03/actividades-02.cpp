#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int num;
	cout << "Ingrese un numero: ";
	cin >> num;
	
	string paridad = "impar";
	if (num % 2 == 0) {
		paridad = "par";
	}
	cout << "Su numero es: " << paridad << endl;
	return 0;
}

