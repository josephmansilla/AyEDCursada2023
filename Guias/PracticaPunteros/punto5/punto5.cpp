#include <iostream>
#include <cstring>
using namespace std;

struct Nodo {
    char info[2];
    Nodo* sgte;
};

void push(Nodo*& pila, char valor[2]);
char pop(Nodo*& pila);
bool inversa(Nodo*& pila_uno, Nodo*& pila_dos);
void cargar_pila(Nodo*& pila);


int main() {
    Nodo* pila_sexual = NULL;
    Nodo* pila_no_sexual = NULL;

    cout << "Carga de la 1ra pila... " << endl;
    cargar_pila(pila_sexual);
    cout << "Carga de la 2da pila... " << endl;
    cargar_pila(pila_no_sexual);

    if (inversa(pila_sexual, pila_no_sexual)) {
        cout << "\nLas pilas son inversas." << endl;
    } else {
        cout << "\nLas pilas NO son inversas." << endl;
    }


}

void push(Nodo*& pila, char valor[2]) {
    Nodo* nuevo = new Nodo();
    strcpy(nuevo->info, valor);
    nuevo->sgte = pila;
    pila = nuevo;
}

char pop(Nodo*& pila) {
    char retorno[2] = "";
    strcpy(retorno, pila->info);
    Nodo* aux = pila;
    pila = aux->sgte;
    delete (aux);
    return retorno[0];  // Return the first character from the array
}

bool inversa(Nodo*& pila_uno, Nodo*& pila_dos) {
    Nodo* pila_auxiliar = pila_uno;
    Nodo* pila_auxiliar_extra = pila_dos;
    char valor_auxiliarUNO[2] = "", valor_auxiliarDOS[2] = "";
    bool resultado = true;

    while (pila_auxiliar != nullptr) {
        valor_auxiliarDOS[0] = pop(pila_auxiliar_extra);  // Corrected here
        valor_auxiliarUNO[0] = pop(pila_auxiliar);        // Corrected here
        if (valor_auxiliarUNO[0] == valor_auxiliarDOS[0]) {
            resultado = false;
            break;
        }
    }

    return resultado;
}

void cargar_pila(Nodo*& pila) {
    char temp_char[2] = "";

    while (true) {
        cout << "Ingrese un caracter para ingresar (exit con X): ";
        cin >> temp_char;
        if (strcmp(temp_char, "X") == 0) {
            break;
        }
        push(pila, temp_char);
    }
    cout << "Pila cargada..." << endl;
}

