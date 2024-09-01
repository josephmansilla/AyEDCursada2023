#include <iostream>
using namespace std;

typedef struct{
    char nombre[10+1];
    int edad;
    double promedio;
} Almuno;

int main (){
    Almuno primer;
    cout << "ingrese su nombre: ";
    cin >> primer.nombre;
    cout << "ingrese su edad: ";
    cin >> primer.edad;
    cout << "ingrese su promedio: ";
    cin >> primer.promedio;

    cout << "El nombre del alumno es " << primer.nombre << endl;
    cout << "La edad del almuno es " << primer.edad << endl;
    cout << "El promedio del alumno es " << primer.promedio << endl;

    return 0;

}