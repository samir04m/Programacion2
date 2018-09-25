/* 23. Dado n Números Positivos, comprobar si cada uno de ellos son primo o compuesto.*/

#include <iostream>
using namespace std;

int main(){
	int n, num;
	
	cout<<"Ingrese el valor n (es decir cuando numero desea ingresar): ";
	cin>>n;
	
	for (int i=0; i<n; i++){
		
		cout<<"\nIngrese un numero positivo: ";
		cin>>num;
		
		if(num > 0){
			if (num != 1){   
				int cont=0;
				
				for(int j=1; j<=num; j++){
					if(num%j == 0){
						cont++;
					}
				}
				if (cont == 2){
					cout<<"El numero "<<num<<" es primo";
				}else{
					cout<<"El numero "<<num<<" es complejo";
				}
			}else{
				cout<<"El numero "<<num<<" es No es ni primo ni complejo";
			}
		}else{
			cout<<"Los numeros negativos o cero No estan permitidos.";
		}
		
	}
	
	return 0;
}

