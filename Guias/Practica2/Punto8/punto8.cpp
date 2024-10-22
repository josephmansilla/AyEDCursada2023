#include <iostream>
using namespace std;

void burbujeo(int vec[], int maximo);
void cargarVec(int vec[]);
void informarVec(int vec[]);

int main(){
    int maximo = 0;
    cout << "ingrese un valor maximo menor a 50: ";
    cin >> maximo;

    int TablaDe2[maximo] = {0};

    cargarVec(TablaDe2);
    burbujeo(TablaDe2, maximo);
    informarVec(TablaDe2);

}


void burbujeo(int vec[], int maximo){
    int auxiliar = 0;
    int i = 0, j = 0;

    for (i = 0; i < maximo; i++){
        for (j=0; j < maximo; j++){
            if(vec[i]<vec[j]){
                auxiliar = vec[i];
                vec[i] = vec[j];
                vec[j] = auxiliar;
            }
        }
    }
}

void cargarVec(int vec[]){
    int aux = 0, i = 0;
    cout<<"ingrese un valor positivo: ";
    cin >> aux;
    vec[i] = aux;
    i++;
    while(aux>0){
        cout<<"ingrese un valor positivo: ";
        cin >> aux;
        vec[i] = aux;
        i++;
    }

}

void informarVec(int vec[]){
    int i = 0;
    while(vec[i]>0){
        cout << vec[i] << " ";
        i++;
    }
}