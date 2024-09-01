#include <iostream>
#include <cstring>
using namespace std;

struct Nodo {
    char info[2];
    Nodo* sgte;
};

void push(Nodo*& pila, char valor[2]);
char pop(Nodo*& pila);
void impresion_inversa(Nodo*& pila_uno);
void cargar_pila(Nodo*& pila);


int main() {
    Nodo* pila_sexual = NULL;

    cout << "Carga de la pila... " << endl;
    cargar_pila(pila_sexual);
    impresion_inversa(pila_sexual);

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

void impresion_inversa(Nodo*& pila_uno) {
    char temp_char[2] = "";
    while (pila_uno != nullptr){
        temp_char[0] = pop(pila_uno);
        cout << temp_char[0];
    }
    cout << endl << "Nombre inverso!!!!";
}

void cargar_pila(Nodo*& pila) {
    char temp_char[2] = "";

    while (true) {
        cout << "Ingrese un string para ingresar (exit con X): ";
        cin >> temp_char;
        if (strcmp(temp_char, "X") == 0) {
            break;
        }
        push(pila, temp_char);
    }
    cout << "Pila cargada..." << endl <<endl;
}

