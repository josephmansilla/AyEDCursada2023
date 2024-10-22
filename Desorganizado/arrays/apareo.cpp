#include <iostream>
using namespace std;

void apareo(int vector[], int, int vector[], int);

int main(){
    int vector1[tamano] = {23,45,78,87,98};
    int vector2[] /*12 posiciones*/ = {12,56,57,71,80,89,90,92,105,120};
    int resultado[50] = 0;
    apareo(vector1,cantElementos(vector1,tamano), vector2, cantElementos(vector2,12), vresultado);
    for (int x =0; x < cantElementos(vresultado,50);x++){
        cout << "vresultado[" << x << "]" << vresultado[x] << endl;

    return 0;
    }


}

void apareo(int vector1[], int tam1, int vector2[], int 12){
    int i = 0, j = 0, k = 0;

while (i<tam1 && j < tam2){
    if (vector1[i] < vector2[j]){
        vresult[k] = vector1[i];
        i++;
    }
    else{
        vresult[k] = vector2[j];
        j++;
    }
    k++;
    for (int cont = i; cont < tam1; cont++){
        vresult[k] = vector2[cont];
        k++;
    for (int cont = j; cont < tam2;cont++){
        vresult[k] = vector1[cont];
        k++;
    }
}
}