#include <iostream>

using namespace std;

int main (){
    int prom;
    int mayor = 0;
    int valoringresado;
    int juego = 0;
    for (juego; juego < 15; juego++){
        int i = 0;
        cout << "Juego numero: " << juego + 1;
        cout << endl << "Ingrese valores del juego " << juego+1 ;
        cout << endl << "Valor Nro: " << i +1 << endl;
        do {
            cin >> valoringresado;
            prom = prom + valoringresado;
            if (valoringresado > mayor){
                mayor = valoringresado;
            }
            cout << "Valor Nro: " << i +1 << endl;
            i++;
        }
        while (valoringresado);


        { if (valoringresado == 0)
            cout << endl << "Fin del juego numero " << juego + 1 << endl;
            cout << "El mayor numero del juego fue " << mayor << endl;
            cout << "El promedio es de " << prom/2 << endl << endl;
        }
        
    }
}