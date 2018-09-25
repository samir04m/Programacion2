/*30. Realizar un programa que solicite números al usuario hasta que este lo desee, una vez finalizado
determine el número menor y mayor digitado.*/

#include <iostream>
using namespace std;

int main(){
	int num, opcion, mayor = -99999999, menor = 99999999;

	while (opcion == 0){

		cout<<"\nIngrese un numero: ";
		cin>>num;
		
		if (mayor < num){
			mayor = num;
		}
		if (menor > num){
			menor = num;
		}
		
		cout<<"\tDesea continuar? (0->Si y 1->NO); ";
		cin>>opcion;

	}
	
	cout<<"\nEl numero mayor digitado fue "<<mayor;
	cout<<"\nEl numero menor digitado fue "<<menor;
	
	return 0;
}

