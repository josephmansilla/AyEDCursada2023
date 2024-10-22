#include <iostream>
using namespace std;

struct Puerto{
    int id;
    int kg;
    int arribo;
};

int main(){
    int i = 0;
    int peso_total = 0, peso_mayor = 0;
    int id_mayor = 0;
    int cant_cont_1 = 0;
    int cant_cont_2 = 0;
    int cant_cont_3 = 0;
    Puerto buque;

    for (i=0; i < 2; i++){
        cout << "ID: ";
        cin >> buque.id;
        cout << "Peso: ";
        cin >> buque.kg;
        cout << "Puerto: ";
        cin >> buque.arribo;

        peso_total += buque.kg;
        if (i==0 || buque.kg > peso_mayor){
            peso_mayor = buque.kg;
            id_mayor = buque.id;
        }

        if (buque.arribo == 1){
            cant_cont_1++;
        }
        else if (buque.arribo == 2){
            cant_cont_2++;
        }
        else if (buque.arribo == 3){
            cant_cont_3++;
        }
        else{
            cout << "No existe ese puerto...";
        }


    }
    cout << "Peso total: " << peso_total << endl;
    cout << "ID + pesado: " << id_mayor << endl;
    cout << "Contenedores a puerto 1: " << cant_cont_1 << endl;
    cout << "Contenedores a puerto 2: " << cant_cont_2 << endl;
    cout << "Contenedores a puerto 3: " << cant_cont_3 << endl;

}