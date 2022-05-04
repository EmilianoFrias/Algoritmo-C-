#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std; 

int main (){

	char empleadoA = 'A';
	char empleadoB = 'B';
	char categoria;
	
	int antiguedad, sueldoBasicoB, porcentajeAntiguedad;
	int sueldoBasicoA;
	
	cout<<"Ingrese la categoria del empleado (A, B): ";
	cin>>categoria;
	
	if(categoria == 'A'){
		cout<<"Ingrese la antiguedad del empleado ";
		cin>>antiguedad;
		
		porcentajeAntiguedad = (antiguedad*30000)/100;
		cout<<"recibira la cantidad de: "<<porcentajeAntiguedad<<" por motivos de antiguedad";
		
		sueldoBasicoA = 30000 + porcentajeAntiguedad;
		cout<<"Recibira un sueldo total de : "<<sueldoBasicoA; 
	}
	
	if(categoria == 'B'){
		cout<<"Ingrese la la antiguedad del empleado: ";
		cin>>antiguedad;
		if(antiguedad <= 5){
			sueldoBasicoB = 25000;
			cout<<"Recibira un sueldo total de : "<<sueldoBasicoB; 
		}else{
			sueldoBasicoB = 35000;
			cout<<"Recibira un sueldo total de : "<<sueldoBasicoB; 
		}
	}

	getch();
	return 0;
	
}
