#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	
	int numero1, numero2;
	int superficieRectangulo, radioCirculo, menor;
	
	cout<<"Ingresar 2 numeros disntintos "<<endl;;
	
	cout<<endl<<"Ingresar el primer numero: "; 
	cin>>numero1;
	
	cout<<endl<<"Ingresar el segundo numero: ";
	cin>>numero2; 
	
	while(numero1 == numero2){
		cout<<"Ingresar los numeros de nuevo, los mismos deben ser distintos "<<endl; 
		cout<<"Numero 1: ";cin>>numero1;
		cout<<endl<<"Numero 2: ";cin>>numero2;
	}
	
	superficieRectangulo = numero1 * numero2;
	cout<<endl<<"La superficie del rectangulo es de: "<<superficieRectangulo;
	
	if(numero1<numero2){
		menor = numero1;
	}else{
		menor = numero2;
	}
	
	
	getch();
	return 0;

}
