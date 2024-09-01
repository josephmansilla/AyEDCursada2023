/*Dadas dos listas LISTA y LISTB (nodo = registro + puntero), desarrollar y codificar un
procedimiento que genere otra lista LISTC por apareo del campo LEGAJO del registro
(define orden creciente en ambas).
Nota: LISTA y LISTB dejan de ser útiles después del apareo)*/

#include <iostream>
using namespace std;

struct tinfo{
    int legajo;
    char nombre;
};

struct Nodo{
    tinfo info;
    Nodo*sgte;
};

void agregarPrimero(Nodo *&Lista,tinfo valor);
void insertarOrdenado(Nodo *&Lista, tinfo valor);
tinfo eliminarPrimero(Nodo *&Lista); //Devuelvo es del tipo Tinfo
void mostrar(Nodo*Lista);
void liberarLista(Nodo*&Lista); //no puede faltar
Nodo *buscarLegajo (Nodo*Lista,tinfo valor);
void buscarYmostrar(Nodo *Lista, tinfo valor);
void apareo (Nodo *&List_A, Nodo *&List_B, Nodo *&List_C);
void cargarListaSexual(Nodo *&listita);


int main(){

    Nodo *Lista = NULL;
    Nodo *Listb = NULL;
    Nodo *Listc = NULL;

    cout << "Primera lista... " << endl;
    cargarListaSexual(Lista);
    cout << "Segunda lista... " << endl;
    cargarListaSexual(Listb);
    
    apareo(Lista,Listb,Listc);

    mostrar(Listc);

}


void agregarPrimero(Nodo *&Lista,tinfo valor){
    //Crear Nodo
    Nodo *nuevo = new Nodo();
    //Cargar el nodo
    nuevo -> info.legajo = valor.legajo;
    nuevo -> info.nombre = valor.nombre;
    nuevo -> sgte = Lista;
    //Enlazar
    Lista = nuevo;
}
void insertarOrdenado(Nodo *&Lista, tinfo valor){
    //Crear el nodo
    Nodo *nuevo = new Nodo();
    //Cargar nodo
    nuevo -> info.legajo = valor.legajo;
    nuevo -> info.nombre = valor.nombre;

    nuevo -> sgte = NULL; // porque no se todavia donde va a ir
    //Enlazar nodo (¿en donde?)
    Nodo *aux = Lista; //poder reconocer sin modificar la lista
    Nodo *ant = NULL; //este es el que va a permitir enlazar
    //Buscar donde enlazar
    while (aux != NULL && aux -> info.legajo < valor.legajo){
        ant = aux; //resguardo el valor anterior
        aux = aux -> sgte; //avanzo una posición sin perder lo anterior

    }
    if (ant == NULL){ //1. Lista vacia 2. debo insertar al principio
        Lista = nuevo;
    }
    else { //1. en alguna parte de la lista 2. agregar al final de la lista        
        ant -> sgte = nuevo;
    }
    nuevo -> sgte = aux;
}
tinfo eliminarPrimero(Nodo*&Lista){
    tinfo retorno;
    retorno.legajo = Lista -> info.legajo;
    retorno.nombre = Lista -> info.nombre;
    Nodo *aux = Lista;
    Lista = aux -> sgte; //Lista = Lista -> sgte
    delete (aux);
    return retorno;
}
void mostrar(Nodo*Lista){
    Nodo *aux = Lista;
    while (aux != NULL){
        cout << aux ->info.legajo << " " << aux -> info.nombre << endl;
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
Nodo *buscarLegajo (Nodo*Lista,tinfo valor){
    Nodo *aux = Lista;
    while (aux !=NULL && aux->info.legajo != valor.legajo){
        aux = aux->sgte;
    }
    return aux;
}
void buscarYmostrar(Nodo *Lista, tinfo valor){
    Nodo *aux = Lista;
    while (aux != NULL && aux->info.legajo != valor.legajo){
        aux = aux ->sgte;
    }
    if (aux == NULL){
        cout << "No lo encontro" << endl;
    }
    else{
        cout << "Encontro: " << aux ->info.legajo << endl;
    }
}

void apareo (Nodo *&List_A, Nodo *&List_B, Nodo *&List_C){
    while (List_A != nullptr || List_B != nullptr ){
        if(List_A == nullptr){
            insertarOrdenado(List_C, eliminarPrimero(List_B));
        }
        else if (List_B == nullptr){
            insertarOrdenado(List_C, eliminarPrimero(List_A));
        }
        else {
            tinfo valorA = List_A -> info;
            tinfo valorB = List_B -> info;

            if (valorA.legajo < valorB.legajo){
                insertarOrdenado(List_C, eliminarPrimero(List_A));
            }
            else{
                insertarOrdenado(List_C, eliminarPrimero(List_B));
            }

        }
    }
}


void cargarListaSexual(Nodo *&listita){
    tinfo sexo;
    cout << "Ingrese un legajo: ";
    cin >> sexo.legajo;
    cout << "ingrese un nombre: ";
    cin >> sexo.nombre;

    while(sexo.legajo != 0){
        agregarPrimero(listita,sexo);
        cout << "ingrese un legajo (termina en 0): ";
        cin >> sexo.legajo;
        if (sexo.legajo != 0) {
            cout << "ingrese un nombre: ";
            cin >> sexo.nombre;
        }
        
    }
}