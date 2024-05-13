#include <iostream>
#include <conio.h>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(int argc, char *argv[]) {
	int tiradas = 0;
	int tecla;
	
	cout << "Realice una tirada de dado presionando ENTER" << endl;
	cout << "Esperando tirada #" << tiradas + 1 << "..." << endl;	

	while(true){
		if(kbhit()) {
			tecla = getch();
			srand(time(NULL));
			int randNum = rand() % 6 + 1;
			
			if (tecla == 13 && tiradas < 10) {
				// realizar tirada
				cout << "salio el: " << randNum << endl;
				tiradas++;
				if (tiradas <= 9) cout << "Esperando tirada #" << tiradas + 1 << "..." << endl;	
			}
			if (tiradas > 9) {
				cout << "Ya no tienes mas tiradas disponibles. Adios!" << endl;
				return 0;
			}
		}
	}
	
	return 0;
}
