/* 24. Imprimir los números primos entre 2 y 1000 */

#include <iostream>
using namespace std;

int main(){
	int c;

	for (int n=2; n<=1000; n++){
		c=0;
		for (int i=1; i<=n; i++){
			if(n%i == 0){
				c++;
			}
		}
		if(c == 2){
			cout<<n<<", ";
		}
	}

    return 0;
}
