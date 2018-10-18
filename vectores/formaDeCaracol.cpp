#include <iostream>
using namespace std;

int main(){
    int tam = 10;
    int v[tam] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int aux;

    cout<<"Este es el orden actual del vector\n";
    for (int i=0; i<tam; i++){
        // cout<<"v["<<i<<"] = "<<v[i]<<"\n";
        cout<<v[i]<<" ";
    }

    cout<<"\nAsi queda recorrido en forma de caracol\n";
    int b = tam-1;
    for (int a=0; a<tam/2; a++){
        // cout<<"v["<<a<<"] = "<<v[a]<<"\n";
        // cout<<"v["<<b<<"] = "<<v[b]<<"\n";
        cout<<v[a]<<" ";
        cout<<v[b]<<" ";
        b--;
        if (a == (tam/2)-1 && tam%2 != 0) {
            int c = tam/2;
            // cout<<"v["<<c<<"] = "<<v[c]<<"\n";
            cout<<v[c]<<" ";
        }
    }
    cout<<"\n";

    return 0;
}
