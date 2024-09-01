#include <iostream>
using namespace std;

typedef struct{
    int valorEntero;
    NodoEntero* sgte;
} NodoEntero;

typedef struct{
    int valorChar;
    NodoCharacter* sgte;
} NodoCharacter;

typedef struct{
    int valores[5];
    int valor1;
    char valor2;
} Ejemplo;

typedef struct{
    Ejemplo ej;
    NodoStruct* sgte;
} NodoStruct;

int main(){

}