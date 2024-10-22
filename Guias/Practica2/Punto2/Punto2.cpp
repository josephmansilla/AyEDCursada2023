#include <iostream>
using namespace std;

int main(){
    int N = 0;

    cout << "Ingrese un valor: ";
    cin >> N;

    float vec[N] = {0};

    for (int i = 0; i<N;i++){
        cin >> vec[i];
    }
    if (vec[N-1] < 10){
        for (int j = 0; j<N;j++){
            if(vec[j]<0){
                cout << vec[j] << " "; 
            }
        }
    }
    else{
        for (int k = 0; k<N;k++){
            if (vec[k]>0){
                cout << vec[k] << "";
            }
        }
    }
}