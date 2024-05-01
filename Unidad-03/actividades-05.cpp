#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[]) {
	
	srand(time(NULL));
	int num = rand() % 5 + 1;	
	
	cout << "Numero aleatorio entre 1 y 5: " << num << endl;
	
	switch (num) {
		case 1: {
			cout << "Ordinal => primero" << endl;
		};
		break;
		case 2: {
			cout << "Ordinal => segundo" << endl;
		};
		break;
		case 3: {
			cout << "Ordinal => tercero" << endl;
		};
		break;
		case 4: {
			cout << "Ordinal => cuarto" << endl;
		};
		break;
		case 5: {
			cout << "Ordinal => quinto" << endl;
		};
		break;
	}
		
	
	return 0;
}

