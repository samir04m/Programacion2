#include <iostream>
using namespace std;

int main(){
	int x;
	
	cout<<"Ingrese un numero entre (1-10): ";
	cin>>x;

	cout<<"\nLa tabla de multiplicar de "<<x<<" es: \n";
	
	for (int i=1; i<=10; i++){
		cout<<x<<" * "<<i<<" = "<<x*i<<endl;
	}
	
	return 0;
}

