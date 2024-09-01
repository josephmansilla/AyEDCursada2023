#include <iostream>
using namespace std;

void imprimirVector(char[], int);
void inicializarChar(char[], int);
void imprimirInverso(char[],int);

int main(){
    int i = 0;
    char caracteringresado;
    char caracter[21];
    inicializarChar(caracter, 21);

    while(caracteringresado =! '/'){
        cout << "ingrese carater "<< i+1 << " de la palabra" << endl;
        cin >> caracteringresado;
        caracter[i] = caracteringresado;
        i++;
    }
    imprimirVector(caracter,21);

    return 0;
}

void imprimirVector(char caracter[],int t){
    int i=0;
        while (caracter[i] =! 47){
            cout << caracter[i];
            i++;
        }
    return;
}

void inicializarChar(char caracter[], int t){
    for (int j=0;j<t;j++){
        caracter[j]=0;
    }
    return;
}

void imprimirInverso(char caracter[], int t){
    
    int primero = 0;
    
    for(int i=21;i>0;i++){
        while ((caracter[i] != 47 && caracter[i] !=0) || primero == 0){
            cout << caracter[i];
        }
    }
}