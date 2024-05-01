#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int numA, numB;
	cout << "Ingrese un numero A: ";
	cin >> numA;
	
	cout << "Ingrese un numero B: ";
	cin >> numB;
	

	if (numA < numB) {
		cout << numB << " es mayor que " << numA << endl;
	} 
	if (numB < numA) {
		cout << numA << " es mayor que " << numB << endl;
	} 
	if (numA == numB) {
		cout << numA << " es igual que " << numB << endl;
	}
	
	
	return 0;
}

