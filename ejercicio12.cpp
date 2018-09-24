/*  12. Leer 100 números, determinar la media de los números positivos y la media de los números negativos.*/

#include <iostream>
using namespace std;

int main(){
	double suma_positivo=0, suma_negativo=0, media_positivos, media_negativos;
	int n_positivos=0, n_negativos=0, numero;
	
	for (int i=1; i<=100; i++){
		
		cout<<"Ingrese un numero: ";
		cin>>numero;
		
		if (numero > 0) {
			suma_positivo = suma_positivo + numero;
			n_positivos++;
		}else{
			suma_negativo = suma_negativo + numero;
			n_negativos++;
		}	
	}
	
	media_positivos = suma_positivo / n_positivos;
	media_negativos = suma_negativo / n_negativos;
	cout<<"\nLa media de los numeros positivos es "<<media_positivos;
	cout<<"\nLa media de los numeros negativos es "<<media_negativos;
	
	return 0;
}

