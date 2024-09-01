#include <iostream>
using namespace std;



void borraimpares(int v[], int);

int main (){
    int v[5] = {1,2,3,4,5};

    borraimpares(v,5);
}

void borraimpares (int v[], int tam){
    for (int i = 0;i<tam;i++){
        if (v[i]%2){
            v[i] = v[i]*2;
            cout << v[i] << endl;
        }

    }   
}