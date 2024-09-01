#include <iostream>
using namespace std;

struct Nodo {
    int info;
    Nodo *sgte;
};

void agregar(Nodo *&cfte, Nodo*&cfin, int valor);
int suprimir(Nodo *&cfte, Nodo *&cfin);
int tamañoCola(Nodo *cfte);
void cargaCola(Nodo *cfte[], Nodo *cfin[], int tamaño);
void mostrarCola(Nodo *cfte[],int tamaño);
void combinarColas(Nodo *vecColaFrente[],Nodo *vecColaFin[], int tamaño);

int main() {
    int N = 0;

    cout << "ingrese un valor N: ";
    cin >> N;

    Nodo *vecColaFrente[N] = {NULL};
    Nodo *vecColaFin[N] = {NULL};
    
    cargaCola(vecColaFrente,vecColaFin,N);
    mostrarCola(vecColaFrente,N);

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
void cargaCola(Nodo *cfte[], Nodo *cfin[], int tamaño){
    int carga = 0, i = 0,contador=0;

    cout << "Ingrese un valor: ";
    cin >> carga;

    while(i < tamaño){
        while(carga != 0 || contador == 0){
            agregar(cfte[i], cfin[i], carga);
            cout << "Ingrese un valor (termina con 0): ";
            cin >> carga;
            contador = carga;
            cout << "Siguiente nodo..." << endl;
        }
        contador = 0;
        cout << "Siguiente pos..." << endl;
        i++;
    }
    
}
void mostrarCola(Nodo *cfte[], int tamaño){
    int i = 0;
    while (i<tamaño){
        Nodo *temp = cfte[i];

        while (temp != nullptr) {
            cout << temp->info << " ";
            temp = temp->sgte;
        }
        cout << endl;
        i++;
    }
    
}

void combinarColas(Nodo* vecColaFrente[], Nodo* vecColaFin[], int tamaño) {
    int i = 0;
    while (i + 1 < tamaño) {
        if (vecColaFrente[i] != nullptr || vecColaFrente[i + 1] != nullptr) {
            if (vecColaFrente[i] == nullptr) {
                agregar(vecColaFrente[i + 2], vecColaFin[i + 2], suprimir(vecColaFrente[i + 1], vecColaFin[i + 1]));
            } else if (vecColaFrente[i + 1] == nullptr) {
                agregar(vecColaFrente[i + 2], vecColaFin[i + 2], suprimir(vecColaFrente[i], vecColaFin[i]));
            } else {
                int valorA = vecColaFrente[i]->info;
                int valorB = vecColaFrente[i + 1]->info;

                if (valorA > valorB) {
                    agregar(vecColaFrente[i + 2], vecColaFin[i + 2], suprimir(vecColaFrente[i], vecColaFin[i]));
                } else {
                    agregar(vecColaFrente[i + 2], vecColaFin[i + 2], suprimir(vecColaFrente[i + 1], vecColaFin[i + 1]));
                }
            }
        }
        i += 2; // Increment i by 2 for the next pair
    }
}
