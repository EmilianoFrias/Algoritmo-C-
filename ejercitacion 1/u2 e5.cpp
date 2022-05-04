#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std; 

int main (){
	
	int vendendor, montoVenta, autoVenta, ventas, porcientoVentas;
	int salario;
	int comision ;
	
	
	
	
	cout<<"Para comenzar la carga del sueldo del vendedor ingrese un numero distinto de 0: ";
	cin>>vendendor;
	while(vendendor !=0 ){
		cout<<"Ingrese la cantidad de autos vendidos: ";
		cin>>ventas;
		comision = 2000 * ventas;
		cout<<endl<<"Recibira una comision de : "<<comision<<endl;
		cout<<endl<<"Ingrese el monto total de las ventas del empleado: ";
		cin>> montoVenta;
		porcientoVentas = (5*montoVenta)/100;
		cout<<"Recibira 5% de sus ventas que es igual a: "<<porcientoVentas<<endl;
		salario=40000+porcientoVentas+comision;
		cout<<"Recibira un sueldo final de: "<<salario;
		
		
		cout<<endl<<"Si desea seguir cargando datos del empleado ingrese un valor distinto a 0: ";
		cin>>vendendor;
	}

	getch();
	return 0;
}
