#include <iostream>
using namespace std;
struct Fecha{
    int d;
    int m;
    int a;
};

struct Trabajador{
    char nombre[25] = "";
    float sueldo = 0;
    Fecha fecha;
};

void completado_datos(Trabajador &ID);

int main(){
    Trabajador empleados_anterior;
    completado_datos(empleados_anterior);
    if (empleados_anterior.fecha.a < 2024){
        empleados_anterior.sueldo += empleados_anterior.sueldo * 0.34;
        cout << "Nuevo sueldo: " << empleados_anterior.sueldo;
    }
    else if (empleados_anterior.fecha.a == 2024){
        if (empleados_anterior.fecha.m < 02){
            empleados_anterior.sueldo += empleados_anterior.sueldo * 0.34;
            cout << "Nuevo sueldo: " << empleados_anterior.sueldo;
        }
        else if (empleados_anterior.fecha.m == 02){
            if(empleados_anterior.fecha.d < 12){
                empleados_anterior.sueldo += empleados_anterior.sueldo * 0.34;
                cout << "Nuevo sueldo: " << empleados_anterior.sueldo;
            }
            else if (empleados_anterior.fecha.d == 12){
                cout << "No elegible para aumento de salario...";
            }
            else{
                cout << "No elegible para aumento de salario...";
            }
        }
        else{
            cout << "No elegible para aumento de salario...";
        }
    }
    else{
        cout << "No elegible para aumento de salario...";
    }
    
}

void completado_datos(Trabajador &ID){
    cout << "Ingrese el Nombre: ";
    cin >> ID.nombre;
    cout << "Ingreso el sueldo: ";
    cin >> ID.sueldo;
    cout << "Ingrese el dia de ingreso: ";
    cin >> ID.fecha.d;
    cout << "Ingrese el mes de ingreso: ";
    cin >> ID.fecha.m;
    cout << "Ingrese el ano de ingreso: ";
    cin >> ID.fecha.a;

    cout << ID.nombre << endl << ID.sueldo << endl << "-INGRESO-" << endl << ID.fecha.d << "/";
    cout << ID.fecha.m << "/" << ID.fecha.a << endl;
}
