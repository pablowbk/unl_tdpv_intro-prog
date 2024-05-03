#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int num1, num2, num3;
	cin >> num1;
	cin >> num2;
	cin >> num3;
	
	int mayor = 0;
	if (num1 > num2 && num1 > num3) {
		mayor = num1;
	}
  
	if (num2 > num1 && num2 > num3) {
		mayor = num2;
	}
  
	if (num3 > num1 && num3 > num2) {
		mayor = num3;
	}
	
	cout << mayor;
	return 0;
}