#include <iostream>
using namespace std;

int doble_suma(int &x, int &y);

int main (){
    int primer=0;
    int segundo=0;

    cout << "Ingrese un valor: ";
    cin >> primer;
    cout << endl << "Ingrese otro valor: ";
    cin >> segundo;

    
    cout << endl << "Su resultado final es " << doble_suma(primer,segundo) << endl;
    cout << "Valores ahora " << primer << " y " << segundo << " !!!! :D";
}

int doble_suma(int &x, int &y){
    x = x + 1;
    y = y + 1;
    return x+y;
}