#include<iostream>
using namespace std;
const int maximo = 10;

void LeerFila(int MAT[maximo][10],int max);
void InformarColumna(int MAT[maximo][10],int max);
void MinMax(int MAT[maximo][10], int max);
void TablaMultiplicar(int MAT[10][10]);

int main(){

    int MAT[maximo][10] = {0,0};

    TablaMultiplicar(MAT);
    InformarColumna(MAT, maximo);
    MinMax(MAT, maximo);
}

void LeerFila(int MAT[maximo][10],int max){
    for (int i = 0;i<max; i++){
        for (int j = 0; j<10;j++){
            cout << MAT[i][j] << " ";
        }
        cout << endl;
    }
}

void InformarColumna(int MAT[maximo][10],int max){
    int contador = 0;
    int sumatoria = 0;
    int max_elemento = 0;
    int fila_maximo = 0; //j 
    int columna_maximo = 0; //i
    int pos_diag = 0,neg_diag = 0;

    for (int i = 0; i<10; i++){
        for(int j = 0;j<max;j++){
            contador++;
            sumatoria += MAT[j][i];

            if (MAT[j][i] > max_elemento){
                fila_maximo = j;
                columna_maximo = i;
                max_elemento = MAT[j][i];
            }

            if (j==i && MAT[j][i]>0){
                pos_diag++;
            }
            else if (MAT[i][j] < 0 && (i+j == max-1)){
                neg_diag++;
            }
            cout << MAT[j][i] << " ";
        }
        cout << "\n";
    }
    cout << "La sumatoria de la matriz es " << sumatoria << endl;
    cout << "El promedio de la matriz es " << sumatoria / contador << endl;
    cout << "La cantidad de positivos en la diagonal principal es " << pos_diag << endl;
    cout << "la cantidad de negativos en la diagonal secundaria es " << neg_diag << endl;
}

void MinMax(int MAT[maximo][10], int max){
    int minimo = 0;
    int maximo = 0;

    for (int i = 0; i< max; i++){
        minimo = MAT[i][0];
        for (int j = 0; j < 10; j++){
            if (MAT[i][j]< minimo){
                minimo = MAT[i][j];
            }
        }
        cout << "El minimo de la fila " << i << " es " << minimo << endl;
    }

    for (int ñ = 0; ñ < 10; ñ++){
        maximo = MAT[0][ñ];
        for (int p = 0; p < max;p++){
            if (MAT[p][ñ]>maximo){
                maximo = MAT[p][ñ];
            }
        }
        cout << "El maximo de la columna" << ñ << " es " << maximo << endl;
    }
}

void TablaMultiplicar(int MUL[10][10]){
    for (int i = 1;i<11;i++){
        for (int j = 1; j<11 ; j++){
            MUL[i-1][j-1] = i*j;
        }
    }
    for (int i = 1;i<11;i++){
        for (int j = 1; j<11 ; j++){
            cout << MUL[i-1][j-1] << " ";
        }
        cout << endl;
    }
}