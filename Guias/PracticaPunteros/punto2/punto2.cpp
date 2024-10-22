#include <iostream>
using namespace std;

struct Nodo{
    int info;
    Nodo *sgte;
};

void push (Nodo *&pila, int valor);
int pop (Nodo *&pila);
void insertarPosi(Nodo *&pila,int valor, int posicion);
void mostrar(Nodo*Lista);

int main(){
    int valor_sexual = 0;
    int pos_sexual = 0;
    Nodo *pila_sexual = NULL;
    cout << "ingresar valor a insertar: ";
    cin >> valor_sexual;
    cout << "ingresar en que posicion: ";
    cin >> pos_sexual;

    push(pila_sexual, 1);
    
    insertarPosi(pila_sexual,valor_sexual,pos_sexual);
    mostrar(pila_sexual);
}

void push(Nodo *&pila,int valor){
    Nodo * nuevo = new Nodo();
    nuevo -> info = valor;
    nuevo -> sgte = pila;
    pila = nuevo;
}
int pop (Nodo *&pila){
    int retorno;
    retorno = pila ->info;
    Nodo *aux=pila;
    pila = aux -> sgte;
    delete (aux);
    return retorno;
}

void insertarPosi(Nodo *&pila,int valor, int posicion){
    Nodo *temporal = pila;
    int size = 0;

    while(temporal != nullptr){
        size ++;
        temporal = temporal -> sgte;
    }

    if (size >= posicion){
        while(size < posicion){
            pop(pila);
            size --;
        }
        push(pila,valor);
        cout << "S\n";
    }
    else{
        cout << "N\n";
    }

}

void mostrar(Nodo*Lista){
    Nodo *aux = Lista;
    while (aux != NULL){
        cout << aux ->info << endl;
        aux = aux -> sgte;
    }
}