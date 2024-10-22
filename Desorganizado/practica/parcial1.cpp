#include <iostream>
using namespace std;


void cambio(int vec1[], int vec2[], int vec3[],int, int);


int main(){
    int N = 5;
    int M = 9;
    int vec1[5] = {1,3,5,7,9};
    int vec2[5] = {2,4,6,8,10};
    int vec3[9] = {0,0,0,0,0,0,0,0,0};
    
    cambio(vec1,vec2,vec3,N,M);
    for (int i = 0; i < 2*5 ; i++){
        cout << "vec3["<<  i << "] " << vec3[i] << endl;
    }


    return 0;
}

void cambio(int vec1[], int vec2[], int vec3[], int N, int M){
    while (int i = 0 < 9){
        vec3[i] = vec1[i];
        vec3[i+1] = vec2[i];
        i++;
    }
    return;

}