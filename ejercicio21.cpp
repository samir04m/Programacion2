/* 21. Diseñar un algoritmo que permita obtener los N términos de la siguiente serie:
0, 1, 1, 2, 3, 5, 8, 13… */

#include <iostream>
using namespace std;

int main(){
	int n, a=0, b=1, c;
	
	cout<<"Ingrese N: ";
	cin>>n;

	for (int i=0; i<n; i++){
		if (i<2){
			cout<<i<<", ";
		}else{
			c = a + b;
			cout<<c<<", ";
			a = b;
			b = c;
		}
	}
	
	return 0;
}

