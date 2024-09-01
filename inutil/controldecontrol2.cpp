#include <iostream>
#include <cstring>
using namespace std;

{}
struct almuno{
    int codMateria;
    char nombreMateria[20];
    char nombre[50];
    int nota;
};
almuno vector[50];

/*ordenado por codigo materia y nombre
alumnos
nombres     nota

Cuando se termina un curso quiero qeu me pongan la cantidad
de almunos que tiene
1 AYED Pepe 8
1 AYED Juan 10
1 AYED Delfi 9
1 AYED Joseph 10
2 AM1 Dario 10
5 AS Juan 8
5 AS Delfi 10
8 SSL Gonzalo 9
8 SSL Dario 7
regional: RB


Materia: 1 AYED
    pepe 8      1   1
    juan 9      2   2
    delfi 10    3   3
    joseph 10   4   4  
        total: 4
Materia: 2 AMI
    pepe 7      1   5
    dario 10    2   6
        total:2


*/

void cc(almuno vector[],int N){
    int i=0;
    int contarGrupos = 0;
    int total = 0 ;
    int materiaAux;

    while (i<N)
    {
        contarGrupos = 0;
        materiaAux = vector[i].codMateria;
        //muestro el titulo del grupo
        std:: cout << "Materia: " << materiaAux << vector[i].nombre << endl;
        /* while (i<N && la misma regional && materiaAux == vector[i].codMateria)
        {choclo de codigo}..... */
        while(i<N && materiaAux == vector[i].codMateria)
        {
            std::cout << vector[i].nombre << "\t" << vector[i].nombre;
            contarGrupos++;
            total++;
            i++;
        }
        std::cout << "----------";
        std::cout << "Total: " << contarGrupos;
        
    }
    cout << "Cantidad de Resgistros procesados: " << total;
}

void apareo (int v1[],int v2[],int N, int M, int v3[],int& k){
    int j=0;
    int i=0;

}