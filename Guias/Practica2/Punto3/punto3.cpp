#include <iostream>
using namespace std;

int main(){
    int valor_temp = 0, valor_minimo = 0;
    int N = 0, j = 0;
    int producto_impares = 0;

    cout << "Ingrese un valor: ";
    cin >> N;
    int vec[N];
    int pos_minima[N] = {0};

    for(int i=0;i<N;i++){
        cin >> valor_temp;
        if (valor_temp == 0){
            return 0;
        } 
        vec[i] = valor_temp;
        if (i == 0 && 0 == valor_minimo){
            valor_minimo = valor_temp;
            pos_minima[0] = i;
        }
        else if (valor_temp < valor_minimo){
            valor_minimo = valor_temp;
            pos_minima[0] = i;
        }
        else if (valor_temp == valor_minimo){
            pos_minima[j+1] = i;
            j++;
        }
        if (i%2==0 && vec[i]%2==1){
            producto_impares += vec[i];
        }
    }
    if (j==0){
        cout << "Valor minimo es " << valor_minimo << " en la posicion " << pos_minima[0];
    }
    else {
        cout << "Valor minimo es " << "-" << valor_minimo << "-" << " aparece " << j << " veces en la posiciones: " << endl;
        for (int k = 0;k < j;k++){
            cout << "-" << pos_minima[k] << "-" << " ";
        }
    }
}