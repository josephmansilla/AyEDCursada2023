#include <iostream>
using namespace std;

struct Nodo{
    int info;
    Nodo *sgte;
};

void push (Nodo *&pila, int valor);
int pop (Nodo *&pila);
void mostrar(Nodo *&pila);
void reemplazo(Nodo *&pila, int borrado, int reemplazo);


int main(){
    int valor_sexual = 0, valor_no_sexual = 0;
    Nodo *pila_sexual = NULL;
    cout << "ingresar valor a insertar: ";
    cin >> valor_sexual;
    cout << "ingresar valor a borrar: ";
    cin >> valor_no_sexual;

    push(pila_sexual, 1);
    push(pila_sexual, 3);
    push(pila_sexual, 3);
    push(pila_sexual, 4);

    reemplazo(pila_sexual,valor_no_sexual,valor_sexual);

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

void mostrar(Nodo*&pila){
    Nodo *aux = pila;
    int i = 1;
    while (aux != NULL){
        cout << "Pos " << i << " " << aux->info << endl;
        aux = aux ->sgte;
        i++;
    }
}

void reemplazo(Nodo *&pila, int borrado, int reemplazo){
    Nodo *pila_auxiliar = NULL;
    int valor_auxiliar = 0;

    while(pila != nullptr){
        valor_auxiliar = pop(pila);
        if (valor_auxiliar != borrado){
            push(pila_auxiliar,valor_auxiliar);
        }
        else{
            push(pila_auxiliar,reemplazo);
        }
    }
    while(pila_auxiliar != nullptr){
        valor_auxiliar = pop(pila_auxiliar);
        push(pila,valor_auxiliar);
    }
    mostrar(pila);
}