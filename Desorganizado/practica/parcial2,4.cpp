#include <iostream>
using namespace std;

struct encomiendas {
    int nroEncomienda;
    float peso;
    char direcdestino[200];
    char barrioDestino[50];
    char apellidoNombre[50];
    long fechaEntrega = 20230815;
    bool entrega = false;
};

void entregado (encomiendas[],int, long);

int main (){
    long fecha = 20230817;
    encomiendas x[1000];

    entregado(x,1000,fecha);
}

void entregado (encomiendas x[],int t, long const fecha){
    for(int i=0;i<t;i++){
        if (fecha > x[i].fechaEntrega){
            x[i].entrega = true;
        }
    }
}