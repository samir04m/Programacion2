#include <iostream>
using namespace std;

int main(){
    int tam = 10;
    int v[tam] = {4, 0, -2, 3, 1, -1, 2, 5, -3, -4};
    int aux, amin;

    cout<<"Este es el vector en desorden\n";
    for (int i=0; i<tam; i++){
        cout<<"v["<<i<<"] = "<<v[i]<<"\n";
    }

    // ordenamiento por el metodo de seleccion
    for (int a=0; a<tam; a++){
        amin = a;
        for (int b=a+1; b<tam; b++){
            if (v[b] < v[amin]){
                amin = b;
            }
        }
        aux = v[a];
        v[a] = v[amin];
        v[amin] = aux;
    }


    cout<<"Asi queda el vector ordenado\n";
    for (int i=0; i<tam; i++){
        cout<<"v["<<i<<"] = "<<v[i]<<"\n";
    }

    return 0;
}
