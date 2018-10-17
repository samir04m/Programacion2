#include <iostream>
using namespace std;

int main(){
    int tam = 10;
    int v[tam] = {4, 0, -2, 3, 1, -1, 2, 5, -3, -4};
    int aux, temp, izq, der, medio;

    cout<<"Este es el vector en desorden\n";
    for (int i=0; i<tam; i++){
        cout<<"v["<<i<<"] = "<<v[i]<<"\n";
    }

    // ordenamiento por el metodo de insercion
    for (int a=1; a<tam; a++){
        temp = v[a];
        izq = 0;
        der = a-1;
        while (izq <= der){
            medio = (izq + der)/2;
            if (temp < v[medio]){
                der = medio - 1;
            }else{
                izq = medio + 1;
            }
        }
        for (int b=a-1; b>=izq; b--){
            v[b+1] = v[b];
        }
        v[izq] = temp;
    }

    cout<<"Asi queda el vector ordenado\n";
    for (int i=0; i<tam; i++){
        cout<<"v["<<i<<"] = "<<v[i]<<"\n";
    }

    return 0;
}
