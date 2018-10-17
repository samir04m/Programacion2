/* 28. Un algoritmo que lea una serie de números, mostrar el cuadrado de los negativos y el cubo de los
positivos. Finalice a solicitud del usuario */

#include <iostream>
#include <math.h>         //libreria para usar funciones matematicas, en este caso  la funcion pow
using namespace std;

/* La funcion pow es de la libreria math.h siempre que se quiera usar se debe incluir esta libreria
	pow sirve para elevar cualquier numero a cualquier potencia, para usarla le tenemos que pasar
	entre parentesis primero el numero a elevar a alguna potencia, y luego el n de la potencia
	Ejemplo: para sacar el cubo de 2 es asi pow(numero_base, n_potencia) osea que quedaria pow(2, 3) */

int main(){
	int n=1;
	cout<<"A continuacion ingrese los numeros, para finalizar ingrese 0 (cero):\n";
	
	while(n != 0){

		cout<<"\nIngrese un entero positivo: ";
		cin>>n;

		if (n > 0){
			int cubo = pow(n, 3);  
			cout<<"El cubo de "<<n<<" es "<<cubo;
		}else{
			if (n < 0){
				int cuadrado = pow(n, 2);
				cout<<"El cubo de "<<n<<" es "<<cuadrado;
			}
		}
	}
	
	return 0;
}

