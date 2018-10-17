/* 25. Calcular la sumatoria de los primeros N números primos */

#include <iostream>
using namespace std;

int main(){
	int n, num=0, salir=0, c=0, suma=0;

	cout<<"Ingrese en valor de N: ";
	cin>>n;

	while (salir < n){
		num++;
		c=0;
		for (int i=1; i<=num; i++){
			if(num%i == 0){
				c++;
			}
		}
		if(c == 2){
			suma = suma + num;
			salir++;
			cout<<num<<" ";
		}
	}
	cout<<"\nLa suma de los "<<n<<" primero numeros primos es "<<suma;

    return 0;
}
