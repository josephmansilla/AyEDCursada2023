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

void encontrar_legajo(FILE* final, FILE* ordenado);
void lectura_archivo();

int main (){
    
    FILE * final; 
    FILE * ordenado; 
    encontrar_legajo(final,ordenado);
    lectura_archivo();
}


void encontrar_legajo(FILE* final, FILE* ordenado){ 
    Boleta auxiliar, auxiliar2;
    final = fopen("matfinales.bin","rb");
    ordenado = fopen("ordenado.bin","wb");

    fseek(final,0,SEEK_SET);

    while(fread(&auxiliar,sizeof(Boleta),1,final)){
        if (auxiliar.legajo > 80000){
            //fseek(ordenado,sizeof(auxiliar2)*(auxiliar.legajo-80001),SEEK_SET); // P.U.P. en archivos
            auxiliar2.legajo = auxiliar.legajo;
            strcpy(auxiliar2.nom_apellido,auxiliar.nom_apellido);
            fwrite(&auxiliar2,sizeof(Boleta),1,ordenado);
        }
    
    }
    fclose(ordenado);
    fclose(final);
}

void lectura_archivo(){
    Boleta aux;
    FILE * ordenado = fopen("ordenado.bin", "rb");
    fseek(ordenado,0,SEEK_SET);
    int i = 0;
    while(fread(&aux, sizeof(Boleta), 1, ordenado) == 1){
        cout << "\nLegajo: " << aux.legajo << endl;
        cout << "Nombre: " << aux.nom_apellido << endl;
        i++;
    }

    fclose (ordenado);
}