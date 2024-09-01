#include <iostream>
#include <cstring>
using namespace std;

struct infracciones{
    int tipo;
    char motivo[100];
    double valor;
    char gravedad[2];
};

int main(){

    infracciones fabrica;
    int clausura=0;
    double totalvalorG = 0;
    double totalvalorM = 0;
    double totalvalorL = 0;

    for(int i=0; i < 5;i++){
        cout << "Tipo de infraccion: ";
        cin >> fabrica.tipo;
        cout << "Gravedad: ";
        cin >> fabrica.gravedad;
        cout << "Motivo de la infraccion: ";
        cin >> fabrica.motivo;
        cout << "Valor de la multa: ";
        cin >> fabrica.valor;

        if (strcmp(fabrica.gravedad, "G") == 0) {
            totalvalorG += fabrica.valor;
            if (fabrica.tipo == 3 || fabrica.tipo == 4){
                clausura++;
            }
        }
        else if (strcmp(fabrica.gravedad, "M") == 0){
            totalvalorM += fabrica.valor;
        }
        else if (strcmp(fabrica.gravedad, "L") == 0){
            totalvalorL += fabrica.valor;
        }
    }
    cout << "El valor total de Grave es " << totalvalorG << endl;
    cout << "El valor total de Mediano es " << totalvalorM << endl;
    cout << "El valor total de Leve es " << totalvalorL << endl;
    if (clausura >= 3){
        cout << "CLAUSURAR FABRICA";
    }
}