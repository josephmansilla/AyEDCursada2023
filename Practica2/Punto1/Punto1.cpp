#include <iostream>
using namespace std;

int main(){
    int N = 0;
    int par = 0;

    cout << "Ingrese un numero: ";
    cin >> N;
    int VEC[N];

    for (int i = 0; i < N; i++){
        VEC[i] = par + 2;
        par++;par++;

    }
    for (int j=0;j < N; j++){
        cout << VEC[j] << " ";
    }
    

}