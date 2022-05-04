#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std; 

int main (){
	
	int sueldoBasico = 20000;
	
	int montania = (25*20000)/100;
	
	int restoZona = (19*20000)/100;
	
	int zona, sueldoTotal;
	
	cout<<"Ingrese la zona que se desepenia el maestro "<<endl<<"1: alta montaña, 2: resto de las zonas"<<endl;
	cin>>zona;
	
	 

	while(zona!= 1 and zona!=2){
		cout<<"Ingresar de nuevo el valor de la zona ";
		cin>>zona;
	}
	if(zona == 1){
	cout<<"El aumento fue de: "<<montania;
	sueldoTotal= sueldoBasico+ montania;
	cout<<endl<<"El sueldo total es de: "<<sueldoTotal;
	}
	if(zona == 2){
		cout<<"El aumento fue de: "<<restoZona;
		sueldoTotal= sueldoBasico+ restoZona;
		cout<<endl<<"El sueldo total es de: "<<sueldoTotal;
	}	
	
	
	getch();
	return 0;
}
