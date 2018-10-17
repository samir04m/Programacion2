#include <iostream>
using namespace std;

void ordenar(int *v, int lim_izq, int lim_der){
    int temp;
    int izq = lim_izq;
    int der = lim_der;
    int medio = v[ (izq+der)/2 ];

    do{
        while (v[izq] < medio){
            izq++;
        }
        while (medio < v[der]){
            der--;
        }
        if (izq <= der){
            temp = v[izq];
            v[izq] = v[der];
            v[der] = temp;
            izq++;
            der--;
        }
    }while(izq <= der);

    if (lim_izq < der){
        ordenar(v, lim_izq, der);
    }
    if (lim_der > izq){
        ordenar(v, izq, lim_der);
    }
}

int main(){
    int tam = 10;
    int v[tam] = {4, 0, -2, 3, 1, -1, 2, 5, -3, -4};
    int aux, temp, izq, der, medio;

    cout<<"Este es el vector en desorden\n";
    for (int i=0; i<tam; i++){
        cout<<"v["<<i<<"] = "<<v[i]<<"\n";
    }

    // ordenamiento por el metodo de insercion
    ordenar(v, 0, tam-1);

    cout<<"Asi queda el vector ordenado\n";
    for (int i=0; i<tam; i++){
        cout<<"v["<<i<<"] = "<<v[i]<<"\n";
    }

    return 0;
}
