#include <iostream>
using namespace std;

struct Nodo{
    int info;
    Nodo *sgte;
};

void push (Nodo *&pila, int valor);
int pop (Nodo *&pila);
void insertarUltPos(Nodo *&pila,int valor);


int main(){
    int valor_sexual = 0;
    Nodo *pila_sexual = NULL;
    cout << "ingresar valor a insertar: ";
    cin >> valor_sexual;

    push(pila_sexual, 1);
    push(pila_sexual, 2);
    push(pila_sexual, 3);
    push(pila_sexual, 4);

    insertarUltPos(pila_sexual,valor_sexual);

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
    Nodo *aux = pila;
    pila = aux -> sgte;
    delete(aux);
    return retorno;
}

void insertarUltPos(Nodo *&pila,int valor){
    if (pila == NULL){
        push(pila,valor);
        cout << "S" << endl;
    }
    else{
        Nodo * auxiliar_pila = NULL;
        int valor_auxiliar = 0;

        while(pila != nullptr){
            valor_auxiliar = pop(pila);
            push(auxiliar_pila,valor_auxiliar);
        }
        push(pila,valor);
        
        while(auxiliar_pila != nullptr){
            valor_auxiliar = pop(auxiliar_pila);
            push(pila,valor_auxiliar);
        }
        cout << "S" << endl;
    }
    Nodo *aux = pila;
    int i = 1;
    while (aux != NULL){
        cout << "Pos " << i << " " << aux->info << endl;
        aux = aux ->sgte;
        i++;
    }
    delete(aux);
}