#include <iostream>
using namespace std;
//Dado un archivo de enteros, ordenarlo.

struct Nodo{
    int info;
    Nodo *sgte;
}; 

void insertarOrdenado(Nodo *&Lista, int valor);
void liberarLista(Nodo*&Lista);
void mostrar(Nodo*Lista);

int main(){
    int carga;
    FILE *Entero = fopen ("enteros.dat","wb");

    cout << "ingrese un valor: ";
    cin >> carga;

    while (carga!=0){
        fwrite (&carga, sizeof(int),1,Entero);
        cout << "ingrese un valor: ";
        cin >> carga;
    }
    fclose(Entero);
    Entero = fopen ("enteros.dat", "rb");
    Nodo *Lista = NULL;
    int aux = 0, auxiliar_lectura = 0;

    fread(&aux,sizeof(int),1,Entero);

    while (!feof(Entero)){
        insertarOrdenado(Lista,aux);
        fread(&aux,sizeof(int),1,Entero);
    }
    fclose(Entero);

    Entero = fopen ("enteros.dat", "wb");
    Nodo *auxiliar = Lista;

    while (auxiliar!=NULL){
        fwrite (&auxiliar->info,sizeof(int),1,Entero);
        auxiliar = auxiliar->sgte;
    }
    fclose(Entero);
    mostrar(Lista);
    
    liberarLista(Lista);

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

void liberarLista(Nodo*&Lista){
    Nodo * aux;
    while (Lista != NULL){
        aux = Lista;
        Lista = Lista -> sgte; //Lista = aux -> sgte
        delete(aux);
    }
}

void mostrar(Nodo*Lista){
    Nodo *aux = Lista;
    while (aux != NULL){
        cout << aux ->info << endl;
        aux = aux -> sgte;
    }
}