#include<iostream>
using namespace std;
int main (int argc, char *argv[]) {
//	El ejercicio autoevaluable es un ejercicio integrador de todos los temas de la Unidad, 
//	su resolución podrá ser autoevaluada con la solución propuesta por la cátedra, 
//	recomendamos a conciencia realizar (o intentar) el ejercicio antes de ver la solución 
//	
//	Pedir al usuario que ingrese un nombre de personaje. El personaje inicia el programa con 10 puntos de vida. 
//	El jugador deberá ingresar 3 números del 1 al 10 que serán sus runas. 
//	Luego de ingresar, el programador (cada uno de uds) deberá realizar un cálculo matemático para actualizar el valor de la vida, 
//	quitándole a vida el siguiente valor: runa1 – runa2/2 + runa3/2
//	
//	Aquí el programador se podrá tomar la libertad de acomodar las runas como le plazca, 
//	de manera que el jugador no sabe cuál runa es la que le suma y cuál es la que le resta vida. 
//	Este cómputo lo deberá hacer dos veces e indicar si la vida está por debajo de cero o no Salida en consola:
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
