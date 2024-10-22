#include <iostream>
using namespace std;

struct Nodo {
    int info;
    Nodo *sgte;
};

void agregar(Nodo *&cfte, Nodo*&cfin, int valor);
int suprimir(Nodo *&cfte, Nodo *&cfin);
int tamañoCola(Nodo *cfte);
void cargaCola(Nodo *&cfte, Nodo *&cfin);
void mostrarCola(Nodo *cfte);
void mostrarPila(Nodo*&pila);
void push(Nodo *&pila,int valor);
int pop (Nodo *&pila);
void mostrarPila(Nodo*&pila);
void mostrarColainversa(Nodo *cfte);
void condicion(Nodo *&cfte);

int main() {
    // Definición de colA
    Nodo* colafrente = NULL;
    Nodo* colafin = NULL;


    cargaCola(colafrente,colafin);

    condicion(colafrente);

    return 0;
}

void agregar(Nodo *&cfte, Nodo*&cfin, int valor) {
    // Crear el nodo
    Nodo *nuevo = new Nodo();
    // Cargar el nodo
    nuevo->info = valor;
    nuevo->sgte = NULL;
    // Encolarlo
    if (cfte == NULL) {
        cfte = nuevo;
    } else {
        cfin->sgte = nuevo;
    }
    cfin = nuevo;
}

int suprimir(Nodo *&cfte, Nodo*&cfin) {
    int retorno;
    Nodo *aux = cfte;
    retorno = aux->info;
    cfte = aux->sgte;
    if (cfte == NULL) {
        cfin = NULL;
    }
    delete (aux);
    return retorno;
}

int tamañoCola(Nodo *cfte) {
    int size = 0;
    Nodo *temp = cfte;

    while (temp != nullptr) {
        size++;
        temp = temp->sgte;
    }
    return size;
}

void cargaCola(Nodo *&cfte, Nodo *&cfin){
    int carga = 0;
    cout << "Ingrese un valor: ";
    cin >> carga;

    while (carga != 0) {
        agregar(cfte, cfin, carga);
        cout << "Ingrese un valor o termine con 0: ";
        cin >> carga;
    }
}

void mostrarCola(Nodo *cfte){
    Nodo *temp = cfte;

    while (temp != nullptr) {
        cout << temp->info << endl;
        temp = temp->sgte;
    }
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
void mostrarPila(Nodo*&pila){
    Nodo *aux = pila;
    int i = 1;
    while (aux != NULL){
        cout << aux->info << endl;
        aux = aux ->sgte;
        i++;
    }
}

void mostrarColainversa(Nodo *cfte){
    Nodo *temp = cfte;
    Nodo *pila = NULL;
    int carga_temp = 0;

    while (temp != nullptr) {
        carga_temp = temp->info;
        push(pila,carga_temp);
        temp = temp->sgte;
    }
    mostrarPila(pila);
}

void condicion(Nodo *&cfte){
    Nodo *aux = cfte;
    if (tamañoCola(cfte) > 100){
        mostrarCola(cfte);
    }
    else{
        mostrarColainversa(cfte);
    }

}