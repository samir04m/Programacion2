/* 27. Generar un algoritmo que lea 20 números, determine cuantos fueron negativos, cuantos positivos y la
diferencia entre ellos (generar 2 versiones: Ciclo PARA y Ciclo MIENTRAS QUE) */

#include <iostream>
using namespace std;

int main(){
	int n, c_positivos=0, c_negativos=0;

	for (int i=0; i<20; i++){

		cout<<"Ingrese un numero: ";
		cin>>n;

		if (n != 0){
			if (n > 0){
				c_positivos++;
			}else{
				c_negativos++;
			}
		}

	}
	cout<<"Fueron negativos "<<c_negativos<<" numeros\n";
	cout<<"Fueron positivos "<<c_positivos<<" numeros\n";

    return 0;
}
