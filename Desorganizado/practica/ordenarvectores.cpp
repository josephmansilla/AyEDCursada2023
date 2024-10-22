#include <iostream>
using namespace std;

int main (){
    int MenorMayor[] = {2,200,500,51,1};

    for (int j=0;j<5;j++){
        for (int i = 0; i < 5; i++){
            if (MenorMayor[i] > MenorMayor[i+1]){
                int aux = MenorMayor[i];
                MenorMayor[i] = MenorMayor[i+1];
                MenorMayor[i+1] = aux;
            }
        }
    }
    
    int h = 0;
    while (h<5){
        cout << MenorMayor[h] << " ";
        h++;
    }
}