/* 20. Una compa��a tiene una f�rmula poco com�n para calcular el sueldo de sus empleados. El sueldo
semanal para un empleado es igual a: $ 100 + $(edad del empleado) + ($ 1 + 2 + 3+... + a�os en la compa��a)
As�, si un empleado de 37 a�os de edad tiene una antig�edad de seis a�os, ganar�a el sueldo
semanal de $ 158, ya que es la suma de 100 + 37 (edad) + 21, en donde 21 es la suma de
1+2+3+4+5+6. Escriba un algoritmo para calcular el pago mensual de los X empleados, recibiendo
como entrada la edad y los a�os que lleva en la compa��a.*/

#include <iostream>
using namespace std;

int main(){
	int n, edad, anios, pago;
	
	cout<<"Ingrese la cantidad de empleados: ";
	cin>>n;

	for (int i=1; i<=n; i++){
		pago = 0;
		cout<<"\nIngrese la edad del empleado "<<i<<": ";
		cin>>edad;
		cout<<"Ingrese los anios que lleva trabajando el empleado "<<i<<": ";
		cin>>anios;
		
		pago = 100 + edad;
		for (int j=1; j<=anios; j++){
			pago = pago + j; 
		}
		
		cout<<"El empleado "<<i<<" recibe un pago mensual de $ "<<pago<<endl;
	}
	
	return 0;
}

