#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(int argc, char *argv[]) {
	cout << "=====================" << endl;
	cout << "    TRAGAMONEDAS     " << endl;
	cout << "=====================" << endl;
	cout << endl;
	
	int monedas = 0;
	int ganadas = 0;
	
	while (!monedas || monedas > 10) {
		cout << "Ingrese sus monedas (entre 1 y 10): ";
		cin >> monedas;
	}
	
	cout << "Iniciando..." << endl << endl;
	cout << "=====================" << endl;
	cout << " Tenés " << monedas << " tirada" << ((monedas > 1) ? "s" : "") << endl;
	cout << "=====================" << endl;
	cout << endl;
	
	srand(time(NULL));
	
	for (int i = 0; i < monedas; i++) {
		char palanca = ' ';
		
		while (palanca != 'p') {
			cout << "Tire de la palanca con 'p' para continuar...";
			cin >> palanca;
		}
		
		int valor1, valor2, valor3;
		for (int j = 0; j < 3; j++) {
			if (j == 0) valor1 = rand() % 3 + 1;
			if (j == 1) valor2 = rand() % 3 + 1;
			if (j == 2) valor3 = rand() % 3 + 1;
		}
		
		bool ganador = valor1 == valor2 &&  valor2 == valor3;
		
		cout << "Tirada #" << i + 1 << ": " << valor1 << "-" << valor2 << "-" << valor3;
		if (ganador) {
			cout << " => GANADOR!";
			ganadas++;
		}
		cout << endl << endl;
	}
	
	cout << endl << "Te quedaste sin monedas!" << endl;
	
	bool premioMayor = ganadas == monedas;
	
	cout << endl << "Resultados de tu jugada: " << ganadas << " tiradas ganadas." << endl;
	
	if (premioMayor) {
		cout << endl;
		cout << "*****************************" << endl;
		cout << "** SACASTE EL PREMIO MAYOR **" << endl;
		cout << "**      FELICITACIONES     **" << endl;
		cout << "*****************************" << endl;
	}
	
	return 0;
}

