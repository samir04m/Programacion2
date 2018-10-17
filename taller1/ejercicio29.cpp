/* 29. Realizar un algoritmo que lea números hasta que aparezca un número primo, luego genere la
estadística de cuantos pares e impares fueron leídos hasta aparecer el primo*/

#include <iostream>
using namespace std;

int main(){
	int num, c=0, cont_pares=0, cont_impares=0, seEncontroPrimo = 0;

	while (seEncontroPrimo == 0){
		
		cout<<"Ingrese un numero: ";
		cin>>num;
		
		c=0;
		for (int i=1; i<=num; i++){
			if (num%i == 0){
				c++;
			}
		}
		if (c == 2){
			cout<<"Se ha encontrado que el numero "<<num<<" es primo";
			seEncontroPrimo = 1;
		}else{
			if (num%2 == 0){
				cont_pares++;
			}else{
				cont_impares++;
			}
		}
		
	}
	
	cout<<"\n\nFueron leidos "<<cont_pares<<" numeros pares y "<<cont_impares<<" numero impares";
	
	return 0;
}

