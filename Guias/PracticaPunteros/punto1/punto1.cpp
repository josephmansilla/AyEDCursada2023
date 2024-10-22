#include <iostream>
using namespace std;

struct Nodo{
    int info;
    Nodo *sgte;
};

void push (Nodo *&pila, int valor);
int pop (Nodo *&pila);
void ColocarPosTres (Nodo *&pila, int valor_a_insertar);

int main(){
    int pos_tres;
    cout << "ingrese un valor x: ";
    cin >> pos_tres;
    Nodo * super_pila_sexual = NULL;
    push(super_pila_sexual,3);

    ColocarPosTres(super_pila_sexual, pos_tres);



}

void push (Nodo *&pila, int valor){
    Nodo * nuevo = new Nodo();
    nuevo -> info = valor;
    nuevo -> sgte = pila;
    pila = nuevo;
}

int pop (Nodo *&pila){
    int retorno;
    retorno = pila -> info;
    Nodo * aux = pila;
    pila = aux -> sgte;
    delete(aux);
    return (retorno);
}

void ColocarPosTres (Nodo *&pila, int valor_a_insertar){
    Nodo * temporal = pila;
    int size = 0;

    while (temporal != nullptr){
        size++;
        temporal = temporal -> sgte;
    }

    if (size>=3){
        while(size != 2){
            pop(pila);
            size--;
        }
        push (pila,valor_a_insertar);
        cout << "S";
    }
    else{
        cout << "N";
    }

}