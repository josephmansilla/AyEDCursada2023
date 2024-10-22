#include <iostream>
using namespace std;

typedef struct {
    char nombre[10+1];
    int edad;
    double promedio;
} Alumno;

int main(){
    int i, j;
    Alumno almuno[3];

    for (i=0; i<3; i++){
        cout << "ingrese su nombre: ";
        cin >> almuno[i].nombre;
        cout << "ingrese su edad: ";
        cin >> almuno[i].edad;
        cout << "ingrese su promedio: ";
        cin >> almuno[i].promedio;
    }
    
    for (j=0; j<3; j++){
        cout << "El nombre del alumno es " << almuno[j].nombre << endl;
        cout << "La edad del almuno es " << almuno[j].edad << endl;
        cout << "El promedio del alumno es " << almuno[j].promedio << endl;
    }
    return 0;
}