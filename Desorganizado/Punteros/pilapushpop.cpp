#include <iostream>
using namespace std;

struct nodo{
    int info;
    nodo*sgte;
};

void push(nodo* &, int);
int pop (nodo*&);

int main (){
    nodo* pila = NULL;
    push (pila,10);
    push (pila,20);
    push (pila,30);
    push (pila,40);

    while (pila != NULL){
        cout << pop(pila) << endl;
    }

}
//apila
void push(nodo* &pila, int x)
{
    //armar el nodo
    nodo* p = new nodo(); //reserva espacio 
    // guardar la info
    p -> info = x;
    p -> sgte = pila;

    pila = p;
    return;
}

int pop (nodo*& pila){
    int v;
    nodo* p = pila;
    v = p -> info;
    pila = p -> sgte;
    delete p;
    return v;
}