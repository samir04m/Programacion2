/* 31. PARA QUE UNA PERSONA PUEDA EJERCER SU VOTO EN UNA ELECCION DE GOBIERNO,
DEBE DE SER MAYOR DE EDAD Y DEBE SER COLOMBIANO. (APLIQUE UN CICLO). Aplique una
pregunta “Desea continuar”, si la respuesta es No (N) entonces salga del ciclo, si la respuesta es
siempre Si (S) este termina hasta cumplir el ciclo en 10. */

#include <iostream>
using namespace std;

int main(){
	char respuesta;
	
	cout<<"PARA QUE PUEDA EJERCER SU VOTO EN LA ELECCION\n";
	cout<<"USTED DEBE DE SER MAYOR DE EDAD Y DEBE SER COLOMBIANO.";
	cout<<"\nDesea continuar? (S/N): ";
	cin>>respuesta;
	
	for (int i=1; i<=10; i++){	
		
		if (respuesta == 'n' || respuesta == 'N'){
			break;
		}
		cout<<"Ciclo en "<<i<<endl;
	}
	
	return 0;
}

