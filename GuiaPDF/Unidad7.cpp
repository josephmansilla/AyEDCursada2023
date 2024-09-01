#include <iostream>
using namespace std;

struct Estudiantes{
    char nombre[25];
    char apellido[25];
    int legajo;
    int curso;
    char materia[20];
    char turno[7];
}utn; 
void completado_datos(Estudiantes &utn);

int main (){
    Estudiantes Vector;
    completado_datos(utn);


}
void completado_datos(Estudiantes &utn){
    cout << "ingrese el nombre: ";
    cin >> utn.nombre;
    cout << "ingrese el apellido: ";
    cin >> utn.apellido;
    cout << "ingrese el legajo: ";
    cin >> utn.legajo;
    cout << "ingrese el curso: ";
    cin >> utn.curso;
    cout << "ingrese el materia: ";
    cin >> utn.materia;
    cout << "ingrese el turno: ";
    cin >> utn.turno;

    cout << utn.nombre << " " << utn.apellido << endl << utn.legajo << endl << "Curso " << utn.curso << endl;
    cout << utn.materia << endl << "Turno " << utn.turno << endl;
}
