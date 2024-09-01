#include <iostream>
#include <stdio.h>
#include <cstring>
using namespace std;

struct Notas{
    int p_parcial = 0;
    int s_parcial = 0;
};
struct Estudiantes{
    int legajo = 0;
    Notas nota;
};

void escritura_archivo(Estudiantes vec);
void lectura_archivo();

int main (){    
    Estudiantes catedra;
    escritura_archivo(catedra);
    lectura_archivo();
}

void escritura_archivo(Estudiantes vec){
    FILE * base_alumnos = fopen ("curso.bin","wb");
    cout << "Ingrese el legajo: ";
    cin >> vec.legajo;
    cout << "Ingrese las notas: " << endl << "Primer Parcial = ";
    cin >> vec.nota.p_parcial;
    cout << "Segundo Parcial = ";
    cin >> vec.nota.s_parcial;
    fwrite(&vec,sizeof(Estudiantes),1,base_alumnos);   

    while(vec.legajo >= 0){
        cout << "Ingrese el legajo: ";
        cin >> vec.legajo;
        if (vec.legajo<0){
            break;
        }
        cout << "Ingrese las notas: " << endl << "Primer Parcial = ";
        cin >> vec.nota.p_parcial;
        cout << "Segundo Parcial = ";
        cin >> vec.nota.s_parcial;
        fwrite(&vec,sizeof(Estudiantes),1,base_alumnos);
    }
    fclose(base_alumnos);
}

void lectura_archivo(){
    Estudiantes aux;
    FILE * base_alumnos = fopen("curso.bin", "rb");
    fseek(base_alumnos,0,SEEK_SET);

    while(fread(&aux, sizeof(Estudiantes), 1, base_alumnos) == 1){
        cout << "\nLegajo: " <<aux.legajo << endl;
        cout << "Primer Parcial: " << aux.nota.p_parcial << endl;
        cout << "Segundo Parcial: " << aux.nota.s_parcial << endl;
    }

    fclose (base_alumnos);
}