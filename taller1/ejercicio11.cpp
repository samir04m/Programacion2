/* 11. Leer las notas de la clase de PROGRAMACION y mostrar las que sean mayores a 89 pts y menores o
iguales a 150 puntos, determinar el promedio de los que estén por debajo de este rango.*/

#include <iostream>
using namespace std;

int main(){
	int n_alumnos, nota, suma=0;
	
	cout<<"Ingrese el numero de alumnos de la clase de programacion: ";
	cin>>n_alumnos;
	
	for (int i=1; i<=n_alumnos; i++){
		
		cout<<"Ingrese la nota del alumno "<<i<<": ";
		cin>>nota;
		
		if (nota > 89 && nota <= 150){
			cout<<"La nota "<<nota<<" esta dentro del rango.\n";
		}else{
			if(nota <= 89){
				suma = suma + nota;
			}
		}
	}
	
	double promedio = suma / n_alumnos;
	cout<<"\nEl promedio de las notas que estan por debajo de 89 es "<<promedio;
	
	return 0;
}

