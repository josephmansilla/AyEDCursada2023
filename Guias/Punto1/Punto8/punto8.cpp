#include <iostream>
using namespace std;

int main(){
    double input = 0;
    double aux = 0, aux2 = 0;
    int contador = 0;

    for(int i=50;i>0;i--){
        cin >> input;
        if (input > 100){
            contador++;
            aux += input;
        }
        else if (input < -10){
            aux2 += input;
        }
    }
    cout << "El promedio de los > de 100 es " << aux / contador << endl;
    cout << "La suma de los < de -10 es " << aux2 << endl;
}