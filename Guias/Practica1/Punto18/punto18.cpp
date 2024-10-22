#include <iostream>
#include <cstring>
using namespace std;

string Tendencia(int,int);

int main (){
    int primer = 0;
    int segundo = 0;
    cout << "Ingrese 1er valor: ";
    cin >> primer;
    cout << "Ingrese 2do valor: ";
    cin >> segundo;

    cout << Tendencia(primer,segundo);
}

string Tendencia(int A, int B){
    if((B-A)<0){
        return "Decreciente";
    }
    else if((B-A) < (0.02*A)){
        return "Estable";
    }
    else if ((B-A)< (0.05*A)){
        return "Leve ascenso";
    }
    else{
        return "En ascenso";
    }
}