#include <iostream>
#include <cstring>
using namespace std;

struct FechaNacimiento{
    int Dia = 0;
    int Mes = 0;
    int Ano = 0;
}Fecha;

struct ID{
    char nombre[20] = "";
    FechaNacimiento Fecha;
};
struct ApellidoNombre{
    char Apellido[20] = "";
    char Nombre[20] = "";
};

struct Calificaciones{
    int nota1 = 0;
    int nota2 = 0;
    int nota3 = 0;
};

struct ID_plus{
    int legajo = 0;
    ApellidoNombre NombreApellido;
    Calificaciones Resultados;
};

int busquedaSecuencial (int buscado, ID_plus vec[],int max);
int busquedaBinaria(ID_plus vec[], int buscado, int max);
void PrintFirst(ID_plus vec[]);

int main (){
    ID identificacion[20];
    ID_plus info[20];
    cout << identificacion[8].Fecha.Dia;
    cout << identificacion[0].nombre;
    int buscado = 0;
    cout << "ingrese el buscado: ";
    cin >> buscado;
    int encontro = busquedaSecuencial(buscado,info,20);
    if (encontro!=-1){
        cout << "Se encontro el legajo en la posición " << encontro;
    }
    else{
        cout << "No se encontro";
    }
    int encontro2 = busquedaBinaria(info,buscado,20);
    
}

void PrintFirst(ID_plus vec[]){
    cout << vec[0].NombreApellido.Apellido << " " << vec[0].legajo << endl;
    cout << vec[0].NombreApellido.Nombre << "\n";
    cout << "Nota 1: " << vec[0].Resultados.nota1 << endl << "Nota 2: " << vec[0].Resultados.nota2;
    cout << endl << "Nota 3: " << vec[0].Resultados.nota3;

}

int busquedaSecuencial (int buscado, ID_plus vec[],int max){
    int i = 0;

    while (i < max && vec[i].legajo != buscado){
        i++;
    }
    if(i<max){
        return i;
    }
    return -1;
}

int busquedaBinaria(ID_plus vec[], int buscado, int max){
    int ultimo = max - 1;
    int medio = 0;
    int primero = 0;
    while (primero <= ultimo){
        medio = (primero + ultimo) / 2;
        if (vec[medio].legajo==buscado){
            return medio; // la posicion donde se encontro
        }
        if (buscado > vec[medio].legajo){
            primero = medio + 1;
        }
        else{
            ultimo = medio - 1;
        }
    }
    return -1; // no está el dato
}