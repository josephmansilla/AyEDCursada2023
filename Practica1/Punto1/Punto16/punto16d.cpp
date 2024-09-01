#include <iostream>
#include <cstring>
using namespace std;

int main(){
    int cant_cero = 0;
    double pro_pos = 0, contador = 0;
    int sum_neg = 0;
    int input = 0; 
    int cant = 0, i =0;

    cout << "Ingrese la cantidad de numeros: ";
    cin >> cant;

    while(i<=cant && cant_cero <= 4){
        cout << "Ingrese un valor: ";
        cin >> input;

        if (input == 0){
            cant_cero++;
        }
        else if (input > 0)
        {
            contador++;
            pro_pos += input;
        }
        else if (input < 0){
            sum_neg += input;
        }
        i++;
        
    }
    cout << "El 0 aparecio " << "-" << cant_cero << "-" << " veces" << endl;
    cout << "El promedio de valores postivos es " << pro_pos / contador << endl;
    cout << "La sumatoria de valores negativos es " << sum_neg << endl;
}