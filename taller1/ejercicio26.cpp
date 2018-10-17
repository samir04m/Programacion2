/* 26. Un algoritmo para leer numeros enteros positivos, contarlos y sumarlos. El algoritmo termina cuando se
introduzca el cero. */

#include <iostream>
using namespace std;

int main(){
	int n=1, cont=0, suma=0;

	while(n != 0){

		cout<<"Ingrese un entero positivo: ";
		cin>>n;

		if (n > 0){
			cont++;
			suma = suma + n;
		}else{
			if (n < 0){
				cout<<"Los numeros negativos no estan permitidos.\n";
			}
		}
	}

	cout<<"\nHay "<<cont<<" numeros enteros positivos y la suma de ellos es igual a "<<suma;

    return 0;
}
