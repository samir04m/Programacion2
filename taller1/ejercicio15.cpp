/* 15. Encontrar el MCD de 2 números enteros positivos suministrados por el usuario*/

#include <iostream>
using namespace std;

int main(){
	int a, b, mayor, menor;
	
	cout<<"Ingrese un primer entero positivo: ";
	cin>>a;
	cout<<"Ingrese un segundo entero positivo: ";
	cin>>b;
		
	if (a > b){
		mayor = a;
		menor = b;
	}else{
		mayor = b;
		menor = a;
	}
	
	for (int n=menor; n>=1; n--){
		
		if (menor%n == 0 && mayor%n == 0){
			cout<<"\nEl MCD de "<<a<<" y "<<b<<" es "<<n;	
			break;
		}
		
	}
	
	return 0;
}

