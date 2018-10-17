/* 10. Un capital C est� situado a un tipo de inter�s R, cuanto ser� el monto total 
(capital + inter�s) despu�s de pasado x meses.*/

#include <iostream>
using namespace std;

int main(){
	double capital, interes, n_meses, total_intereses=0;
	
	cout<<"Ingrese el capital: ";
	cin>>capital;
	
	cout<<"Ingrese el procentaje del interes: ";
	cin>>interes;
	interes = interes / 100; // para convertir el procentaje a decimal. ejemplo 10/100= 0.1 
	int pago_por_interes = capital * interes;
	
	cout<<"Ingrese el numero de meses: ";
	cin>>n_meses;
	
	for (int i=0; i<n_meses; i++){
		total_intereses = total_intereses + pago_por_interes;
	}
	
	int monto_total = capital +  total_intereses;
	cout<<"\nEl monto total despues de "<<n_meses<<" mes sera de $ "<<monto_total;

	return 0;
}

