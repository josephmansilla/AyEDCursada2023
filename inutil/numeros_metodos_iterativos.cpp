#include <iostream>
using namespace std;
void burbuja(int[],int);

int main(){
    int N=6;
    int i;
    int vector[] = {3,67,2,100,88,4};
    burbuja (vector,N);

    for(i=0;i<N;i++){
        cout << vector [i] << endl;
    }
}

void burbuja(int v[], int N){
    int i,j;
    int aux;

    for(i=1;i<N;i++){ //Pasos
        
        for (j=1;j<=N-i;j++) 
        {
            if (v[j-1]>v[j]){
                aux=v[j-1];
                v[j-1]=v[j];
                v[j] = aux;

            }
        }
    } 
}