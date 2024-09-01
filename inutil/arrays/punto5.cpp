#include <iostream>
using namespace std;

/* Hacer un programa que permita realizar la suma y el producto de dos
vectores. El usuario deberá poder elegir el tamaño del vector (entre 2 y 10
valores).*/

int main(){
    int m;
    int vector1[3] = {1,2,3};
    int vector2[3] = {4,5,6};
    int resultado;

    cout << "Ingrese el tam de los vectores entre 2 y 10: ";
        cin >> m;

    for (int i=0;i<3;i++){
        cout << endl << "Multiplicacion:";
        resultado = vector1[i] * vector2[i];
        cout << resultado;
    }

    
    for (int i=0;i<3;i++){
        cout << endl << "Suma:";
        resultado = vector1[i] + vector2[i];
        cout << resultado;
    }


}