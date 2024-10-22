#include<iostream>
using namespace std;

void TablaMultiplicar();

int main(){
    TablaMultiplicar();
}
void TablaMultiplicar(){
    int MUL[10][10] = {0};
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