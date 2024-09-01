#include <iostream>
#include <cstring>
using namespace std;

int main(){
    int contador = 0,cant = 0;
    double input = -1, mayorneg = -99999, menorpos = 99999, promedio = 0, minimoespecial = 26.91;

    while(input!=0){
        cout << "\nIngrese un valor: ";
        cin >> input;
        promedio += input;
        contador++;
        if (input > mayorneg && input < 0){
            mayorneg = input;
        }
        if (input > 0 && input < menorpos){
            menorpos = input;
        }
        if (input > -17,3 && input < 26.9 && input < minimoespecial){
            minimoespecial = input;
        }
    }
    cout << "Mayor negativo: " << mayorneg << endl;
    cout << "Menor positivo: " << menorpos << endl;
    cout << "El minimo entre -17,3 y 26,9 es " << minimoespecial << endl;
    cout << "El promedio de todos los valores es " << promedio/contador;
}
