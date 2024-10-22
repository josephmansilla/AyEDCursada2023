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

void copiado_archivo();
void lectura_archivo();

int main (){
    lectura_archivo();
    copiado_archivo();
    lectura_archivo();
}

void copiado_archivo(){
    FILE * inscripcion = fopen ("boletas.bin","rb");
    FILE * finales = fopen("matfinales.bin","wb");
    if (!inscripcion || !finales) {
        cout << "Error opening files." << endl;
        return;
    }
    Boleta auxiliar;

    while (fread(&auxiliar, sizeof(Boleta), 1, inscripcion) == 1) {
        fwrite(&auxiliar, sizeof(Boleta), 1, finales);
    }

    fclose(inscripcion);
    fclose(finales);
}

void lectura_archivo(){
    Boleta aux;
    FILE * final = fopen("matfinales.bin", "rb");
    fseek(final,0,SEEK_SET);

    while(fread(&aux, sizeof(Boleta), 1, final) == 1){
        cout << "\nLegajo: " << aux.legajo << endl;
        cout << "Nombre: " << aux.nom_apellido << endl;
        cout << "Codigo de materia: " << aux.codigomateria << endl;
        cout << "Fecha..." << endl << "Dia: " << aux.fecha.dia << " Mes: " << aux.fecha.mes;
        cout << " Ano: " << aux.fecha.año <<endl;
    }

    fclose (final);
}
