#include <iostream>
using namespace std;

int recursiva (int);

int main (){
    int n;
    int factorial;
    resultado = recursiva(n);
    return 0;
}

int recursiva (int n){
    if (n<=1){
        return 1;
    }
    return n * factorial_recursivo(n-1);
}