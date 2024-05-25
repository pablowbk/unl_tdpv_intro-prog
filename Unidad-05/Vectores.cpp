#include<iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main (int argc, char *argv[]) {
	// Inicializo el rand
	srand (time(NULL));
	// Arreglo de puntajes
	int puntajes[7];
	// Cargo puntajes con random de 1 a 100
	for(int i = 0; i<7;i++){
		puntajes[i] = rand()%100+1;
		cout<<"puntaje de nivel "<<i+1<<": "<<puntajes[i]<<endl;
	}
	// Vectores de puntajes Minimos, Maximos y Can Estrellas	
	int puntajeMinimo[4] = {0,30,51,76}; 
	int puntajeMaximo[4] = {30,50,75,100};
	int cantEstrellas[4] = {0,1,2,3};
	
	// Cantidad de estrellas por Nivel (Arreglo a llenar)
	int estrellasNivel[7];
	
	// For Cada puntaje - los puntajes
	for (int j=0;j<7;j++){
		// Por cada nivel de estrella
		for (int i=0;i<4;i++){
			if(puntajes[j] >= puntajeMinimo[i] && puntajes[j] <= puntajeMaximo[i]){
				estrellasNivel[j] = cantEstrellas[i];
			}
		}
	}
	
	cout<<endl;
	// Muestro
	for(int i = 0; i<7;i++){
		cout<<"Estrellas por nivel "<<i+1<<": "<<estrellasNivel[i]<<endl;
	}
	
	return 0;
}

