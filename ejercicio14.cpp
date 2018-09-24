/* 14. Se desea leer las calificaciones de una clase de informática y contar el número 
total de aprobados (Mayores o iguales a 5)*/

#include <iostream>
using namespace std;

int main(){
	int n_alumnos, calificacion, n_aprobados=0;
	
	cout<<"Ingrese el numero de alumnos de la clase de informatica: ";
	cin>>n_alumnos;

	for (int i=1; i<=n_alumnos; i++){

		cout<<"Ingrese la calificacion del alumno "<<i<<": ";
		cin>>calificacion;
		
		if (calificacion >= 5){
			n_aprobados++;
		}
	}
	
	cout<<"\nEl numero de aprobados es "<<n_aprobados;
	
	return 0;
}

