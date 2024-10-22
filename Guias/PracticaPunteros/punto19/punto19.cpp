#include <iostream>
using namespace std;

struct Nodo{
    int info;
    Nodo*sgte;
};

void agregarPrimero(Nodo *&Lista,int valor);
void insertarOrdenado(Nodo *&Lista, int valor);
int eliminarPrimero(Nodo *&Lista); //Devuelvo es del tipo Tinfo
void mostrarLista(Nodo*Lista);
void liberarLista(Nodo*&Lista); //no puede faltar
Nodo *buscar (Nodo*Lista,int valor);
void buscarYmostrar(Nodo *Lista, int valor);
void push(Nodo *&pila,int valor);
int pop (Nodo *&pila);
void mostrarPila(Nodo*&pila);
int contarNodos(Nodo *Lista);
void impresionCondicional (Nodo *&lista_sexual);


int main(){
    Nodo*lista = NULL;

    agregarPrimero(lista,2);
    agregarPrimero(lista,4);
    agregarPrimero(lista,8);
    agregarPrimero(lista,16);
    agregarPrimero(lista,32);
    
    mostrarLista(lista);
    impresionCondicional(lista);
    
    liberarLista(lista);

    return 0;
}
void agregarPrimero(Nodo *&Lista,int valor){
    //Crear Nodo
    Nodo *nuevo = new Nodo();
    //Cargar el nodo
    nuevo -> info = valor;
    nuevo -> sgte = Lista;
    //Enlazar
    Lista = nuevo;
}
void insertarOrdenado(Nodo *&Lista, int valor){
    //Crear el nodo
    Nodo *nuevo = new Nodo();
    //Cargar nodo
    nuevo -> info = valor;
    nuevo -> sgte = NULL; // porque no se todavia donde va a ir
    //Enlazar nodo (¿en donde?)
    Nodo *aux = Lista; //poder reconocer sin modificar la lista
    Nodo *ant = NULL; //este es el que va a permitir enlazar
    //Buscar donde enlazar
    while (aux != NULL && aux -> info < valor){
        ant = aux; //resguardo el valor anterior
        aux = aux -> sgte; //avanzo una posición sin perder lo anterior

    }
    if (ant == NULL ){ //1. Lista vacia 2. debo insertar al principio
        Lista = nuevo;
    }
    else { //1. en alguna parte de la lista 2. agregar al final de la lista        
        ant -> sgte = nuevo;
    }
    nuevo -> sgte = aux;
}
int eliminarPrimero(Nodo*&Lista){
    int retorno;
    retorno = Lista -> info;
    Nodo *aux = Lista;
    Lista = aux -> sgte; //Lista = Lista -> sgte
    delete (aux);
    return retorno;
}
void mostrarLista(Nodo*Lista){
    Nodo *aux = Lista;
    while (aux != NULL){
        cout << aux ->info << endl;
        aux = aux -> sgte;
    }
}
void liberarLista(Nodo*&Lista){
    Nodo * aux;
    while (Lista != NULL){
        aux = Lista;
        Lista = Lista -> sgte; //Lista = aux -> sgte
        delete(aux);
    }
}
Nodo *buscar (Nodo*Lista,int valor){
    Nodo *aux = Lista;
    while (aux !=NULL && aux->info != valor){
        aux = aux->sgte;
    }
    return aux;
}
void buscarYmostrar(Nodo *Lista, int valor){
    Nodo *aux = Lista;
    while (aux != NULL && aux->info != valor){
        aux = aux ->sgte;
    }
    if (aux == NULL){
        cout << "No lo encontro" << endl;
    }
    else{
        cout << "Encontro: " << aux ->info << endl;
    }
}
int contarNodos(Nodo *Lista){
    int contador = 0;
    Nodo *chaf = Lista;

    while (chaf != nullptr){
        contador++;
        chaf = chaf -> sgte;
    }
    return contador;

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
        cout << "Pos " << i << " " << aux->info << endl;
        aux = aux ->sgte;
        i++;
    }
}

void impresionCondicional (Nodo *&lista_sexual){
    int auxiliar = contarNodos(lista_sexual);
    if (auxiliar > 100){
        mostrarLista(lista_sexual);
    }
    else{
        //print in reserve from lista_sexual
        Nodo *Pila = NULL;
        while (lista_sexual != nullptr){
            push(Pila, eliminarPrimero(lista_sexual));
        }
        mostrarPila(Pila);

    }
} 