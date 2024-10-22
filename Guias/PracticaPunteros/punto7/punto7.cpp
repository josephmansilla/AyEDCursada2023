#include <iostream>
using namespace std;

struct Nodo{
    int info;
    Nodo *sgte;
};

void push (Nodo *&pila, int valor);
int pop (Nodo *&pila);
void mostrar(Nodo *&pila);
void ordenado(Nodo *&pila);

int main(){
    Nodo *pila_sexual = NULL;
    push(pila_sexual, 7);
    push(pila_sexual, 4);
    push(pila_sexual, 1);
    push(pila_sexual, 15);

    mostrar(pila_sexual);
    ordenado(pila_sexual);
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

void ordenado(Nodo*& pila) {
    Nodo* ordenado = nullptr;

    while (pila != nullptr) {
        Nodo* aux = pila;
        int menor = aux->info;

        // Se busca el elemento mas chico de la pila
        while (aux != nullptr) {
            if (aux->info < menor) {
                menor = aux->info;
            }
            aux = aux->sgte;
        }

        // Se crea una nueva pila con los valores ordenados
        Nodo* aux2 = nullptr;
        int valor_aux = 0;
        while (pila != nullptr) {
            valor_aux = pop(pila);
            if (valor_aux != menor) {
                push(aux2, valor_aux);
            } else {
                push(ordenado, menor);
            }
        }

        // Se mueven los elementos de la pila auxiliar a la original
        while (aux2 != nullptr) {
            valor_aux = pop(aux2);
            push(pila, valor_aux);
        }
    }
    
    // Por referencia se modifica pila_sexual a la pila ordenado 👌👌
    pila = ordenado;
}
