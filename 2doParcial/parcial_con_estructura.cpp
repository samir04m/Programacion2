#include <iostream>
using namespace std;

struct estudiante {
	string nombre;
	string apellido;
	float n1;
	float n2;
	float n3;
	float definitiva;
	string nivel;
};

int main(){
	int n;
	cout<<"Ingrese el numero de estudiantes: ";
	cin>>n;
	
	struct estudiante vestudiantes[n]; // vector de tipo estudiantes (la estructura que creamos)
	
	float mayor = -1; // para que este por debajo alguen que saque 0
	float menor = 11; // para que este por encima del alguen que saque 10
	int pos_mayor, pos_menor; // para almacenar la posicion del vector en que se encuentren
	float sum_seg1 = 0 , sum_seg2 = 0, sum_seg3 = 0;

	for (int i=0; i<n; i++){
		cout<<"\nIngrese la informacion del estudiante "<<i+1<<":\n";
		cout<<"\tNombre: ";
		cin>>vestudiantes[i].nombre;
		cout<<"\tApellido: ";
		cin>>vestudiantes[i].apellido;
		cout<<"\tNota del 1er Segumiento: ";
		cin>>vestudiantes[i].n1;
		cout<<"\tNota del 2do Segumiento: ";
		cin>>vestudiantes[i].n2;
		cout<<"\tNota del 3er Segumiento: ";
		cin>>vestudiantes[i].n3;
		
		// calculamos la nota definitiva
		vestudiantes[i].definitiva = 
			(vestudiantes[i].n1*0.3)+(vestudiantes[i].n2*0.3)+(vestudiantes[i].n3*0.4);
	
		// sacamos el nivel del estudiantes segun su nota
		if (vestudiantes[i].definitiva >= 0 && vestudiantes[i].definitiva < 6){
			vestudiantes[i].nivel = "Insuficiente";
		}
		if (vestudiantes[i].definitiva >= 6 && vestudiantes[i].definitiva < 8){
			vestudiantes[i].nivel = "Aceptable";
		}
		if (vestudiantes[i].definitiva >= 8 && vestudiantes[i].definitiva < 9.5){
			vestudiantes[i].nivel = "Sobresaliente";
		}
		if (vestudiantes[i].definitiva >= 9.5 && vestudiantes[i].definitiva <= 10){
			vestudiantes[i].nivel = "Excelente";
		}
		
		// buscamos la mayor y menor nota
		if (vestudiantes[i].definitiva > mayor){
			mayor = vestudiantes[i].definitiva;
			pos_mayor = i;
		}
		if (vestudiantes[i].definitiva < menor){
			menor = vestudiantes[i].definitiva;
			pos_menor = i;
			
		}
		
		// sumamos las notas de cada segumiento para luego sacar el promedio
		sum_seg1 = sum_seg1 + vestudiantes[i].n1;
		sum_seg2 = sum_seg2 + vestudiantes[i].n2;
		sum_seg3 = sum_seg3 + vestudiantes[i].n3;
		
	}
	
	cout<<"\nEl estudiantes con mayor nota es:\n";
	cout<<"\t"<<vestudiantes[pos_mayor].nombre<<" "<<vestudiantes[pos_mayor].apellido<<
		" con nota de "<<vestudiantes[pos_mayor].definitiva<<endl;
	
	cout<<"\nEl estudiantes con menor nota es:\n";
	cout<<"\t"<<vestudiantes[pos_menor].nombre<<" "<<vestudiantes[pos_menor].apellido<<
		" con nota de "<<vestudiantes[pos_menor].definitiva<<endl<<endl;
		
	cout<<"El promedio de notas del primer seguimiento es "<<sum_seg1/n <<endl;
	cout<<"El promedio de notas del segundo seguimiento es "<<sum_seg2/n <<endl;
	cout<<"El promedio de notas del tercer seguimiento es "<<sum_seg3/n <<endl;
	
	// ordenamos el vector de estudiantes alfabeticamente por apellido
	struct estudiante aux; // la variable auxiliar es de tipo estudiante (nuestra estructura creada)
	for (int i=0; i<n-1; i++){
		for (int j=i+1; j<n; j++){
			if (vestudiantes[i].apellido[0] > vestudiantes[j].apellido[0]){
				aux = vestudiantes[i];
				vestudiantes[i] = vestudiantes[j];
				vestudiantes[j] = aux;
			}
		}
	}
	
	cout<<"\nEste es el listado de estudiantes en orden alfabetico por apellido:\n";
	for (int i=0; i<n; i++){
		cout<<"Estudiante "<<i+1<<":\n";
		cout<<"\tApellido y Nombre: "<<vestudiantes[i].apellido<<" "<<vestudiantes[i].nombre<<endl;
		cout<<"\tNota Seguimiento 1: "<<vestudiantes[i].n1<<endl;
		cout<<"\tNota Seguimiento 2: "<<vestudiantes[i].n2<<endl;
		cout<<"\tNota Seguimiento 3: "<<vestudiantes[i].n3<<endl;
		cout<<"\tNota Definitiva   : "<<vestudiantes[i].definitiva<<endl;
		cout<<"\tNivel: "<<vestudiantes[i].nivel<<endl;
	}
	
	return 0;
}

