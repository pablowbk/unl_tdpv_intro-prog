#include<iostream>
using namespace std;
int main (int argc, char *argv[]) {
//	El ejercicio autoevaluable es un ejercicio integrador de todos los temas de la Unidad, 
//	su resoluci�n podr� ser autoevaluada con la soluci�n propuesta por la c�tedra, 
//	recomendamos a conciencia realizar (o intentar) el ejercicio antes de ver la soluci�n 
//	
//	Pedir al usuario que ingrese un nombre de personaje. El personaje inicia el programa con 10 puntos de vida. 
//	El jugador deber� ingresar 3 n�meros del 1 al 10 que ser�n sus runas. 
//	Luego de ingresar, el programador (cada uno de uds) deber� realizar un c�lculo matem�tico para actualizar el valor de la vida, 
//	quit�ndole a vida el siguiente valor: runa1 � runa2/2 + runa3/2
//	
//	Aqu� el programador se podr� tomar la libertad de acomodar las runas como le plazca, 
//	de manera que el jugador no sabe cu�l runa es la que le suma y cu�l es la que le resta vida. 
//	Este c�mputo lo deber� hacer dos veces e indicar si la vida est� por debajo de cero o no Salida en consola:
//		
	string name;
	int life = 10; 
	int rune1, rune2, rune3;
	cout << "Ingrese el nombre del personaje: ";
	cin >> name;
	cout << "Su nombre es: " << name << endl;
	
	cout << "Ingrese su primera runa: ";
	cin >> rune1;
	cout << "Ingrese su segunda runa: ";
	cin >> rune3;
	cout << "Ingrese su tercera runa: ";
	cin >> rune2;
	
	life -= rune1 - rune2 / 2 + rune3 / 2;

	cout << "Sus puntos de vida son: " << life << endl;

	life -= rune1 - rune2 / 2 + rune3 / 2;
	
	cout << "Sus puntos de vida son: " << life << endl;	
	cout << endl;
	cout << "Tu personaje sigue vivo? " << (life > 0) << endl;
	
	return 0;
}
