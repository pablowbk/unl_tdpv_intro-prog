#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int valorReferencia;
	int n;
	
	cin >> valorReferencia;
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		cout << valorReferencia + i << " ";
	}
		
	return 0;
}

