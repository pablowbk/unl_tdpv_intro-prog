#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[]) {
	srand(time(NULL));
	int randNum = rand() % 20 + 1;	
	
	cout << "Numero generado: " << randNum << endl;
	
	int num;
	cout << "Ingrese un numero entre 1 y 20: ";
	cin >> num;
	
	if (num < randNum) {
		cout << num << " es menor que " << randNum << endl;
	} 
	
	if (num > randNum) {
		cout << num << " es mayor que " << randNum << endl;
	} 
	
	if (num == randNum) {
		cout << num << " es igual que " << randNum << endl;
	}
	
	
	return 0;
}

