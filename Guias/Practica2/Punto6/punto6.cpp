#include <iostream>
using namespace std;

struct Inscripcion{
    int num_socio = -1;
    int num_deporte = 0;
};

void inscripciones();

int main(){
    inscripciones();
}

void inscripciones(){
    Inscripcion depor;
    int cod_deportes[20] = {0};
    int mayor_deportes = 0, mayor_id = 0;
    int contador = 1;
    while (depor.num_socio!=0){
        cout << "Ingreso " << contador << endl;
        cout << "ingrese el numero de socio: ";
        cin >> depor.num_socio;
        cout << "ingrese el numero del deporte: ";
        cin >> depor.num_deporte;
        cod_deportes[depor.num_deporte-1]++;
        contador++;
    }
    for (int i = 0;i<20;i++){
        if (cod_deportes[i]>mayor_deportes){
            mayor_deportes = cod_deportes[i];
            mayor_id = i+1;
        }
    }
    for (int j = 0;j<20;j++){
        cout << "La cantidad de inscriptos en deporte " << j+1 << " son " << cod_deportes[j] << endl;
    }
    cout << "El codigo de deportes con mas inscriptos es " << mayor_id << " con " << mayor_deportes; 
}