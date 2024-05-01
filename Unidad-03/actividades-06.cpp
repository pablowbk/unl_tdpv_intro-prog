#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {

	int num;	
	
	cout << "Ingrese un numero: ";
	cin >> num;
	
	bool cond1 = num % 2 == 0;
	bool cond2 = num >= 1 && num <= 25;
	bool cond3 = num >= 75 && num <= 100;
	
	cout << "Es par? " << cond1 << endl;
	cout << "Esta entre 1 y 25? " << cond2 << endl;
	cout << "Esta entre 75 y 100? " << cond3 << endl;
	
	if (cond1 && (cond2 || cond3)) {
		cout << "El numero ingresado CUMPLE" << endl;
	} else {
		cout << "El numero ingresado NO CUMPLE" << endl;
	}
		
	return 0;
}

