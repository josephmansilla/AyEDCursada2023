#include <iostream>
using namespace std;

struct Nodo {
    int info;
    Nodo *sgte;
};

void agregar(Nodo *&cfte, Nodo*&cfin, int valor);
int suprimir(Nodo *&cfte, Nodo *&cfin);
int tamañoCola(Nodo *cfte);
void suprimirdos(Nodo *&cfte, Nodo *&cfin);

int main() {
    // Definición de cola
    Nodo* colafrente = NULL;
    Nodo* colafin = NULL;
    int carga = 0;

    cout << "Ingrese un valor: ";
    cin >> carga;

    while (carga != 0) {
        agregar(colafrente, colafin, carga);
        cout << "Ingrese un valor o termine con 0: ";
        cin >> carga;
    }

    suprimirdos(colafrente, colafin);

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

void suprimirdos(Nodo *&cfte, Nodo *&cfin) {
    if (tamañoCola(cfte) >= 2) {
        int suprimidos[3] = {0};
        for (int i = 0; i < 2; i++) {
            suprimidos[i] = suprimir(cfte, cfin);
            cout << suprimidos[i] << " ";
        }
        cout << endl << "S" << endl;
    }
    else{
        cout << "N" << endl;
    }
    
}
