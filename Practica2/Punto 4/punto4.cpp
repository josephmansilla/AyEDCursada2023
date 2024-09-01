#include <iostream>
using namespace std;

void Par_Impar (int max_size, float vec_A[], float vec_B[], float vec_C[]);
void iguales (int max_size, float vec_A[],float vec_B[], float vec_C[],float vec_D[]);

int main(){
    int max_size;
    cout << "ingrese el tamano maximo: ";
    cin >> max_size;
    float vec_A[max_size] = {0};
    float vec_B[max_size] = {0};
    float vec_C[max_size] = {0};
    float vec_D[max_size] = {0};

    for (int i = 0; i<max_size;i++){
        cin >> vec_A[i];
    }
    for (int j=0;j < max_size;j++){
        cin >> vec_B[j];
    }

    Par_Impar(max_size, vec_A, vec_B, vec_C);
    iguales(max_size, vec_A, vec_B, vec_C, vec_D);
    for (int k = 0 ; k < max_size; k++){
        cout << vec_C[k] <<" ";
    }
    cout << endl;
    for (int ñ = 0; ñ < max_size; ñ++){
        cout << vec_D[ñ] <<" ";
    }

}

void Par_Impar (int max_size, float vec_A[], float vec_B[], float vec_C[]){
    for (int n = 0; n < max_size; n += 2){
        vec_C[n] = vec_A[n+1];
    }
    for (int m = 0; m < max_size; m++){
        vec_C[m+1] = vec_B[m];
        m++;
    }
}

void iguales (int max_size, float vec_A[],float vec_B[], float vec_C[],float vec_D[]){
    for (int i = 0; i < max_size; i++){
        if (vec_A[i] == vec_B[i]){
            vec_D[i] = 1;
        }
        else{
            vec_D[i]==0;
        }
    }
}