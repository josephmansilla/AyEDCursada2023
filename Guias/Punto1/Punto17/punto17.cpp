#include <iostream>
using namespace std;

float CalcularPorcentajeDiferencia(int, int);

int main(){
    float primer = 0, segundo = 0;
    cout << "Ingrese el 1er valor: ";
    cin >> primer;
    cout << "Ingrese el 2do valor: ";
    cin >> segundo;

    cout << CalcularPorcentajeDiferencia(primer,segundo);
}

float CalcularPorcentajeDiferencia(int A, int B){
    return (B-A)*100 / (A+B);
}
