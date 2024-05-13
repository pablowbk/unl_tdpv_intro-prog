#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int limite = 100;
	
	cout << "Iniciando cuenta regresiva..." << endl;
	
	for (int i = limite; i >= -100; i--) {
		cout << "T menos: " << i << "..." << endl;
	}
	
	cout << endl;
	
	cout << "Despegue!!" << endl;
	
	return 0;
}

