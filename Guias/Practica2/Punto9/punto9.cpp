#include <iostream>
#include <cstring>
using namespace std;

struct Conjunto{
    char nombre[25] = "";
    int fecha = 0; //AAAAMMDD
};

void burbujeoFecha(Conjunto vec[], int maximo);
void burbujeoNombre(Conjunto vec[], int maximo);
void burbujeoFecha(Conjunto vec[], int maximo);
void informarVec_nombre(Conjunto vec[],int maximo);
void cargarVec(Conjunto vec[], int maximo);


int main(){
    int maximo = 0;
    cout << "ingrese un valor maximo menor a 51: ";
    cin >> maximo;
    Conjunto Registro[maximo];

    cargarVec(Registro,maximo);
    
}

void burbujeoFecha(Conjunto vec[], int maximo){
    int auxiliar_int = 0;
    int i = 0, j = 0;
    char auxiliar_char[25] = "";

    for (i = 0; i < maximo; i++){
        for (j=0; j < maximo; j++){
            if(vec[i].fecha<vec[j].fecha){
                auxiliar_int = vec[i].fecha;
                strcpy(auxiliar_char,vec[i].nombre);
                vec[i].fecha = vec[j].fecha;
                vec[j].fecha = auxiliar_int;
                strcpy(vec[i].nombre, vec[j].nombre);
                strcpy(vec[j].nombre,auxiliar_char);
            }
        }
    }
    int ñ = 0;
    while(ñ < maximo){
        cout << vec[ñ].fecha << " " << vec[ñ].nombre << endl;
        ñ++;
    }
}

void burbujeoNombre(Conjunto vec[], int maximo){
    char auxiliar_char[25] = "";
    int i= 0, j=0,p=0, y = 0, length = 0, auxiliar_int = 0;
    for (i = 0; i < maximo; i++){
        for (j=0; j < maximo; j++){
            p = 0;
            while (p < 25){
                if (strcmp(vec[i].nombre, vec[j].nombre)==-1){
                    //A<B -> burbujeo
                        auxiliar_int = vec[i].fecha;
                        strcpy(auxiliar_char,vec[i].nombre);
                        vec[i].fecha = vec[j].fecha;
                        vec[j].fecha = auxiliar_int;
                        strcpy(vec[i].nombre, vec[j].nombre);
                        strcpy(vec[j].nombre,auxiliar_char);  
                        p = 25;                     
                }
                else if (strcmp(vec[i].nombre, vec[j].nombre)==1){
                    // A>B -> ordenado!
                    p = 25;
                }
                else { //strcmp(vec[i].nombre, vec[j].nombre)==0
                    // A == 0
                    p++;
                }
            }
        }
    }

}
void informarVec_nombre(Conjunto vec[],int maximo){
    int i = 0;
    while(i < maximo){
        cout << vec[i].nombre << " ";
        i++;
    }
}

void cargarVec(Conjunto vec[], int maximo){
    int aux = 0, i = 0;
    char aux_name[25];

    while(i<maximo){
        cout << "Persona numero " << i + 1 << " \n";
        cout<<"ingrese una fecha: ";
        cin >> aux;
        cout << "ingrse un nombre: ";
        cin >> aux_name;
        strcpy(vec[i].nombre,aux_name);
        vec[i].fecha = aux;
        i++;
    }
    burbujeoNombre(vec,maximo);
    informarVec_nombre(vec,maximo);
}
