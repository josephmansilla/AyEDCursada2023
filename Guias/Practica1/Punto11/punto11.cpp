#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

int main(){
    int contador = 0,cant = 0;
    double input = 0, mayor = 0, menor = 0, posmenor = 0, posmayor = 0;
    cout << "Ingresar la cantidad de valores a leer: ";
    cin >> cant;

    for (int i = 0; i < cant; i++){
        cout << "\nIngrese un valor: ";
        cin >> input;
        if (i==0 || input > mayor){
            mayor = input;
            posmayor = i;
        }
        if (i==0 || input < menor){
            menor = input;
            posmenor = i;
        }
    }
    cout << "Mayor: " << mayor << ", en la posicion: " << posmayor;
    cout << "\nMenor: " << menor << ", en la posicion: " << posmenor;
}