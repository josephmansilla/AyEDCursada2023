#include <iostream>
#include <cstring>
using namespace std;

struct Fecha{
    int dia = 0;
    int mes = 0;
    int año = 0;
};

struct Boleta{
    int legajo = 0;
    int codigomateria = 0;
    Fecha fecha;
    char nom_apellido[25]= "";
    
};

void escritura_archivo(Boleta boleta);
void lectura_archivo();

int main(){
    Boleta inscripcionesMayo;
    //escritura_archivo(inscripcionesMayo);
    lectura_archivo();
}


void escritura_archivo(Boleta boleta){
    FILE * inscripcion = fopen ("boletas.bin","wb");

    cout << "Ingrese el nombre: ";
    cin >> boleta.nom_apellido;
    cout << "Ingrese el legajo: ";
    cin >> boleta.legajo;
    cout << "Ingrese el codigo de la materia: ";
    cin >> boleta.codigomateria;
    cout << "Ingrese la fecha..." << endl << "Dia: ";
    cin >> boleta.fecha.dia;
    cout << "Mes: ";
    cin >> boleta.fecha.mes;
    cout << "Ano: ";
    cin >> boleta.fecha.año;
    fwrite(&boleta,sizeof(Boleta),1,inscripcion);

    while(strcmp(boleta.nom_apellido, "x") != 0){
        cout << "Ingrese el nombre: ";
        cin >> boleta.nom_apellido;
        if (strcmp(boleta.nom_apellido, "x") == 0){
            break;
        }
        cout << "Ingrese el legajo: ";
        cin >> boleta.legajo;
        cout << "Ingrese el codigo de la materia: ";
        cin >> boleta.codigomateria;
        cout << "Ingrese la fecha..." << endl << "Dia: ";
        cin >> boleta.fecha.dia;
        cout << "Mes: ";
        cin >> boleta.fecha.mes;
        cout << "Ano: ";
        cin >> boleta.fecha.año;
        fwrite(&boleta,sizeof(Boleta),1,inscripcion);
    }
    fclose(inscripcion);
}

void lectura_archivo(){
    Boleta aux;
    FILE * inscripcion = fopen("boletas.bin", "rb");
    fseek(inscripcion,0,SEEK_SET);

    while(fread(&aux, sizeof(Boleta), 1, inscripcion)==1){
        cout << "\nLegajo: " << aux.legajo << endl;
        cout << "Nombre: " << aux.nom_apellido << endl;
        cout << "Codigo de materia: " << aux.codigomateria << endl;
        cout << "Fecha..." << endl << "Dia: " << aux.fecha.dia << " Mes: " << aux.fecha.mes;
        cout << " Ano: " << aux.fecha.año <<endl;
    }

    fclose (inscripcion);
}