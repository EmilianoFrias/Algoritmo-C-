#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	
	int produccionDiaria = 744;
	float cajas;
	
	int pananialesSemanal= 744 * 5;
	
	cout<<"La produccion semanal de paniales es de: "<< pananialesSemanal;
	
	cajas = 744 / 12;
	
	cout<<endl<<"Se necesita la cantidad de: " <<cajas<<" para poder empacar la produccion semanal" ;
	
	getch();
	return 0;
}
