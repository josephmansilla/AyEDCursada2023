#include <iostream>
using namespace std;

/* -------------------------------ESTRUCTURAS ---------------------------------------------------------------*/

struct alumno{
    int legajo;
    char nombre[50];
    int CantMatAprobadas;
};

/*-----------------------------FUNCIONES DECLARADAS ------------------------------------------------- */

int bus_bin(alumno vector[],int,int);
void burbuja(alumno v[],int);

/* ------------------------------------MAIN --------------------------------------------------------------------------*/

int main(){
    /*Dado un vector desordenado con la estructura dada, encontrar el nombre del legajo 100*/
    int m=3;
    int objetivo = 100;
    alumno vector[]={{20,"juan",2},{10,"pedro",3},{100,"richard",8}};

    burbuja(vector,m);
    int dato = bus_bin(vector,m,objetivo);

    cout <<"El nombre del alumno con legajo 100 es: " << vector[dato].nombre;
}

/* ---------------------------FUNCIONES DEFINIDAS -------------------------------------------------------------*/

void burbuja(alumno v[], int m){
    int i,j;
    alumno aux;
    for(i=1;i<m;i++)
    {
        for (j=1; j <= m - i; j++)
        {
            if ( v[j-1].legajo > v[j].legajo)
            {
                aux=v[j-1];
                v[j-1]=v[j];
                v[j]=aux;
            }
        }
    }
}

//Busqueda Binaria
int bus_bin(int vector[],int N, int buscado){ 

    int primero = 0;
    int ultimo = N-1;
    int medio;
    

    while ( primero <= ultimo ) // el valor no está, mientras tenga posibilidad itero
    {
        medio=(primero+ultimo) / 2;

        if ( vector[medio] == buscado )
        {
            return medio;
        }
        else{
            if( vector[medio] > buscado )
            {
                ultimo = medio - 1;
            }
            else{
                primero = medio + 1;
            }

        }
    }
    return -1;
}