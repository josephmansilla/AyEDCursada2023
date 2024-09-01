#include <iostream>
#include <stdio.h>
#include <cstring>
using namespace std;

//PUNTO 1

struct Usuario{
    int idUsuario;
    char nombreUsuario[250 + 1];
    char mail[100 + 1];
};

struct InfoVisualizacion{ //Cola
    int idPelicula;
    char nombrePelicula[100 + 1];
    int idUsuario;
};

struct nodoCola{
    InfoVisualizacion info;
    nodoCola *sgte;
};

struct infoSL{
    int idPelicula;
    char nombrePelicula[100 +1];
};

struct nodoSL{
    infoSL info;
    nodoSL *sgte;
};

struct infoLP{
    int idUsuario;
    int cantPelis;
    char nombreUsuario[250 + 1];
    nodoSL *sublista;
};

struct nodoLP{
    infoLP info;
    nodoLP *sgte;
};

nodoLP* obtenerListaUsuarios(FILE *Arch);
void cargarPelicula (nodoLP*&lista, InfoVisualizacion vec[]);
bool gustosSimilares(int idPelicula, char nombrePelicula);
void insertarOrdenado(nodoLP *&lista, infoLP valor);

int main(){
    FILE * Arch;
    return 0;
}

//PUNTO 2

nodoLP* obtenerListaUsuarios(FILE *Arch){
    nodoLP *lista = NULL;
    nodoSL *sublista = NULL;
    Usuario aux1;
    nodoLP aux2;
    InfoVisualizacion vec[100];
    int cantPelis = 0;

    Arch = fopen ("Usuarios.dat", "rb");

    while(fread(&aux1,sizeof(Usuario),1,Arch)){
        aux1.idUsuario = aux2.info.idUsuario;
        strcpy (aux1.nombreUsuario , aux2.info.nombreUsuario);
        cargarPelicula(aux2.info.sublista,vec);
        insertarOrdenado(lista, aux2.info);
    }

    return lista;
}

//PUNTO 3

void cargarPelicula (nodoLP*&lista, InfoVisualizacion vec[]){
    nodoLP *aux = lista;
    int i = 0;

while (aux->info.sublista != NULL){
    vec[i].idPelicula = aux->info.sublista->info.idPelicula;
    strcpy(vec[i].nombrePelicula, aux->info.sublista->info.nombrePelicula);
    insertarOrdenado(aux->info.sublista,aux->info.sublista->info);
    aux->info.cantPelis++;
    i++;
}
}





//PUNTO 4
bool gustosSimilares(nodoSL *sublista1, nodoSL *sublista2){
    int pelis_comun = 0;

    nodoSL *aux1 = sublista1;
    while(aux1 != nullptr){
        nodoSL *aux2 = sublista2;
    while(aux2 != NULL){
        if(aux1->info.idPelicula == aux2->info.idPelicula){
            pelis_comun++;
            break;
        }
        aux2 = aux2->sgte;
    }
    aux1 = aux1->sgte;
    }

    if (pelis_comun >=5){
        return true;
    } 
    else{
        return false;
    }
}
