#include <iostream>
using namespace std;

/*Dado un vector 15 valores, hacer un programa que pueda obtener, y sacar
por pantalla:
−el mayor de los valores
−el menor de los valores
−el más próximo al promedio
*/

int main(){
    int SuperVector[15] = {3,5,1,7,8,5,8,5,10,1,1,1,4,7,9}; //75
    int mayor = 0;
    int menor;
    int sumador;
    int aux = 0;
    int promedio;

    for (int i=0; i<15; i++){
        if (SuperVector[i]>mayor){
            mayor = SuperVector[i];
        }
        if (SuperVector[i]<menor){
            menor = SuperVector[i];
        }
        aux = SuperVector[i];
        sumador = sumador + aux;
    }
    cout << sumador << endl;
    promedio = sumador / 15;
    cout << "El mayor es " << mayor << endl;
    cout << "El menor es " << menor << endl;
    cout << "el promedio es " << promedio << endl;
    
}