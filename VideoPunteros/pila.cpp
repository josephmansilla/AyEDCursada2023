#include <iostream>
using namespace std;

struct Nodo{
    int info;
    Nodo *sgte;
};
//Declaración de push and pop
void push (Nodo *&pila, int valor);
int pop (Nodo *&pila);

int main(){
    //Definición del pila
    Nodo *pila = NULL;
    int carga;

    cout << "ingrese un valor: ";
    cin >> carga;
    
    while (carga != 0){
        push(pila,carga);
        cout << "ingrese un valor o termine con 0: ";
        cin >> carga;
    }

    int removed;
    while (pila != NULL){
        removed = pop(pila);
        cout << removed << endl;
    }
}

void push (Nodo *&pila, int valor){
    //Crear el nodo
    Nodo * nuevo = new Nodo();
    //Cargar Nodo
    nuevo->info = valor;
    nuevo->sgte = pila;
    //Conectar con el resto
    pila = nuevo;
}
int pop (Nodo*&pila){
    int ret;
    ret = pila -> info;
    Nodo *aux = pila;
    pila = aux -> sgte;
    delete(aux);
    return ret;
}