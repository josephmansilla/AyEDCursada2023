#include <iostream>
using namespace std;
#include <cstring>

void burbuja(int[],int);
struct alumno{
    int legajo;
    char nombre [50];
    int promedio;
};

void burbuja(alumno[],int); //campo clave legajo ascendente

// busqueda sequuencial no se usa, busca binaria debería estar ordenado 
int main(){
    int N=6;
    int i;
    alumno vector [] = {{50,"juan",7},{22,"analia",8},{10,"alex",6},{100,"roxana",10},{9,"camila",9},{11,"dario",7}};
    burbuja (vector,N);

    for(i=0;i<N;i++){
        cout << vector [i].legajo << "," << vector [i].nombre << endl;
    }
}

void burbuja(alumno v[],int N)
{
	int i,j;
	alumno aux;
	for(i=1;i<N;i++) //PASOS
	{
		for(j=1;j<=N-i;j++)  //comparaciones
		{
			if(v[j-1].legajo>v[j].legajo)
			{
				aux=v[j-1];
				v[j-1]=v[j];
				v[j] = aux;
			}
		}
	}
}