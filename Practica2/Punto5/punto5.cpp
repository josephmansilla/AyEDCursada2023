#include <iostream>
using namespace std;

void contarYmostrar();

int main(){
    
    contarYmostrar();
}

void contarYmostrar(){
    int dado1 = 0, dado2 = 0;
    int puntaje[13] = {0};

    for (int i = 0; i<10;i++){
        cout << "Tirada " << i+1<<endl;
        cout << "ingrese el primer dado: ";
        cin >> dado1;
        cout << "ingrese el segundo dado: ";
        cin >> dado2;

        puntaje[dado1+dado2]++;
    }
    for (int j = 0;j<10;j++){
        cout << 2+j << " salio " << puntaje[j] << " veces." << endl;
    }
}