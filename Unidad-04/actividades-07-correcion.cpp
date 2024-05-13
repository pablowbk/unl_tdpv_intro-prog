#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(int argc, char *argv[]) {
	srand(time(NULL));
	int tirada;	
	for (int i = 0; i < 10; i++) {
		tirada = rand() % 6 + 1;
		cout << "Tirada #" << i + 1 << ": " << tirada << endl;
	}
	
	return 0;
}
