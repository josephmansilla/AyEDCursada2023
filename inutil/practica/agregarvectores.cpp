#include <iostream>
using namespace std;

void imprimirVector(int v[], int cant);
void agregarVector(int v[], int &cant, int valor);

int main(){
    int cant = 4, input = 0;
    int v[cant] = {1,2,3,4};

    imprimirVector(v,cant);
    cout << "¿Que numero desaa agregar?" << endl;
    cin >> input;
    agregarVector(v,cant,input);
    imprimirVector(v,cant);

}

void imprimirVector(int v[], int cant){
    for (int i=0;i<cant;i++){
        cout << v[i] << " ";
    }
    cout << endl;
}

void agregarVector(int v[], int &cant, int valor){
    v[cant] = valor;
    cant++;
}