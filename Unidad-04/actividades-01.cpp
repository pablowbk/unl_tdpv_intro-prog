#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int limite = 10;
	for (int i = 0; i < limite; i++) {
		int num;
		cout << "Ingrese el #" << (i+1)<< " numero: ";
		cin >> num;
		cout << num << endl;
	}
	return 0;
}

