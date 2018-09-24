/* 13. Leer 20 números enteros positivos y determinar los valores máximo y 
mínimo ingresados por el usuario.*/

#include <iostream>
using namespace std;

int main(){
	int n, maximo=0, minimo=999999999;
	
	for (int i=0; i<5; i++){
		
		cout<<"Ingrese un entero positivo: ";
		cin>>n;
		
		if (n > maximo){
			maximo = n;
		}
		if (n < minimo){
			minimo = n;
		}
	}
	
	cout<<"\nEl valor maximo es "<<maximo;
	cout<<"\nEl valor minimo es "<<minimo;
	
	return 0;
}

