#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	
	int ventas, saldoNeto, totalGastos, ganancias;
	float impuesto=0;
	
	cout<<"Ingrese el total de ventas que tuvo el comerciante: ";
	cin>>ventas;
	cout<<endl<<"Ingrese el total de gastos que tuvo el comerciante: ";
	cin>>totalGastos;
	
	impuesto = (ventas*25)/100; 
	
	cout<<endl<<"Lo que paga de impuestos mensualmente es de: "<<impuesto<<endl;
	
	ganancias = ventas - impuesto - totalGastos;
	
	if(ganancias>0){
		cout<<endl<<"El comerciante tuvo ganancias de: "<<ganancias;
	}else{
		cout<<endl<<"El comerciante tuvo perdidas de: "<<ganancias;
	}

	
	getch();
	return 0;
}
