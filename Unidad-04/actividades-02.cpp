#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int limite = 100;
	int contador = 0;
	for (int i = 0; i < limite; i += 10) {
		int centena = i + 10;
		contador++;
		cout << "Centena #" << contador << ": " << centena << endl;
	}
	return 0;
}

