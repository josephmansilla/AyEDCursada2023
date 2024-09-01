#include <iostream>
using namespace std;

struct Nodo{
    int info;
    Nodo * sgte;
};

void push (Nodo *&pila, int valor);
int pop (Nodo *&pila);


int main(){
    Nodo *pila = NULL;
    int carga = 0;

    cout << "Ingrese valores y termine con 0: ";
    cin >> carga;

    while (carga != 0){
        push(pila,carga);
        cout << "Ingrese valores y termino con 0: ";
        cin >> carga;
    }
    int auxiliar = 0;
    while (pila != NULL){ // solo se puede mostrar el valor al sacarlo de la pila
        auxiliar = pop(pila);
        cout << auxiliar << endl;
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