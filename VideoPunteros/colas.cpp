#include <iostream>
using namespace std;

struct Nodo{
    int info;
    Nodo *sgte;
};

void agregar(Nodo *&cfte, Nodo*&cfin,int valor);
int suprimir(Nodo *&cfte, Nodo*&cfin); //El tipo de dato de retorno es el Tinfo

int main(){
    //Definición de cola
    Nodo* colafrente = NULL;
    Nodo* colafin = NULL;
    int carga = 0;
    cout << "ingrese un valor: ";
    cin >> carga;

    while (carga != 0){
        agregar(colafrente,colafin,carga);
        cout << "ingrese un valor o termine con 0: ";
        cin >> carga;
    }

    int redo = 0;
    while(colafrente!=NULL){
        redo = suprimir(colafrente,colafin);
        cout << redo << endl;
    }
}

void agregar(Nodo *&cfte, Nodo*&cfin,int valor){
    //Crear el nodo
    Nodo *nuevo = new Nodo();
    //Cargar el nodo
    nuevo -> info = valor;
    nuevo -> sgte = NULL; //NO deberia estar conectado a nada.
    //Encolarlo
    if (cfte == NULL){
        cfte = nuevo;
    }
    else{
        cfin -> sgte = nuevo;
    }
    cfin = nuevo;
}

int suprimir(Nodo *&cfte, Nodo*&cfin){
    int retorno;
    Nodo *aux = cfte;
    retorno = aux -> info; //cfte->info
    cfte = aux -> sgte; //cfte -> sgte
    if (cfte == NULL){
        cfin = NULL;
    }
    delete (aux);
    return retorno;
}