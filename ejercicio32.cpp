/*32. Dado un número digitado por el usuario, realizar un programa que le permita al usuario:
1. Fibonacci N(cantidad de elementos de la serie)
2. Valor del factorial N (valor del factorial del número digitado)
3. Primo N(encontrar el primo según el numero digitado)
4. Salir (Si digita esta opción debe salir del programa) */

#include <iostream>
using namespace std;

int main(){
	int opcion=0, n;

	while (opcion != 4){
		system("cls");
		cout<<"__________________________________"<<endl;
		cout<<"||       Menu de Opciones       ||"<<endl;
		cout<<"||______________________________||"<<endl;
		cout<<"||                              ||"<<endl;
		cout<<"||  1 -> Fibonacci N            ||"<<endl;
		cout<<"||  2 -> Valor del factorial N  ||"<<endl;
		cout<<"||  3 -> Primo N                ||"<<endl;
		cout<<"||  4 -> Salir                  ||"<<endl;
		cout<<"||______________________________||"<<endl;
		cout<<"\nIngrese su seleccion: ";
		cin>>opcion;
		
		if (opcion == 1){
			system("cls");
			cout<<"======== 1. Fibonacci N ========="<<endl;
			cout<<"\nIngrese el valor de N: ";
			cin>>n;	

			int a=0, b=1, c;
			
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
			cout<<"\n\n";
			system("pause");
		}
		if (opcion == 2){
			system("cls");
			cout<<"==== 2. Valor del factorial N ==="<<endl;
			cout<<"\nIngrese el valor de N: ";
			cin>>n;	
			
			int factorial = 1;
			for (int i=1; i<=n; i++){
				factorial = factorial * i;
			}
			
			cout<<"\nEl factorial de "<<n<<" es "<<factorial<<"\n\n";
			system("pause");
		}
		if (opcion == 3){
			system("cls");
			cout<<"========== 3. Primo N ==========="<<endl;
			cout<<"\nIngrese el valor de N: ";
			cin>>n;	
			
			int num=0, salir=0, c=0;
			while (salir < n){
				num++;
				c=0;
				for (int i=1; i<=num; i++){
					if(num%i == 0){
						c++;
					}
				}
				if(c == 2){
					salir++;
				}
			}
			
			cout<<"\nEl "<<n<<"-esimo numero primo es "<<num<<" \n\n";
			system("pause");
		}
	}
	
	return 0;
}

